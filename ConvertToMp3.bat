set down=C:\Youtube-DL\Downloads
set conv=C:\Youtube-DL\Converted
set bckp=C:\Downloads

for %%a in ("%down%\*.*") do (ffmpeg.exe -i "%%a" -vn -ar 44100 -ac 2 -ab 192k -f mp3 "%conv%\%%~na.mp3")

for %%f in ("%down%\*.*") do (move  "%%~f" %bckp%)

