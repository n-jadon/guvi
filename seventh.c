#include<stdio.h>
void main()
{
	int i,a;
	scanf("%d",&a);
	if(a>=0)
	{
		for(i=0;i<a;i++)
		printf("Hello\n");
	}
	else
	printf("Invalid input");
}