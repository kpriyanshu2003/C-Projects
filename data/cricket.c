// Assign a number to all 11 cricket players.
// Display player number who scored century. Display the player number who scored the highest.
//  Without using loop. And use goto and ?.
#include <stdio.h>
int main()
{
    int s[11], i = 0, high, j[11];
input1:
    if (i < 11)
    {
        printf("Enter jersey number and score of player %d : ", (i + 1));
        scanf("%d %d", &j[i], &s[i]);
        i++;
        goto input1;
    }

    i = 0;
input2:
    if (i < 11)
    {
        /* if (i == 0)
            high = i;
        else
        {
            if (s[high] < s[i])
                high = i;
            else
                high = high;
        } */
        high = (i == 0) ? i : ((s[high] < s[i]) ? i : high);

        if (s[i] >= 100)
            printf("Player with jersey %d scored century\n", j[i]);
        i++;
        goto input2;
    }
    printf("Highest Scorer is : Player with jersey %d", j[high]);
    return 0;
}