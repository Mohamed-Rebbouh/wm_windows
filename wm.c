#include <Windows.h>
#include<signal.h>
#include<stdlib.h>

HHook hookHandel;

void crtlc(int sig){
    UnhookWindowsHookEx(hookHandel);
    exit(0);
}

int main(){
    HMODULE wmDLL=LoadLibraryW(L"wm_dll");
    FARPROC ShellProc =GetProcAdress(wmDLL,"ShellProc");

    hookHandel=SetWindowHookExW(WH_SHELL,ShellProc,wmDLL,0);
    signal(SIGINT,crtlc);

    for(;;){

    }





}