#include<stdio.h>
int main()
{
    int k,i,j;
    scanf("%d",&k);
    char number[k];
     for(i = 0; i <= k; i++)
    {
        number[i]=1;
    }
    for(i = 2; i <= k; i++)
    {
        if(number[i]==1)
        {
            for(j=2*i; j<=k; j=j+i)
            {
                number[j]=0;
                if(i%2==0)
                    number[j]=0;
                else if(i%3==0)
                    number[j]=0;
                else if(i%5==0)
                    number[j]=0;
                else if(i%7==0)
                    number[j]=0;
            }

        }
    }
    for(i=2; i<=k; i++)
    {
        if(number[i]==1)
        {
            for(i=2;i<=k;k=k/i)
            printf("%d\n",i);
        }

    }

    /*for(i=0; i<=k; i++)
    {
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0)&& (i!=2 && i!=3 && i!=5 && i!=7))
            continue;

        printf("%d",i);

        k=k/i;

    }*/

    return 0;
}
