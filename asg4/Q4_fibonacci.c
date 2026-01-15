/* Fibonacci using child process */
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}

int main(){
    int n;
    printf("Enter length: ");
    scanf("%d",&n);

    int fib[n];
    pid_t pid=fork();

    if(pid==0){
        fib[0]=0; fib[1]=1;
        for(int i=2;i<n;i++)
            fib[i]=fib[i-1]+fib[i-2];
        _exit(0);
    }else{
        wait(NULL);
        for(int i=0;i<n;i++)
            printf("%d ",fib[i]);
        printf("\n");
        for(int i=0;i<n;i++)
            if(isPrime(fib[i]))
                printf("Prime Fibonacci %d at position %d\n",fib[i],i);
    }
}
