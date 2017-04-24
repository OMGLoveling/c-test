#include<stdio.h>
void sort(int n)
{
	if(n<60)
	{
		printf("E\n");
	}
	else if(n<70&&n>=60)
	printf("D\n");
	else if(n>=70&&n<80)
	printf("C\n");
	else if(n>=80&&n<90)
	printf("B\n");
	else
	printf("A\n");
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	sort(a);
	sort(b);
}
