#include<stdio.h>
int main()
{
    int i,j,max=0,imax=0;
    int s[5][4];
    for(i=1; i<=5; i++)
    {
        int sb=0;
        for(j=0; j<4; j++)
        {
            scanf("%d",&s[i][j]);
            sb=sb+s[i][j];
            if(sb>max){
                max=sb;
                imax=i;
            }
        }
    }

    printf("%d %d",imax,max);

    return 0;
}
