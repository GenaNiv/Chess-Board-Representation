/*
 * BoardPrinting.c
 *
 *  Created on: Nov 28, 2015
 *      Author: gena
 */
//---PreDefiners----

#include<stdio.h>

#define N 8

//----------Function prints chess board----------
void BoardPrinting(char board[][N]){ //Func. definition
int line, column,i;
	char name[N]={'a','b','c','d','e','f','g','h'};
	char dash[17]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};

	printf("\n      -----Chess Board-----\n");

	for(column=0;column<N;column++)
	{
		printf("   %c",name[column]);
	}
	printf("\n");
	for(column=0;column<17;column++)
		{
			printf(" %c",dash[column]);
		}
	printf("\n");

//---------Board setting------
	for(line=7;line>=0;line--)
		{
		printf("%d|",line+1);
			for(column=0;column<N;column++)
			{
				printf(" %c |",board[line][column]);
				if(column!=0 && column%7==0)
				{
					printf("\n");
					for(i=0;i<17;i++)
					{
						printf(" %c",dash[i]);
					}
					printf("\n");
				}
			}
		}
}// end function
