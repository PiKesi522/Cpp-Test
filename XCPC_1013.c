/*
1 3 4 10 11 21
2 5 9 12 20 22
6 8 13 19 23 30
7 14 18 24 29 31
15 17 25 28 32 35
16 26 27 33 34 36
*/
#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    int l[num][num];
    int k = 1;
    int flag = 1;
    for(int i=0;i<=num-1;i++)
    {
        if(flag == 1)
        {
            for(int j=0;j<=i;j++,k++)
            {
                l[j][i-j] = k;
                l[num-1-j][num-1-(i-j)] = (1 + num * num) - k;
            }
            flag = 0;
            continue;
        }
        if(flag == 0)
        {
            for(int j=0;j<=i;j++,k++)
            {
                l[i-j][j] = k;
                l[num-1-(i-j)][num-1-j] = (1 + num * num) - k;
            }
            flag = 1;
            continue;
        }
    }
    for(int i=0;i<num;i++)//打印方阵
    {
        for(int j=0;j<num;j++)
        {
            if(j==num-1){printf("%d", l[i][j]);}
            else{printf("%d ", l[i][j]);}
        }
        if(i!=num-1){printf("\n");}
    }
    return 0;
}
