#include<stdio.h>
int main()
{
    int i,j,max=0;
    int s[5][4];
    for(i=0; i<5; i++)
    {
        int sb=0;
        for(j=0; j<4; j++)
        {
            scanf("%d",&s[i][j]);
            sb=sb+s[i][j];
            if(sb>max)
                max=sb;
        }
    }

    printf("%d %d",i,max);

    return 0;
}
