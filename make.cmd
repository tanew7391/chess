@echo off
setlocal EnableDelayedExpansion
set include1=C:\devLibs\SDL2_mingw32\include
set link1=C:\devLibs\SDL2_mingw32\lib
set extra=.o
set files=TextureManager GameObject Game main

set x=-1

FOR %%A IN (%files%) DO (
    set /a x=x+1
    set files[!x!]=%%A%extra%
    IF "%1"=="" g++ %%A.cpp -Wall -Wextra -I%include1% -c
)

for /l %%n in (0,1,%x%) do ( 
   call set "fileList=!fileList! !files[%%n]!"
)
IF "%1"=="clean" GOTO clean

g++%fileList% -I%include1% -L%link1% -lSDL2_image -lmingw32 -lSDL2main -lSDL2 -o main
goto end

:clean

del /p %fileList% main.exe

:end