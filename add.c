#include<stdio.h>
#include<stdlib.h>
#include "cricket.h"

void add()
{
	int num;
	printf("Enter the number of records you want to add\n");
	scanf("%d", &num);
	for(int j=0;j<num;j++)
	{
		printf("Enter the details of player %d", (j+1));
		c[count].slno = count+1; 
		printf("\nSl No: %d", c[count].slno);
		printf("\nName: ");
		scanf("%s", &c[count].name);
		printf("\nNo of Tests: ");
		scanf("%d", &c[count].test);
		printf("\nNo of ODIs: ");
		scanf("%d", &c[count].odi);
		printf("\nNo of T20s: ");
		scanf("%d", &c[count].t20);
		printf("\nTotal number of 4s: ");
		scanf("%d", &c[count].fours);
		printf("\nTotal number of 6s: ");
		scanf("%d", &c[count].sixes);
		printf("\nHighest score: ");
		scanf("%d", &c[count].sc);
		printf("\nHighest partnership: ");
		scanf("%d", &c[count].part);
		printf("\nFastest ball faced: ");
		scanf("%f", &c[count].speed);
		printf("\nTotal runs scored in Tests: ");
		scanf("%f", &c[count].terun);
		printf("\nTotal runs scored in ODIs: ");
		scanf("%f", &c[count].odrun);
		printf("\nTotal runs scored in T20s: ");
		scanf("%f", &c[count].t2run);
		printf("\nTotal balls faced in Tests: ");
		scanf("%f", &c[count].teball);
		printf("\nTotal balls faced in ODIs: ");
		scanf("%f", &c[count].odball);
		printf("\nTotal balls faced in T20s: ");
		scanf("%f", &c[count].t2ball);
		
		if(c[count].teball != 0)
		{
			c[count].str1 = (c[count].terun/c[count].teball)*100;
		}
		else
		{
			c[count].str1 = 0;
		}
		if(c[count].odball != 0)
		{
			c[count].str2 = (c[count].odrun/c[count].odball)*100;
		}
		else
		{
			c[count].str2 = 0;
		}
		if(c[count].t2ball != 0)
		{
			c[count].str3 = (c[count].t2run/c[count].t2ball)*100;
		}
		else
		{
			c[count].str3 = 0;
		}
		count = count + 1;
	
		WriteToFile();
	}
}


