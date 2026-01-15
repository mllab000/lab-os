/* Three child processes */
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
    pid_t p1,p2,p3;

    p1=fork();
    if(p1==0){
        printf("Child1 PID=%d PPID=%d\n",getpid(),getppid());
        execlp("cp","cp","file1","file2",NULL);
    }
    sleep(1);

    p2=fork();
    if(p2==0){
        printf("Child2 PID=%d PPID=%d\n",getpid(),getppid());
        execlp("cat","cat","file2",NULL);
    }
    sleep(1);

    p3=fork();
    if(p3==0){
        printf("Child3 PID=%d PPID=%d\n",getpid(),getppid());
        execlp("sort","sort","-r","file2",NULL);
    }

    wait(NULL); wait(NULL); wait(NULL);
    printf("Parent PID=%d completed\n",getpid());
}
