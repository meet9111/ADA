#include <stdio.h>
#include <stdlib.h>
int main()
{

int deno[]={500,200,100,50,10,1},n,i=0,j;
 printf("Enter Total:");
  scanf("%d",&n);
while(n>0)
{
if(n>=deno[i])
{
n=n-deno[i];
printf(" %d " ,deno[i]);
}
else
{
i++;
}
}
return 0;
}
