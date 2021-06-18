function [ IdentifiedPlant,error] = SysIdFunction( t,U,Y,BW,Order )


if nargin<5
    FilOrder = input('Enter order of system : ');
if nargin<4
BwFil = input('Bandwidth of denominator filter : '); %specify the bandwidth of the filter.
else
    BwFil=BW;
end
else
        BwFil=BW;
    FilOrder=Order;
end;

 %specify the bandwidth of the filter.%

%Remove means 
u=U-mean(U);y=Y-mean(Y);

filtden=1;
for index=1:FilOrder
filtden = conv(filtden,[1 BwFil]);
end
FilSys=ss(tf(1,filtden));
FilSys1=ss(FilSys.a',FilSys.c',eye(FilOrder),0);
wU = lsim(FilSys1,u,t);
wY= lsim(FilSys1,y,t);% s U(s)
w=[wU wY];
param = (w'*w)\w'*y;
error=y-w*param;
theta1=param(1:FilOrder);
theta2=param(FilOrder+1:end);
Aindent=FilSys.a+theta2*FilSys.c; Bident=theta1; Cident=FilSys.c;Dident=0;
IdentifiedPlant=tf(ss(Aindent,Bident,Cident,Dident));
 Yest=lsim(IdentifiedPlant,u,t);
 plot(t,Y,t,Yest+mean(Y));
 title(strcat('Order: ', num2str(Order)));
 legend('Acutal Y', 'Estimated Y')

end

