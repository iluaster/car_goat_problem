#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define race_count 30000  

int main(int argc, char *argv[])
{
	int i,guess;
	int lost=0,win=0;
	bool door[3]={false};
	printf("You always change the initial selected door!!\n");
	srand(time(NULL));
	for(int j=1;j<=race_count;j++)
	{
		i=rand()%3;
		if(i == 0) // place the car into the door.
		{
			door[0]=true;
			door[1]=false;
			door[2]=false;
		}
		else if(i == 1)
		{
			door[0]=false;
			door[1]=true;
			door[2]=false;
		}	
		else if(i == 2)
		{
			door[0]=false;
			door[1]=false;
			door[2]=true;
		}
		guess=rand()%3;
		if(guess == 0) // player guess the door.
		{
			if(door[0] == true)
				lost++;// because you always change the initial door
			else
				win++;//because you alwasy change the initial door,you will get car.
		}
		if(guess == 1)
		{
			if(door[1] == true)
				lost++;// because you always change the initial door
			else
				win++;//because you alwasy change the initial door, you will get car
		}
		if(guess == 2)
		{
			if(door[2] == true)
				lost++;// because you always change the initial door
			else
				win++;//because you alwasy change the initial door,you will get car.
		}
	}
	printf("%d games. \n",race_count);
	printf("Win %d \n",win);
	printf("Lost %d \n",lost);
	return 0;
}
