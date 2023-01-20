#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++);
	{
		sum=sum+(i*i*i);
	}
	printf("%d",sum);
}