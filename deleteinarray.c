#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,array[20],location;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements in ascending order:");
for (i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("enter the index number at which you want to delete");
scanf("%d",&location);
for (i=0;i<n;i++)
{
if (location>n)
{
printf("incorrect,try again-PROGRAM TERMINATED");
return 0;
}
}
for (i=location-1;i<n-1;i++)
{
array[i]=array[i+1];
}
for (i=0;i<n-1;i++)
{
printf("%d",array[i]);
}
return 0;
}