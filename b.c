#include<stdio.h>
int main()
{
	int n,i,t=1,j;
	float s=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	t=1;
		for(j=1;j<=i;j++)
		{
			t=t*j;		
		}
		s=s+1*1.0/t*1.0;
	}
	printf("%.3f",s);
}
