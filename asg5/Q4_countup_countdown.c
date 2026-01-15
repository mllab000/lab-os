/* Countup and Countdown alternately */
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s1,s2;

void* down(void* arg){
    for(int i=10;i>=1;i--){
        sem_wait(&s1);
        printf("%d ",i);
        sem_post(&s2);
    }
    return NULL;
}

void* up(void* arg){
    for(int i=1;i<=10;i++){
        sem_wait(&s2);
        printf("%d ",i);
        sem_post(&s1);
    }
    return NULL;
}

int main(){
    pthread_t t1,t2;
    sem_init(&s1,0,1);
    sem_init(&s2,0,0);
    pthread_create(&t1,NULL,down,NULL);
    pthread_create(&t2,NULL,up,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}
