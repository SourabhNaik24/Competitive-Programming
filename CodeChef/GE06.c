#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int n;
    scanf("%d",&n);
    if( n==1 || n==2 )
        printf("NO\n");
    else
    {
        for(int i=2;i<n;i++)
        {
            int f=0;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                printf("%d ",i);
        }
        printf("\n");
    }
	return 0;
}