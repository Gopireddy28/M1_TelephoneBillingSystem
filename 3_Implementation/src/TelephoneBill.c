/**
 * @file Telephone bill.c
 * @author Gopireddy Krishna Chaithanya
 * @brief Telephone Billing
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "TelePhoneBill.h"
#include "AddRecords.h"
#include "payment.h"
#include "SearchRecords.h"
#include "DeleteRecords.h"

void payment();
void addrecords();      //Intializing addrecords function
void deleterecords();
void searchrecords();
void payment();
char get;


int main()
{			
	printf("\n\t\t\t\t**********************");
	printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\t\t\t\t**********************");
	while (1)
	{
		printf("\n Enter\n A : for New Phone number addition.");
		printf("\n P : for bill payment");
		printf("\n S : for searching phone number.");
		printf("\n D : for deleting phone number.");
		printf("\n E : for close the program\n");
		char option;
        printf("Enter your choice :\n");
        scanf("%s", &option);
		switch(option)
		{
			case 'P':
				payment();break;
			case 'A':
				addrecords();break;
			case 'S':
				searchrecords();break;
			case 'D':
				deleterecords();break;
			case 'E':
				printf("\n\n\t\t\t\tTHANK YOU");
				printf("\n\n\n\n\n:\n\tFOR USING OUR SERVICE. Please come again");
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
		}
	}
}