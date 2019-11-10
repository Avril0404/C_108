#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
int i, j, k = 0, c = 0, len, count[26];
char string[30];
gets(string);
len = strlen(string);
for(i = 0; i < 26; i++)
count[i] = 0;
for(i = 65; i < 90; i++)
{
for(j = 0; j < len; j++)
{
if(string[j] == toupper(i) || string[j] == tolower(i))
count[k] = ++c;
}
k++;
c=0;
}
for(i = 0; i < 25; i++)
printf("%d \n",count[i]);
return 0;
}
