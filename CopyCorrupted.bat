set down=C:\Youtube-DL\Downloads
set conv=C:\Youtube-DL\Converted

for %%a in ("%down%\*.*") do (ffmpeg.exe -i "%%a" -c:v copy -c:a copy "%conv%\%%~na.avi")

for %%f in ("%down%\*.*") do (del  "%%~f")

