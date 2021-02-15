#include<stdio.h>
int main()
{
    unsigned int n;
    int a,i,j,f=1,k=0;
    scanf("%d",&n);
    if((n>0)&&(n<10000));
    char number[n];

    for(i = 0; i <= n; i++)
    {
        number[i]=1;
    }
    for(i = 2; i <= n; i++)
        if(number[i]==1)
        {
            for(j=2*i; j<=n; j=j+i)
            {
                number[j]=0;
                if(i%2==0||i%3==0||i%5==0||i%7==0)
                    number[j]=0;
            }

        }

    for(i=2; i<=n; i++)

        if(number[i]==1)
            if(n%i==0)
            {
                f=f*i;
                k++;

            }

    if(f==n&&k==3)
        printf("%d is a Lucky Number",n);
    else
        printf("%d is not a Lucky Number",n);

    return 0;
}
