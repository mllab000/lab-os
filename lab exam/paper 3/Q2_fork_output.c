// Print all possible outcomes of fork program
#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t pid;
    int i=5;

    pid=fork();
    i=i+1;

    if(pid==0){
        printf("Child: %d\n",i);
    }
    else{
        printf("Parent: %d\n",i);
    }
    return 0;
}
