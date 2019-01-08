set down=C:\Youtube-DL\Downloads
set bckp=C:\Downloads

for %%c in ("%down%\*.*") do (ffmpeg.exe -ss 01:23:00 -i "%%c" -t 00:23:05 -c copy %bckp%\PokeScykohNuzlockSS.avi)

