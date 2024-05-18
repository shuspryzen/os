#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>

void main(){
    int pid;
    int data=200;
    pid = fork();
    if(pid == 0){
        printf("\n\t\t\t child process\n");
        data+=100;
        printf("process id: %d\n",getpid());
        printf("Parent process id : %d\n",getppid());
        printf("Value of data : %d\n",data);
    }
    else{
        printf("\n\t\t\t parent process\n");
        printf("process id: %d\n",getpid());
        printf("Parent process id : %d\n",getppid());
        printf("Value of data : %d\n",data);
    }
}