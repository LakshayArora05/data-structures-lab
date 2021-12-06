#include<stdio.h>
#include<stdlib.h>
#define max 10
int insert( int queue[max], int *rear , int *data)
{
if ( *rear == max -1 )
return(-1);
else
{
*rear = *rear + 1;
queue[*rear] = *data;
return(1);
}
}
int del( int queue[max], int *front, int *rear , int *data)
{
if ( *front == *rear)
return(-1);
else
{
(*front)++;
*data = queue[*front];
return(1);
}
}
int main()
{
int queue[max],data;
int front,rear,reply,option;
front = rear = -1;
printf("Menu \n 1. Insert element in queue \n 2. Delete element from queue \n 3. Exit");
while(1)
{
printf("\nChoose operation : ");
scanf("%d",&option);
switch(option)
{
case 1 :
printf("\nEnter Number : ");
scanf("%d",&data);
reply = insert(queue,&rear,&data);
if ( reply == - 1)
printf("Queue is full");
else
27
printf("%d is inserted in queue.\n",data);
break;
case 2 :
reply = del(queue,&front,&rear,&data);
if ( reply == -1 )
printf("Queue is empty ");
else
printf("\nDeleted number is : %d\n", data);
break;
case 3 : exit(0);
}
}
}