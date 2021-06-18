function  serialMonitorWrite( u , s_2)
text = sprintf('SenB%2.4f,%2.4f,%2.4fE\n',u(1),u(2),u(3));
fprintf(s_2,text);
end