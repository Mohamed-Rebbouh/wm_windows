it's lighte windows manager to tailing windows using windows api 
## excute:
navigate to the this folder 
```
gcc -c wm.c
gcc -c wm_dll.c
gcc -shared -o wm_dll.dll wm.o wm_dll.o -luser32
gcc -o wm.exe wm.o -L. -lwm_dll -luser32
./wm 
```
