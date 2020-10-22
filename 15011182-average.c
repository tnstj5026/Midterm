#include <stdio.h>

int main(void)
{
        int system, algorithm, network;
        float average;
	
	// getting numbers
        printf("Input the system programming, algortihm, and network score:");
        scanf("%d%d%d", &system, &algorithm, &network);

	// calculating average
        average = (system + algorithm + network) / 3.0;

	// printing
        printf("The average of the three subjects is %.2lf.\n", average);

        return 0;
}
