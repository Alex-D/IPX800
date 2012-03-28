rem copyright gce.electronics
echo off 
cls
title GCE.ELECTRONICS IP Flash Utility V1.03


echo *****************************************************************
echo     GCE.ELECTRONICS IP Flash Utility V 1.03 for 2.0502 firmware
echo *****************************************************************
echo.
echo Assurez vous que le fichier gceip20502.hex est a la racine du disque dur  c:\
echo.


pause

echo. 
echo.
echo.
echo.
echo Eteignez et rebranchez la carte relais IP 
echo.
echo Attendez 1 seconde (Led orange clignotante).
echo.
pause
tftp 192.168.1.159 put c:\gceip20502.hex
echo.
pause







