set down=C:\Youtube-DL\Downloads
set bckp=C:\Downloads

for %%c in ("%down%\*.*") do (ffmpeg.exe -i "%%c" -itsoffset -5.84 -i "%%c" -map 0:v -map 1:a -vcodec copy -acodec copy %bckp%\PokeScykohNuzlockSS.avi )


