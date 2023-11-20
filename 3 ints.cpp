#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y,z;
	float summary;
	float average;
	
	printf("Gimme No1: \n");
	scanf("%i", &x);
	
	printf("Gimme No2: \n");
	scanf("%i", &y);
	
	printf("Gimme No3: \n");
	scanf("%i", &z);

	
	if(x > y && x > z){
		printf("No1 is bigger(%d) \n", x);
		 if(y < x && y < z){
			printf("No2 is lower(%d) \n", y);
		} else if (y == z){
			printf("No2(%d) and No3(%d) are equal \n", y,z);
		} else {
		printf("No3 is lower(%d) \n", z);
		}
	} else if(y > x && y > z){
		printf("No2 is bigger(%d) \n", y);
		 if(x < y && x < z){
		printf("No1 is lower(%d) \n", x);
		} else if (x == z){
			printf("No1(%d) and No3(%d) are equal \n", x,z);
		} else {
		printf("No3 is lower(%d) \n", z);
		}
	} else if (x == y && y == z){
		printf("All the numbers are Equal \n");
	} else if (x == y){
		if (z < x){
			printf("No3(%d) is bigger \n", z);
		}
		printf("No1(%d) and No2(%d) are equal \n", x,y); //Doesn't show
	} else if (y == z){
			printf("No2(%d) and No3(%d) are equal \n", y,z);
	} else if (x == z){
			printf("No1(%d) and No3(%d) are equal \n", x,z);
	} else if (z < x && z < y){
		 if(x < y && x < z){
			printf("No1 is lower(%d) \n", x); //Doesnt't fucking show
		} else if (x == y){
			printf("No1(%d) and No2(%d) are equal \n", x,y); //Why does it show?
		} else {
			printf("No2 is lower(%d) \n", y); //Doesnt't fucking show
		}
		printf("No3 is bigger(%d) \n", z); //Doesnt't fucking show
	}
	
	summary = x+y+z;
	average = summary / 3;
	printf("The Average is (%.4f) /n", average);
	
	
	return 0;
}
