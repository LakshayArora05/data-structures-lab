#include <stdio.h>
int main()
{
char s1[100], s2[100],s3[100];
int i,j;
printf("\n enter first string:");
gets(s1);
printf("\n enter second string:");
gets(s2);
while (s1[i] != '\0')
{
s3[j] = s1[i];
i++;
j++;
}
i=0;
while (s2[i] != '\0')
{
s3[j] = s2[i];
i++;
j++;
}
s3[j] = '\0';
printf("\n the final string is:");
printf("%s", s3);
return 0;
}