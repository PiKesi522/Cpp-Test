/*
6 5 4 3 2 1
5 6 5 4 3 2
4 5 6 5 4 3
3 4 5 6 5 4
2 3 4 5 6 5
1 2 3 4 5 6
*/

#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    int a[num][num];
    for(int i=0;i<num;i++)
    {
        int k = num;
        for(int j=i;j>=0;j--)
        {
           a[i][j] = a[j][i] = k;
           k--;
        }
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(j==num-1)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf("%d ", a[i][j]);
            }
        }
        if(i==num-1)
        {
            continue;
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}

