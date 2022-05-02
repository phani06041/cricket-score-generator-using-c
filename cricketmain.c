#include<stdio.h>
#include<stdlib.h>

int count = 0;

#include "cricket.h"

int main()
{
	int n = 1;  
	printf("                                               Cricket Statistics/scorecard Generator\n\n");
	LoadFromFile();
	while(n != 3)
	{
		printf("1. Player Stats\n2. Options\n3. Exit\n\n");
		printf("Enter 1, 2 or 3 to continue: ");
		scanf("%d", &n);
		if(n == 1)
		{
			system("cls");
			DisplayRecord();
		}
		else if(n == 2)
		{
			system("cls");
			int m = options();
		}
		else if(n == 3)
		{
			printf("Thank you for using our program");
			return(0);
		}
		else
		{
			system("cls");
			printf("Enter a valid option\n\n");
		}
	}
}	

