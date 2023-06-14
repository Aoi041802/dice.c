#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 6
int main()
{	
 srand((unsigned int)time(NULL));

 int die1;
 int die2;
 int sum;
 char name[20];

 printf("What is your name?\n");
 scanf("%s",name);
 printf("Hello, %s!\n",name);

 die1 = rand()%6+1;
 die2 = rand()%6+1;
 sum = die1 + die2;
 
 printf("Rolling dice...\n");
 printf("Die 1: %d\nDie 2: %d\n",die1,die2);
 printf("Total value: %d\n",sum);

 if(sum > 7){
	 printf("You won!\n");
 }

 else{
	 printf("You lost!\n");
 }


 return 0;
}
 


 
