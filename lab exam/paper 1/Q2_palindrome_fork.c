// Child reverses string, parent checks palindrome
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(){
    char str[100], rev[100];
    int i, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);
    pid_t pid = fork();

    if(pid == 0){
        for(i=0;i<len;i++)
            rev[i] = str[len-i-1];
        rev[len] = '\0';
        printf("Reversed string: %s\n", rev);
    }
    else{
        wait(NULL);
        int flag = 1;
        for(i=0;i<len;i++){
            if(str[i] != str[len-i-1]){
                flag = 0;
                break;
            }
        }
        if(flag) printf("Palindrome\n");
        else printf("Not Palindrome\n");
    }
    return 0;
}
