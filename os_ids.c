#include <stdio.h>
#include <unistd.h>

int main() {
 
printf("\nParent Process ID = %d and Child Process ID = %d\n", getppid(),getpid()); 
 
 return 0;
 }
