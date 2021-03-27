/*
5 5 5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 3 3 4 5
5 4 3 2 2 2 2 2 3 4 5
5 4 3 2 1 1 1 2 3 4 5
5 4 3 2 1 0 1 2 3 4 5
5 4 3 2 1 1 1 2 3 4 5
5 4 3 2 2 2 2 2 3 4 5
5 4 3 3 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5 5 5
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b=a;
    int l[2*a+1][2*a+1];
    for (int i=0;i<=a;i++)//行列填补
    {
        for(int j=i;j<=a;j++)
        {
            l[i][j]=l[j][i]=b;
        }
        b -= 1;
    }
    for(int i=0;i<=a;i++)//右边复制左边
    {
        for(int j=2*a;j>a;j--)
        {
            l[i][j]=l[i][2*a-j];
        }
    }
    for(int i=2*a;i>a;i--)//下边复制上边
    {
        for(int j=0;j<2*a+1;j++)
        {
           l[i][j]=l[2*a-i][j];
        }
    }
    for(int i=0;i<2*a+1;i++)//打印
    {
        for(int j=0;j<2*a+1;j++)
        {
            if(j<2*a)
            {
                printf("%d ",l[i][j]);
            }
            else
            {
                printf("%d",l[i][j]);
            }
        }
        if(i < 2*a)
        {
            printf("\n");
        }
    }

    return 0;
}