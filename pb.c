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

int calculate_result(int lott[6])
{
  for (int i=0; i<6; i++)
    {
      if ((lott[i] < 1) || (lott[i] > MAX_WHITE_BALL))
	{
	  return -1;
	}
    }

  // lottery ball numbers are always shown sorted
  qsort(lott, 5, sizeof(int), my_sort_func);
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

void checkwhiteballs(int balls[5], int control)
{
  int last = balls[control];

  for(int i = 0; i < control; i++){
    if(last == balls[i]){
      balls[control] = whiteballs_computer_generated();
      break;
    }
  }
}

void lottery_numbers_simulation(int lott[6]){
	

	for(int i = 0; i < 6; i++){

		if(i < 5){
			lott[i] = whiteballs_computer_generated();
			checkwhiteballs(lott, i);
		}else
			lott[i] = powerball_computer_generated();
	}

	for(int i = 0; i < 6; i++){
		printf("%d",lott[i]);
	}
}

int main(int argc, char** argv)
{
	int balls[6];
 	int lott[6];
	int count_balls = 0;
  	int favorite = 0; //this should be a bool

	for (int i=1; i <argc; i++)
	{
		goto usage_error;
	}

	printf("\n--- The lottery numbers ---\n");
	lottery_numbers_simulation(lott);
	int result = calculate_result(lott);
  	showing_results(balls, power_ball);

	// calculate result can return -1 if the ball numbers
	// are out of range

	if (result < 0)
	{
		goto usage_error;
	}

	if (6 != count_balls)
        {
							balls[i] = whiteballs_computer_generated();
    					checkwhiteballs(balls, i);
	    			}
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
