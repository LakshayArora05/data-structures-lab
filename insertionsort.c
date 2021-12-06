#include <stdio.h>
int main()
{
int i,j,temp,array[20],n;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter your elements");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for (int i = 1;i < n; i++) {
int key = array[i];
int j = i - 1;
// Compare key with each element on the left of it until an element smaller than
// it is found.
// For descending order, change key<array[j] to key>array[j].
while (key < array[j] && j >= 0) {
array[j + 1] = array[j];
--j;
}
array[j + 1] = key;
}
printf("sorted list in ascending order is:");
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
}