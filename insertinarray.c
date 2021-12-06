#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,key,array[20],location;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for (i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("enter the element you want to insert");
scanf("%d",&key);
printf("enter the index number at which you want to insert");
scanf("%d",&location);
for (i=0;i<n;i++)
{
if (location>n)
{
printf("incorrect,try again-PROGRAM TERMINATED");
return 0;
}
}
n++;
for (i=n-1;i>=location;i--)
{
array[i+1]=array[i];
}
array[location]=key;
for (i=0;i<n;i++)
{
printf("%d",array[i]);
}
return 0;
