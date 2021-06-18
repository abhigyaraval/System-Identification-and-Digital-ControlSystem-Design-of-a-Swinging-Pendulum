function [ y ] = serialMonitorRead(u, s_2 )
%SERIALWRITE Summary of this function goes here
%   Detailed explanation goes here
%send the first three values in u
% text = sprintf('SenB%2.2f,%2.2f,%2.2fE\n',u(1),u(2),u(3));
% fprintf(s_2,text);

%read the last 9 values in u
disp('Hello');
try
str=fgets(s_2);
y=[0;0;0;0;0;0;0;0;0;];
C = strsplit(str,',');
 if(length(C)==9)
         y(1)=str2double(cell2mat(C(1)));
         y(2)=str2double(cell2mat(C(2)));
         y(3)=str2double(cell2mat(C(3)));
         y(4)=str2double(cell2mat(C(4)));
         y(5)=str2double(cell2mat(C(5)));
         y(6)=str2double(cell2mat(C(6)));
         y(7)=str2double(cell2mat(C(7)));
         y(8)=str2double(cell2mat(C(8)));
         y(9)=str2double(cell2mat(C(9)));
       
 else 
    disp('inside else')
    y=u(1:9);  
 end
catch
    disp('inside else')
 y=u(1:9);
end
end

% function [ y ] = serialRead(u, s_2 )
% %SERIALWRITE Summary of this function goes here
% %   Detailed explanation goes here
% try
% str=fgets(s_2);
% y=[0;0;0;0;0;0;0;0;0];
% C = strsplit(str,',');
%  if(length(C)==9)
%          y(1)=str2double(cell2mat(C(1)));
%          y(2)=str2double(cell2mat(C(2)));
%          y(3)=str2double(cell2mat(C(3)));
%          y(4)=str2double(cell2mat(C(4)));
%          y(5)=str2double(cell2mat(C(5)));
%          y(6)=str2double(cell2mat(C(6)));
%          y(7)=str2double(cell2mat(C(7)));
%          y(8)=str2double(cell2mat(C(8)));
%          y(9)=str2double(cell2mat(C(9)));
%        
%  
%  else
%      y=u;
%  end
% catch
%  y=u;
% end
% end
