function [Y,f] = plotfft(Fs,y,flag,PLOTTYPE)
% function [Y,f] = plotfft(Fs,y,flag,PLOTTYPE)
% Plots the Frequency contents of a signal via FFT algorithm

% Fs, is sampling frequency in Hz
% y is the data in column vector format
% flag = 1 shows fftplot, 0 suppresses plot
% PLOTTYPE option can be three types
%       'linear' - plots FFT with linear x and y axes.
%       'logdb'  - plots FFT with log in x axes and dB in y axes
%       'loglinear' - plots FFT with log in x axes and linear y axes

% if ~iscolumn(y)
%     errordlg('ERROR: Input data must be in column vector format!!!');
%     return;
% end

if nargin<3
    flag=1;
end;
if nargin<4
    PLOTTYPE='linear';
end;
L = y;no_pts = 2^nextpow2(length(L));
Y = fft(y,no_pts)/(no_pts);% divide by /no_pts to normalize fft ;
f = Fs/2*linspace(0,1,length(Y)/2);

szSig = size(y);
% Plot single-sided amplitude spectrum.
if flag ==1
    for i = 1:szSig(2)
        figure
        if strcmp(PLOTTYPE,'linear')
            plot(f,2*abs(Y(1:floor(length(Y)/2),i)));
            ylabel('|Y(f)|');
        elseif strcmp(PLOTTYPE,'logdb')
            semilogx(f,20*log10((2*abs(Y(1:floor(length(Y)/2),i)))));
            ylabel('|Y(f)| (dB)');
        elseif strcmp(PLOTTYPE,'loglinear')
            semilogx(f,(2*abs(Y(1:floor(length(Y)/2),i))));
            ylabel('|Y(f)|');
        elseif strcmp(PLOTTYPE,'smoothed')
            frsm=logspace(-2,log10(Fs/2),50)';
            smY = smoothin(f',Y(:,i),frsm);
            semilogx(frsm,20*log10(abs(smY)));
            ylabel('|Y(f)| (dB)');
        end
        title(['Single-Sided Amplitude Spectrum of y(t), Column : ' num2str(i)]);
        xlabel('Frequency (Hz)');
        
    end
end;

Y = Y(1:floor(length(Y)/2),:);
end