#include <stdio.h>

int main(void)
{
        int system, algorithm, network;
        float average;

        printf("Input the system programming, algortihm, and network score:");
        scanf("%d%d%d", &system, &algorithm, &network);

        average = (system + algorithm + network) / 3.0;

        printf("The average of the three subjects is %.2lf.\n", average);

        return 0;
}
