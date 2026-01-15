// Child prints binary, parent checks palindrome
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(){
    int n, bin[32], i=0;
    char s[32], r[32];

    printf("Enter number: ");
    scanf("%d",&n);

    pid_t pid=fork();

    if(pid==0){
        int temp=n;
        while(temp>0){
            bin[i++]=temp%2;
            temp/=2;
        }
        for(int j=0;j<i;j++)
            s[j]=bin[i-j-1]+'0';
        s[i]='\0';
        printf("Binary: %s\n",s);
    }
    else{
        wait(NULL);
        int len=strlen(s), flag=1;
        for(i=0;i<len;i++){
            if(s[i]!=s[len-i-1]){
                flag=0;
                break;
            }
        }
        if(flag) printf("Binary is Palindrome\n");
        else printf("Binary is Not Palindrome\n");
    }
    return 0;
}
