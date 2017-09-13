#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int select_game(int);
int main()
{
	int gamer,com,total=0,i;
	srand((unsigned) time(NULL));
	printf("Who is first? com:1, gamer:2\n");
	scanf("%d",&i);
	printf("1~30 game start\n");
	if(i==1){
		while(total<=31){
			com=rand()%3+1;
			total+=com;
			printf("com=%d, total=%d\n",com,total);
			if(total>=30){
				printf("Gamer Win\nFINISH\n");
				break;
			}
			printf("Enter number(1~3):");
			scanf("%d",&gamer);
			if(gamer>3 || gamer<1)
				printf("Retry.\n");
			total+=gamer;
			printf("gamer=%d, total=%d\n",gamer,total);
			if(total>=30){
				printf("Com Win\nFINISH\n");
				break;
			}
		}
	}
	if(i==2){
		while(total<=31){
			printf("Enter number(1~3):");
			scanf("%d",&gamer);
			if(gamer>3 || gamer<1)
				printf("Retry.\n");
			total+=gamer;
			printf("gamer=%d, total=%d\n",gamer,total);
			if(total>=30){
				printf("Com Win\n");
				break;
			}
			com=rand()%3+1;
			total+=com;
			printf("com=%d, total=%d\n",com,total);
			if(total>=30){
				printf("Gamer Win\n");
				break;
			}
		}
	}
	return 0;
}