#include<stdio.h>
#include<stdlib.h>
#include "cricket.h"

void WriteToFile()
{
	filePointer = fopen("CricketDatabase.csv", "a+");
	if(count == 1)
	{

		fprintf(filePointer, "%s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s, %s\n", "SLNo", "Name",\
			"NoOfTests", "NoOfODIs", "NoOfT20s", "TotalNumberOf4s", "TotalNumberOf6s", "Highestscore",\
			"HighestPartnership", "FastestBallFaced", "TotalRunsScoredInTests", "TotalRunsScoredInODIs",\
			"TotalRunsScoredInT20s", "TotalBallsFacedInTests", "TotalBallsFacedInODIs", "TotalBallsFacedInT20s",\
			"StrikeRateInTests", "StrikeRateInODIs", "StrikeRateInT20s");

	}
	
	fprintf(filePointer, "%d, %s, %d, %d, %d, %d, %d, %d, %d, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", c[count-1].slno, c[count-1].name, c[count-1].test,\
		c[count-1].odi, c[count-1].t20, c[count-1].fours, c[count-1].sixes, c[count-1].sc, c[count-1].part, c[count-1].speed, c[count-1].terun, c[count-1].odrun,\
		c[count-1].t2run, c[count-1].teball, c[count-1].odball, c[count-1].t2ball, c[count-1].str1, c[count-1].str2, c[count-1].str3);
	
	
	fclose(filePointer);

}

void LoadFromFile()
{
	filePointer = fopen("CricketDatabase.csv", "r");
	

	if ( filePointer == NULL )
		return;
	
	int itemsScanned = fscanf(filePointer, "%[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c \
	%[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c \
	%[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c %[^ \t\n\r\v\f,]%*c", \
	h1.s1, h1.s2, h1.s3, h1.s4, h1.s5, h1.s6, h1.s7, h1.s8, h1.s9, h1.s10, h1.s11, h1.s12, h1.s13, h1.s14, h1.s15, h1.s16, h1.s17, h1.s18, h1.s19);
	
	while( itemsScanned == 19 )
	{

		itemsScanned = fscanf(filePointer, "%d%*c %[^ \t\n\r\v\f,]%*c %d%*c %d%*c %d%*c %d%*c %d%*c %d%*c %d%*c %f%*c %f%*c %f%*c %f%*c\
			%f%*c %f%*c %f%*c %f%*c %f%*c %f", &c[count].slno, c[count].name, &c[count].test, &c[count].odi, &c[count].t20, &c[count].fours,\
			&c[count].sixes, &c[count].sc, &c[count].part, &c[count].speed, &c[count].terun, &c[count].odrun, &c[count].t2run, &c[count].teball,\
			&c[count].odball, &c[count].t2ball, &c[count].str1, &c[count].str2, &c[count].str3);
		
		if(itemsScanned == 19)
			count = count + 1;
	}

	fclose(filePointer);
}

