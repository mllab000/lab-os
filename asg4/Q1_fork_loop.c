/* fork(): parent & child infinite loop */
#include <stdio.h>
#include <unistd.h>
int main(){
    pid_t pid=fork();
    if(pid==0){
        printf("Child PID=%d\n",getpid());
        while(1);
    }else{
        printf("Parent PID=%d\n",getpid());
        while(1);
    }
}
