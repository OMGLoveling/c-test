#include<stdio.h>
void sort(int a,int b,int c)
{
	int t;
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
	t=b;
	b=c;
	c=t;
	}
printf("%d %d %d\n",c,b,a);
}
int main()
{
	int a,b,c,i=1;
	while(i<3)
	{
		scanf("%d%d%d",&a,&b,&c);
		sort(a,b,c);
		i++;
	}
	
}
