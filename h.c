#include<stdio.h>
#include<math.h>
void fix(int x,int y,int z)
{
	float t,k,s1,s2;
	t=y*y-4*x*z;
	s1=(-y+sqrt(t))/(2.0*x);
	s2=(-y-sqrt(t))/(2.0*x);
	if(s1>s2)
	{
		k=s1;
		s1=s2;
		s2=k;
	}
	printf("%10.2f%10.2f\n",s1,s2);
}
int main()
{
	int a,b,c,i=1;
	while(i<3)
	{
		scanf("%d%d%d",&a,&b,&c);
		fix(a,b,c);
	}
}

