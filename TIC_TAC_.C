//TIC_TAC_TOE Game In C language .

#include<stdio.h>
#include<conio.h>

void printBoard();
int checkwin();
char B[]={'0','1','2','3','4','5','6','7','8','9'};

void main()
{

	int player=1,input,result;
	char mark,choice;
	clrscr();

  Continue:
  clrscr();
	printBoard();

	while(1)
	{
		player=(player%2==0) ? 2 : 1 ;

		mark = (player==1) ? 'x' : 'o' ;

		back:

		printf("\n\nEnter The Position For Player %d =",player);
		scanf("%d",&input);

		if(B[input]=='x' || B[input]=='o')
		{
			printf("\nYou have entered in filled position .");

			goto back;

		}

		if(input<1 || input>9)
		{
			printf("\nInvalid Input...!");
		}

		B[input]=mark;

		clrscr();
		printBoard();

		result=checkwin();

		if(result==1)
		{
			printf("\nCongratulations ....\n");
			printf("\nPlayer %d Is Winner",player);
			getch();
			break;
		}
		else if(result==0)
		{
			printf("\nMatch Is Drawn ...");
			getch();
			break;
		}
		else
		{
		 player++;
		 continue;

		}


	}

		if(result==1 || result==0)
		{
			clrscr();

			printf("\n\nIf you Want To Play Again ");
			printf("\n\nPRESS Y For YES \nPRESS N For No");
			printf("\n\nEnter Your choice =");
			scanf("%s",&choice);

			if(choice=='Y'|| choice=='y')
			{

				B[1]='1',B[2]='2',B[3]='3',B[4]='4',B[5]='5',B[6]='6',B[7]='7',B[8]='8',B[9]='9';

				goto Continue;

			}
			else if(choice=='N' || choice=='n')
			{
				goto End;
			}
			else
			{
				goto End;
			}
		}



End :
clrscr();
printf("\n\n\n\n\n\n\t\t\t\t\tDeveloped By Mr.khan");
printf("\n\n\n\n\n\n\t\t\tThank You \2");
printf("\n\n\n\n\n\nEXITED .......!");

getch();
}


   void printBoard()
   {

	printf("\n\t\t************TIC TAC TOE**********\n\n");
	printf("\t\t\t    |     |   \n");
	printf("\t\t\t %c  |  %c  | %c \n",B[1],B[2],B[3]);
	printf("\t\t\t____|_____|____\n");
	printf("\t\t\t    |     |   \n");
	printf("\t\t\t %c  |  %c  | %c \n",B[4],B[5],B[6]);
	printf("\t\t\t____|_____|____\n");
	printf("\t\t\t    |     |   \n");
	printf("\t\t\t %c  |  %c  | %c \n",B[7],B[8],B[9]);
	printf("\t\t\t    |     |   \n");

    }


    int checkwin()
    {
	int count=0,i;

	if(B[1]==B[2] && B[2]==B[3]) return 1;
	if(B[4]==B[5] && B[5]==B[6]) return 1;
	if(B[7]==B[8] && B[8]==B[9]) return 1;

	if(B[1]==B[4] && B[4]==B[7]) return 1;
	if(B[2]==B[5] && B[5]==B[8]) return 1;
	if(B[3]==B[6] && B[6]==B[9]) return 1;

	if(B[1]==B[5] && B[5]==B[9]) return 1;
	if(B[3]==B[5] && B[5]==B[7]) return 1;


	for(i=1;i<=9;i++)
	{

		if(B[i]=='x' || B[i]=='o')
		{
			count++;
		}
	}

	if(count==9)
	{
		return 0 ;
	}

       return -1;
    }










