/*
16 11 7 4 2 1
22 17 12 8 5 3
27 23 18 13 9 6
31 28 24 19 14 10
34 32 29 25 20 15
36 35 33 30 26 21
*/

#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    int a[num][num];
    int k = 1;
    for(int i=0;i<=num-1;i++)
    {
        int m = 0;
        for(int j=num-1-i;j<=num-1;j++,k++,m++)
        {
            a[m][j] = k;
            a[(num-1)-m][(num-1)-j] = (1 + num * num) - k;
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