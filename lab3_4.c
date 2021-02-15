#include<stdio.h>
int main()
{
    int f,k,i,j;
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
            f=i;
    }
    printf("%d",f);
    return 0;
}
