set down=D:\Programas\Youtube-DL\Downloads
set conv=D:\Programas\Youtube-DL\Converted
set bckp=D:\Programas\Youtube-DL\Converted

for %%a in ("%down%\*.*") do (ffmpeg.exe -i "%%a" -map 0:s:0 "%conv%\%%~na.srt")

for %%f in ("%down%\*.*") do (move  "%%~f" %bckp%)

