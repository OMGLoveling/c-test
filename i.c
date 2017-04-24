#include<stdio.h>
int main()
{
	int i,j,a,b;
	float s=0,t=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		s=s+1.0/i;	
	}
	for(j=1;j<=b;j++)
	{
		t=t+1.0/j;
	}
	printf("%6.2f\n",s);
	printf("%6.2f",t);
}	
