#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_SIZE 80  /* MAx of Charcters per one line*/


/* ----  GLOBAL VERIABLE ---  */
char ch[LINE_SIZE] ;
char str1[LINE_SIZE];
FILE *fd;
int ch1;


typedef struct Milas *ptr;

typedef struct Milas{
/* A,R,E */
	int s0;
	int s1;
	int s2;

/* OP DESTINATION */
	int s3;
	int s4;
	int s5;
	int s6;

/* OP SOURCE */
	int s7;
	int s8;
	int s9;
	int s10;

/* OP-CODE */
	int s11;
	int s12;
	int s13;
	int s14;
	
	char* str;
	int Address;
	struct Milas *next; 
}Mila ;



/* ------ Printing ------   */

void PrintMila(Mila m)
{		
	printf("  OP-CODE   |    SOURCE   | DESTINATION |   ARE \n");
	printf("  %d %d %d %d       %d %d %d %d       %d %d %d %d      %d %d %d\n",m.s14,m.s13,m.s12,m.s11,m.s10,m.s9,m.s8,m.s7,m.s6,m.s5,m.s4,m.s3,m.s2,m.s1,m.s0);	
}

/*void Print(ptr m)
{		
	printf("  OP-CODE   |    SOURCE   | DESTINATION |   ARE \n");
	printf("  %d %d %d %d       %d %d %d %d       %d %d %d %d      %d %d %d\n",m->s14,m->s13,m->s12,m->s11,m->s10,m->s9,m->s8,m->s7,m->s6,m->s5,m->s4,m->s3,m->s2,m->s1,m->s0);	
}*/

/* ------  INITIALIZE ------   */

void initialize (Mila* m)
{
	m->s0 =0;
	m->s1 =0;
	m->s2 =0;
	m->s3 =0;
	m->s4 =0;
	m->s5 =0;
	m->s6 =0;
	m->s7 =0;
	m->s8 =0;
	m->s9 =0;
	m->s10 =0;
	m->s11 =0;
	m->s12 =0;
	m->s13 =0;
	m->s14 =0;   
}

int validNumber(int i)
{
 /* Check if the number is correct */
}


void ReadFile()
{
	if(!(fd = fopen("TestText1.txt","r+")))
		{
			fprintf(stderr, "cannot open file\n" );
			exit(0);
		}


	while(!feof(fd))
	{
		
		ch1 = fgetc(fd);
		/* Finding NATURAL NUMBER/SIGN  */
		if(ch1 == ' ')
		{
			printf("\nText ' '  or 'L'  [if statemenet] ");		
		}		
		if(ch1 == '\n')	   /* Finding NEW LINE  */
		{
			printf("-----new line-----");
		}
		
		if(ch1 == EOF)    /* Finding END of file  */
		{
			printf("------EOF------");
		}
		printf("%c -> %d\n | ",ch1,ch1);
		
	}
	printf("\nTest");
	
	printf("\nNew Test");	
	printf("\nNew Test");
	if(!(fd = fopen("TestText1.txt","r+")))
		{
		ch1 = fgetc(fd);
		printf(" ->  %c   ",ch1);
		}
}



/*   ---------------------------            Main Code                   ------------------*/                                     
int main()
{
	Mila mila;

	initialize(&mila);
	

	Opcode(&mila);
	ReadFile();

	return 0;
}


/*  ---- Validation area  ---- */


/* ----  Opcode Table  ---- */

Opcode(Mila* m){
if ( "mov"){
	m->s14 =0;
	m->s13 =0;
	m->s12 =0;
	m->s11 =0;
}


if ("cmp"){
	m->s14 =0;
	m->s13 =0;
	m->s12 =0;
	m->s11 =1;
}
}

/*
-
-
-
-
-
-
*/
