#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "TelePhoneBill.h"


void addrecords()
{
	FILE *f;
	f=fopen("c:/file.ojs","ab+");
	if(f==0)
	{   f=fopen("c:/file.ojs","wb+");

		printf("please wait while we configure your computer");
		printf("/npress any key to continue");
	
	}
	char sss;
	
	while(1)
	{
	
		printf("\n Enter phone number:");
		scanf("%s",s.phonenumber);
		printf("\n Enter name:");
		scanf("%s",s.name);
		printf("\n Enter amount:");
		scanf("%f",&s.amount);
		printf("1 record successfully added");
		printf("\n Press 'E' key to exit, any other key to add other record:");
		scanf("%s",&sss);
		if(sss=='E')
		{
			break;
		}
		
			
	}
	fclose(f);
	exit(0);
}