#include "stdio.h"
int main(int argc, char const* argv[])
{
	printf("this is a game when computer wins every time . try it i swear you can't beat my program\n");
	printf("choose the number of sticks here\n");
	int j, a, k = 0;
	//hello here

start:
	printf("please type the value between 1 and 4\n");
	printf(" computer played his move and the current value of k is %d and computer picked up %d sticks \a\n", k, j);
	scanf("%d", &a);
	if (!((a > 0) && (a < 5)))
	{
		printf("you selected non favourable value so fuck off and  get back to where you were \n");
		goto start;
	}
	if ((k + a) > 21)
	{
		printf("you selected non favourable value so fuck off and get back to where you were\n");
		goto start;
	}
	else
	{

		k += a;
		for (j = 1; j < 5; j++)
		{

			if (((k + j) % 5) == 0)
			{
				k += j;
				goto start;
			}
			else if (k == 21)
			{
				goto end;
			}
		}
	}

end:
	printf("%d completed and computer won this game\n", k);
	return 0;
}