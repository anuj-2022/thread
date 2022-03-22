#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* fun_call(void* arg)
{
//int i;
for(int i=0;i<5;i++)
{
	sleep(1);
	printf("in the function %d\n",i);
}
}
void* fun_big(void* arg)
{
char ch=65;
int i=0;
for(i=0;i<26;i++)
{
printf("in secont thread %c \n",ch+i);
sleep(1);
}
}

void* fun_small(void* arg)
{
char ch=97;
for(int i=0;i<26;i++)
{
printf("in third thread %c \n",ch+i);
sleep(1);
}
}

int main()
{
pthread_t id,id1,id2;
pthread_create(&id,NULL,&fun_call,NULL);
pthread_create(&id1,NULL,&fun_big,NULL);
pthread_create(&id2,NULL,&fun_small,NULL);
pthread_join(id,NULL);
pthread_join(id1,NULL);
pthread_join(id2,NULL);
for(int i=0;i<=10;i++)
{
sleep(1);
printf("\n%d\n",i);
}
}
