#include<stdio.h>
int main()
{
	int i,j,t=0,s=0;
	int a,n;
	scanf("%d%d",&n,&a);
	int k;
	k=a;
	for(i=1;i<=n;i++)
	{	
		t=0;
		a=k;
		for(j=1;j<=i;j++)
		{
			t=a+t;
			a=a*10;
		}
		s=s+t;
	}
	printf("%d",s);
}
