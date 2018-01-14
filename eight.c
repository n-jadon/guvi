#include<stdio.h>
void main()
{
	int i,a,sum=0;
	scanf("%d",&a);
	if(a>=0)
	{
		for(i=0;i<=a;i++)
		sum+=i;
		printf("%d",sum);
	}
	else
	printf("Invalid input");
}