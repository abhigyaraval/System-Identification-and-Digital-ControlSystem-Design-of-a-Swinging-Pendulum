% Abhigya Raval Lab 4 EEE481

%% Inputting the constants
clear all; clc
Ts = 0.01;    % Sample time
Tsw = 0.03; % Switching time

% Motor
R = 2.4;
K = 0.9;

% Pendulum

m = 0.5; % mass
L = 1;      % length of bob   

epsilon = 0.5;

theta_0 = 0;  % init
theta_dot_0 = 0; % init



%% data
load dataU 
load dataT
load dataY
% T = ScopeData.time(1000:end);
% U = ScopeData.signals(1).values(1000:end);
% Y = ScopeData.signals(2).values(1000:end);

% % figure(1)
% plot(T,U)
% hold on
% 
% figure(2)
% plot(T,Y)


%% fft
figure(3)
plotfft(1/Ts,U,1,'logdb');

%% System identifications

BW = 20;
% 
% [IdentifiedPlant1, error1] = SysIdFunction(T, U, Y, BW, 1);
% mse1 = mean(error1.^2);

[IdentifiedPlant2, error2] = SysIdFunction(T, U, Y, BW, 2);
mse2 = mean(error2.^2);

% [IdentifiedPlant3, error3] = SysIdFunction(T, U, Y, BW, 3);
% mse3 = mean(error3.^2);
% 
% [IdentifiedPlant4, error4] = SysIdFunction(T, U, Y, BW, 4);
% mse4 = mean(error4.^2);

% [IdentifiedPlant5, error5] = SysIdFunction(T, U, Y, BW, 5);
% mse5 = mean(error5.^2);

% [IdentifiedPlant6, error6] = SysIdFunction(T, U, Y, BW, 6);
% mse6 = mean(error6.^2);


%% Some more stuff
step(IdentifiedPlant2)


%% Experiment 4.2

