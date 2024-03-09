#include <stdio.h>
#define COINS 6
#define MAX 20

int main()
{

    int tot, pay;
    scanf("%d %d",&tot, &pay);
    int cost= abs(tot-pay);


    int coins[COINS] = { 1,2,4,8,16,32 };
	int coinList[MAX] = { 0 };
	int i, k = 0;

	for (i = COINS - 1; i >= 0; i--)
        {
            while (cost >= coins[i])
            {
			cost -= coins[i];
			coinList[k++] = coins[i];
            }
        }

    int has2Coin = 0;
    for (i = 0; i < k; i++)
    {
        if (coinList[i] == 2)
        {
            has2Coin = 1;
            break;
        }
    }

    if (has2Coin)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


return 0;

}




