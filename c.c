#include<stdio.h>
int main()
{
    int i,n,x=0,y=1,z,sum=0;

    printf("enter a no= ");
    scanf("%d",&n);
     printf("fibonacci series= ");
     for(i=1;i<=n;i++)
       {
        printf("%d ",x);
         sum+=x;
       z=x+y;
        x=y;
        y=z;


       }
       {printf("\n ans=%d",sum);}
return 0;

}
