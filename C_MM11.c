#include <stdio.h>
#define MAX 999999

/*Dynamic Programming*/
int main()
{
    int price, i, j, minNum, mIndex;
    int money[MAX]; //DP table
    int coin[3] = {1, 5, 10};
    int coinNum[3];

    scanf("%d", &price);

    money[0] = 0;
    money[1] = 1;
    for(i=2; i<=price; i++)
    {
        minNum = price;

        for(j=0; j<3; j++)
        {
            if(i >= coin[j])
                minNum = (money[i-coin[j]]+1) < minNum ? money[i-coin[j]]+1 : minNum;
        }

        money[i] = minNum;
    }

    /*backtracking*/
    mIndex = price;

    for(i=0; i<3; i++)
        coinNum[i] = 0;

    while(mIndex != 0)
    {
        for(i=0; i<3; i++)
        {
            if(money[mIndex-coin[i]] == money[mIndex] - 1)
            {
                coinNum[i]++;
                mIndex = mIndex-coin[i];

                break;
            }
        }
    }

    for(i=2; i>=0; i--)
    {
        printf("NT%d=%d\n", coin[i], coinNum[i]);
    }

    return 0;
}
