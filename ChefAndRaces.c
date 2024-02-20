#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int count=0;
		if(a!=c && a!=d)
		{
			count++;
		}
		if(b!=c && b!=d)
		{
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
