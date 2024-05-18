#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
void main(){
    int pid,status,i,j,k;
    if((pid=fork())<0)
        printf("fork error");
    else if(pid==0){
        
    }
}