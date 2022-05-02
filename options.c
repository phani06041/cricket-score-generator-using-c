#include<stdio.h>
#include<stdlib.h>
#include "cricket.h"
#include<ctype.h>

int options()
{
	char opt = 'a';
	int r= opt-'0';
	while(opt != 6)
	{
		printf("1. Add record\n2. Display record\n");
		printf("3. Display all players\n4. Exit\n");
		printf("Choose an option: ");
		scanf(" %s", &opt);
		if(isdigit(opt) == 0)
		{
			printf("enter valid number! \n\n");
			return 0;
		}
		else if(opt == '1')
		{
			system("cls");
			add();
		}
		else if(opt == '2')
		{
			system("cls");
			DisplayRecord();
		}
		else if(opt == '3')
		{
			system("cls");
			disp_all_names();
		}
		else if(opt == '4')
		{
			system("cls");
			return(0);
		}
		else{
			system("cls");
		}
		
	}
}



void disp_all_names()
{
	printf("Here are all the players in the database : \n");
	int i=0;
	for(i=0;i<count;i++){
		printf("%d: %s \n\n",i,c[i].name );
	}
}