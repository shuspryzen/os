#include<pthread.h>
#include<stdio.h>
#define NUM_THREADS 5
void *printhello(void *threadid)
{
long tid;
tid=(long)threadid;
printf("hello world ! it's me,thread#%d!\n",tid);
pthread_exit(NULL);
}
int main(int argc,char *argv[])
{
pthread_t threads[NUM_THREADS];
int rc;
long t;
for(t=0;t<NUM_THREADS;t++)
{
printf("in main: creating thread %ld\n",t);
rc=pthread_create(&threads[t],NULL,printhello,(void *)t);
if(rc)
printf("ERROR:return code from pthread_create() is %d \n",rc);
}
pthread_exit(NULL);
}
