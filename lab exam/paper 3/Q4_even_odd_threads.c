// Two threads printing even and odd numbers from 1 to 20
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t odd, even;
int num=1;

void* print_odd(void* arg){
    while(num<=20){
        sem_wait(&odd);
        if(num<=20){
            printf("%d ",num);
            num++;
        }
        sem_post(&even);
    }
    return NULL;
}

void* print_even(void* arg){
    while(num<=20){
        sem_wait(&even);
        if(num<=20){
            printf("%d ",num);
            num++;
        }
        sem_post(&odd);
    }
    return NULL;
}

int main(){
    pthread_t t1,t2;
    sem_init(&odd,0,1);
    sem_init(&even,0,0);

    pthread_create(&t1,NULL,print_odd,NULL);
    pthread_create(&t2,NULL,print_even,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    return 0;
}
