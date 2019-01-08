set down=C:\Youtube-DL\Downloads
set conv=C:\Youtube-DL\Converted
set bckp=C:\Downloads

for %%a in ("%down%\*.*") do (ffmpeg.exe -i "%%a" -c:v mpeg4 -vtag XVID -b:v 990k -g 300 -s 640x360 -acodec libmp3lame -ab 128k -ar 48000 -ac 2 -threads 0 -f avi "%conv%\%%~na.avi")

for %%f in ("%down%\*.*") do (move  "%%~f" %bckp%)

