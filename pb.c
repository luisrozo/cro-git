#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUCKY_NUMBER 7
#define MAX_WHITE_BALL 59
#define MAX_POWER_BALL 39

static int my_sort_func(const void* p1, const void* p2)
{
  int v1 = *((int *) p1);
  int v2 = *((int *) p2);

  if(v1 < v2)
    {
      return -1;
    }
  else if (v1 > v2)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int calculate_result(int white_balls[5], int power_ball)
{
  for (int i=0; i<5; i++)
    {
      if ((white_balls[i] < 1) || (white_balls[i] > MAX_WHITE_BALL))
	{
	  return -1;
	}
    }

  // lottery ball numbers are always shown sorted
  qsort(white_balls, 5, sizeof(int), my_sort_func);
  // Here should be typed a function to calculate the probability

  return 0;
}

int whiteballs_computer_generated()
{
	return rand()%59+1;
}

int powerball_computer_generated()
{
	return rand()%MAX_POWER_BALL+1;
}

void lottery_numbers_simulation()
{
	int balls[6];
	int repetidos;

	for(int i = 0; i < 6; i++)
	{
		if(i < 5)
		{
			int no_colocada = 1;
			while(no_colocada == 1)
			{
				no_colocada = 1;
				repetidos = 0;
				int ball = whiteballs_computer_generated();
				int j = 0;
			
				while(j < i)
				{
					if(ball == balls[j])
					{
						repetidos = 1;
					}
					j++;
				}

				if(repetidos == 0)
				{
					balls[i] = ball;
					no_colocada = 0;
				}
				else
				{
					no_colocada = 1;
				}
			}
		}
		else
		{
			balls[i] = powerball_computer_generated();
		}
	}

	// Mostrar bolas por pantalla
	for(int i = 0; i < 6; i++)
	{
		printf(“%d, “,balls[i]);
	}
}

int main(int argc, char** argv)
{
	int balls[6];
	int count_balls = 0;
  int favorite = 0; //this should be a bool

	for (int i=1; i <argc; i++)
	{
		goto usage_error;
	}

	// the power ball is always the last one given
	int power_ball = balls[5];
	
	lottery_numbers_simulation();
	int result = calculate_result(balls, power_ball);
  showing_results(balls, power_ball);

	// calculate result can return -1 if the ball numbers
	// are out of range

	if (result < 0)
	{
		goto usage_error;
	}

	if (6 != count_balls)
        {
            for (int i = 0; i < 5; i++){
		balls[i] = whiteballs_computer_generated();
    checkwhiteballs(balls, i);
	    }
		balls[5] = powerball_computer_generated(); // Power ball
		printf("Your numbers are: ");
		
		  for (int i = 0; i < 5; i++){
			printf("%d ", balls[i]);
		  }
		
		printf("\nAnd the power ball:");
		printf(" %d\n", balls[5]);
        }

	if (LUCKY_NUMBER == power_ball)
	{
		result = result * 2;
	}

	if (favorite)
	{
		result = result * 2;
	}

	printf("%d percent chance of winning\n", result);

	return 0;

usage_error:
	fprintf(stderr, "Usage: %s [-favorite] (5 white balls) power ball\n", argv[0]);
	return -1;
}
