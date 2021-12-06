#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 2
int st[MAX],top=-1;
void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main()
{
printf("\nWhat do you want to perform?");
int val, option;
do
{
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Display");
printf("\nEnter your option:");
scanf("%d",&option);
switch(option)
{
case 1:
printf("\nenter number to be pushed in the stack:");
scanf("%d",&val);
printf("\nThe element is inserted.Now?");
push(st,val);
break;
case 2:
val=pop(st);
if (val==-1)
{
printf("\nstack underflow");
}
else
{
printf("\nthe value that is deleted is : %d", val);
22
break;
case 3:
printf("\nYour stack is:");
display(st);
break;
}
}
while (option != 4);
return 0;
}
void push (int st[],int val)
{
if (top == MAX-1)
{
printf("\nstack overflow");
}
else
{
top++;
st[top]= val;
}
}
}
int pop(int st[])
{
int val;
if (top==-1)
{
return -1;
}
else
{
val=st[top];
top--;
return val;
}
23
}
void display (int st[])
{
int i;
if (top==-1)
printf("\nstack is empty");
else
{
for (i=top;i>=0;i--)
printf("%d",st[i]);
}