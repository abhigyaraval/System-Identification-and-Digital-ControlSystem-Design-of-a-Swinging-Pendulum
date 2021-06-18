% Experiment 4.2- Abhigya Raval
clear all; clc

s = tf('s');
%  Givens

P = (-0.0003333*s + 0.03398)/(s^2 + 1.52*s + 9.922);

BW= 20;
PM = 60; Wgc = BW/1.5; 
Ts = 0.01;

% Controller

tau = Ts/2;
zohLag = -Wgc*Ts/2*180/pi; %compute lag from ZOH
[~,phP]=bode(P,Wgc);%phase of plant
if phP>0
phP = mod(phP,360); % bring phP within +/-360
phP = phP-360; % provide negative shift
end
IntTau = tf(1,[tau 1 0]); % integrator and tau phase (s(tau*s+1))
[~,phIntTau]=bode(IntTau,Wgc);

% phZ = (PM-180-phP-phIntTau)/2; %phase of each zero
phZ = (PM-180-phP-phIntTau-zohLag)/2; %phase of each zero

a = Wgc/tand(phZ);% compute zero location
% Get mag for PID with pseudo pole filter at Wgc
[mPintTauZ,~]=bode(P*IntTau*tf([1 2*a a^2],1),Wgc); %(s+a)^2=tf([1 2*a a^2],1)
K = 1/mPintTauZ;%find K;

C_DT=K*(s+a)^2/(s*(tau*s+1)); % PID controller
TryCT = feedback(C_DT*P,1);

CdTustin = c2d(C_DT,Ts,'tustin');
Pzoh = c2d(P,Ts,'zoh');
L_DT=CdTustin*Pzoh;
allmargin(L_DT)
TryTus = feedback(L_DT,1);

figure(1)
step(TryCT,TryTus)
%% Sensitivity
figure(4)
S = P*C_DT/(1 + P*C_DT);
CS = 1 -S;

bode(S)
figure(5)
bode(CS)

%% Part 5
M = 4;
F = (a*M)/(s+(a*M));

newTR = F*TryCT;
step(newTR, TryCT)
legend('With filter','Without filter')