set down=C:\DevC\Downloads
set conv=C:\DevC\Converted

for %%a in ("%down%\*.*") do (ffmpeg.exe -ss 00:00:00 -i "%%a" -t 00:30:00 -c:v copy -c:a copy "%conv%\%%~na.avi")
