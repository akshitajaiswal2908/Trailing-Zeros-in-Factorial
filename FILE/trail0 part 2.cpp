#include<stdio.h>
int main()
{
 int n=0;
 printf("n: ");
 scanf("%d",&n);
 int trail=0;
for(int i=5;i<=n;i=i*5)
{
	trail=trail+n/i;
}
printf("%d",trail);
return 0;
}
