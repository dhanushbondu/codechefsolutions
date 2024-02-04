#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {   
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int corret=b*3;
        int incorret=(a-b);
        int res=(corret-incorret);
        if(res>=c)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }
    return 0;
}