s_2 = serial('COM4','BaudRate',115200,'FlowControl','none','Parity','none','DataBits',8,'StopBits',1,'Timeout',3);
s_2.InputBufferSize=1024; s_2.OutputBufferSize=1024;
s_2.Terminator='LF';
get(s_2);
fopen(s_2);
for index=1:10000
%      anodeRefVoltage=Input1(index);
%       dacOutput=uint16(((anodeRefVoltage)/5)*(4095));
%    data1=uint8(bitand(dacOutput, 255));
%    data2=uint8(bitshift(dacOutput,-8)) ; 
%  
%  
%    startTime=clock;
%     fwrite(s_2, ([ data1 data2 ]));
     a=cellstr(fgets(s_2))
 tline(index)= a;


%  tline1 = fgets(s_2)
 end
    fclose(s_2);