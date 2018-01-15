#include<stdio.h>
void main()
{
	int n,k,sum=0;
	scanf("%d%d",&n,&k);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n<k)
	printf("Invalid Input");
	else
	{
		for(i=0;i<k;i++)
			sum+=a[i];
		printf("%d",sum);
	}
}