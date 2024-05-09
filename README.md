## excute:

navigate to the this folder 
```
gcc -c wm.c
gcc -c wm_dll.c    
gcc -shared -o wm_dll.dll wm.o wm_dll.o -luser32 
./wm 
```
