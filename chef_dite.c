#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n];
		int i;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		int res=0,va=0,count;
		for(i=1;i<=n;i++)
		{	
			res=0;		
			if(a[i]>=k)
			{
				res=a[i]-k;
				a[i+1]=a[i+1]+res;
			}
			else
			{
				va=i;
				break;
			}
		}
		if(va!=0)
		{
			printf("NO %d\n",va);
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
