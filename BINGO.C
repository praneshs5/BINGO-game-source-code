/****************************************************************************
Program to create game ( B!ING0 2.O ),table is created using ASCI values
generates a tabel with random numbers, manuval filling is allso available,
			Developed by: SYMBIOTE.
*****************************************************************************/
#include <stdio.h>
#include <conio.h>
void howto();
void imanual();
void manual();
void OodEven();
void R();
void Ra();
void Ran();
void Rand();
void Rando();
void Random();
void TrueRandom();
void Reverse();
void forrev();
void revfor();
void forward();
void Display();
int Game();

int i,b[25],v,ib[25],checker=0,movescounter=0,choice,mchoice,randomchoice;

void main()
{
clrscr();
do{
clrscr();
for(i=0;i<=24;i++)
b[i]=0;
movescounter=0;
printf("\t\t*****\t>> B!NG0 2.O <<\t  *****\n\n\nSelect Mode:\n1)How To?\n2)Manual Fill\n3)Auto Fill\n4)Quit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	howto();
	break;
case 2:
	printf("\nchoose method:\n[0] Index_method\n[1] Ordered_method\n");
	scanf("%d",&mchoice);
	switch (mchoice)
	{
	case 0:
		imanual();
		break;
	default:
		manual();
	}break;
case 3:
	printf("Enter Your Choice( 0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 )\n");
	scanf("%d",&randomchoice);
	switch(randomchoice)
	{
	case 0:
		OodEven();
		break;
	case 1:
		R();
		break;
	case 2:
		Ra();
		break;
	case 3:
		Ran();
		break;
	case 4:
		Rand();
		break;
	case 5:
		Rando();
		break;
	case 6:
		Random();
		break;
	case 7:
		TrueRandom();
		break;
	case 8:
		Reverse();
		break;
	case 9:
		forrev();
		break;
	case 10:
		revfor();
		break;
	default:
		forward();
	}break;
default:
	printf("Thank You!");
}
}while(choice<4);
}

void howto()
{
clrscr();
printf("\n\n\t\t\tPROCEDURE\n*Each player get a chance to strike a number of their own choice one after other\n*Obtain win condition to WIN\n*Do follow the Rulles\n");
printf("\n\t\t\tWIN conditions\n*Strike in Vertical equalls one point\n*Strike in Horizontal equalls one point\n*Strike in Diagonal equalls one point\n*Score 5 points == B!NGO\n");
printf("\n\t\t\tRULLES\n*Enter positive numbers only\n*Number should be in rangeof 10 to 99\n\n\t\t\t+Don't cry if you loose.");
getch();
}

void imanual()
{
int index,count;
for(i=0;i<=24;i++)
	ib[i]=i;
while(count!=1)
{
	printf("\nAvailable index are:");
	for(count=0,i=0;i<=24;i++)
		if(ib[i]<=24)
		{
			printf("%d ",i);
			count++;
		}
	printf("\n\nEnter Index:");
	scanf("%d",&index);
	if(index>=25)
	continue;
	ib[index]=55;
	printf("\nEnter a Number:");
	scanf("%d",&b[index]);
	Display();
}
Game();
getch();
}

void manual()
{
for(i=0;i<=24;i++)
{
	printf("Enter a Number:");
	scanf("%d",&b[i]);
	Display();
}
Game();
getch();
}

void OodEven()//0
{
for(i=0;i<=24;i++)
{
	if(i%2==0)
	{
		if(i==24)
			b[i]=i+10;
		b[i+1]=i+10;
	}
	else
		b[i-1]=i+10;
}
Game();
getch();
}

void R()//1
{
b[0]= 19,b[1]= 20,b[2]= 12,b[3]= 21,b[4]=22;
b[5]= 28,b[6]= 29,b[7]= 11,b[8]= 30,b[9]=23;
b[10]=27,b[11]=34,b[12]=10,b[13]=31,b[14]=24;
b[15]=26,b[16]=33,b[17]=13,b[18]=32,b[19]=25;
b[20]=16,b[21]=15,b[22]=14,b[23]=17,b[24]=18;
Game();
getch();
}

void Ra()//2
{
b[0]= 10,b[1]=12 ,b[2]=15 ,b[3]=19 ,b[4]=24;
b[5]= 11,b[6]=14 ,b[7]=18 ,b[8]=23 ,b[9]=28;
b[10]=13,b[11]=17,b[12]=22,b[13]=27,b[14]=31;
b[15]=16,b[16]=21,b[17]=26,b[18]=30,b[19]=33;
b[20]=20,b[21]=25,b[22]=29,b[23]=32,b[24]=34;
Game();
getch();
}

void Ran()//3
{
b[0]=10 ,b[1]=29 ,b[2]=30 ,b[3]=19 ,b[4]=32;
b[5]=13 ,b[6]=23 ,b[7]=17 ,b[8]=11 ,b[9]=15;
b[10]=18,b[11]=12,b[12]=31,b[13]=14,b[14]=33;
b[15]=34,b[16]=27,b[17]=25,b[18]=21,b[19]=26;
b[20]=22,b[21]=16,b[22]=20,b[23]=24,b[24]=28;
Game();
getch();
}

void Rand()//4
{
b[0]=25 ,b[1]=12 ,b[2]=16 ,b[3]=20 ,b[4]=22;
b[5]=11 ,b[6]=29 ,b[7]=31 ,b[8]=28 ,b[9]=24;
b[10]=15,b[11]=32,b[12]=10,b[13]=34,b[14]=18;
b[15]=19,b[16]=27,b[17]=33,b[18]=30,b[19]=14;
b[20]=21,b[21]=23,b[22]=17,b[23]=13,b[24]=26;
Game();
getch();
}

void Rando()//5
{
b[0]=34 ,b[1]=33 ,b[2]=31 ,b[3]=28 ,b[4]=20;
b[5]=32 ,b[6]=30 ,b[7]=27 ,b[8]=24 ,b[9]=16;
b[10]=29,b[11]=26,b[12]=23,b[13]=19,b[14]=13;
b[15]=25,b[16]=22,b[17]=18,b[18]=15,b[19]=11;
b[20]=21,b[21]=17,b[22]=14,b[23]=12,b[24]=10;
Game();
getch();
}

void Random()//6
{
b[0]=23 ,b[1]=22 ,b[2]=21 ,b[3]= 20,b[4]=19;
b[5]=24 ,b[6]=12 ,b[7]=11 ,b[8]= 18,b[9]=34;
b[10]=25,b[11]=13,b[12]=10,b[13]=17,b[14]=33;
b[15]=26,b[16]=14,b[17]=15,b[18]=16,b[19]=32;
b[20]=27,b[21]=28,b[22]=29,b[23]=30,b[24]=31;
Game();
getch();
}

void TrueRandom()//7
{
b[0]=29 ,b[1]=32 ,b[2]=12 ,b[3]=15 ,b[4]=17;
b[5]=24 ,b[6]=11 ,b[7]=22 ,b[8]=25 ,b[9]=19;
b[10]=16,b[11]=13,b[12]=27,b[13]=18,b[14]=31;
b[15]=28,b[16]=14,b[17]=23,b[18]=34,b[19]=21;
b[20]=33,b[21]=30,b[22]=26,b[23]=10,b[24]=20;
Game();
getch();
}

void Reverse()//8
{
for(i=0;i<=24;i++)
	b[i]=34-i;
Game();
getch();
}

void forrev()//9
{
for(i=0;i<=12;i++)
	b[i]=10+i;
for(i=13;i<=24;i++)
	b[i]=47-i;
Game();
getch();
}

void revfor()//10
{
int n=10;
for(i=0;i<=12;i++)
	b[i]=34-i;
for(i=13;i<=24;i++)
	b[i]=n++;
Game();
getch();
}

void forward()//Default
{
for(i=0;i<=24;i++)
	b[i]=10+i;
Game();
getch();
}

void Display()
{
clrscr();
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,194,196,196,194,196,196,194,196,196,194,196,196,191);
printf("\t%c%d%c%d%c%d%c%d%c%d%c\n",179,b[0],179,b[1],179,b[2],179,b[3],179,b[4],179);
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,197,196,196,197,196,196,197,196,196,197,196,196,180);
printf("\t%c%d%c%d%c%d%c%d%c%d%c\n",179,b[5],179,b[6],179,b[7],179,b[8],179,b[9],179);
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,197,196,196,197,196,196,197,196,196,197,196,196,180);
printf("\t%c%d%c%d%c%d%c%d%c%d%c\n",179,b[10],179,b[11],179,b[12],179,b[13],179,b[14],179);
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,197,196,196,197,196,196,197,196,196,197,196,196,180);
printf("\t%c%d%c%d%c%d%c%d%c%d%c\n",179,b[15],179,b[16],179,b[17],179,b[18],179,b[19],179);
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,197,196,196,197,196,196,197,196,196,197,196,196,180);
printf("\t%c%d%c%d%c%d%c%d%c%d%c\n",179,b[20],179,b[21],179,b[22],179,b[23],179,b[24],179);
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,193,196,196,193,196,196,193,196,196,193,196,196,217);
getch();
}

int Game()
{
int key,j=0,flag=0;
checker=0;
Display();
printf("\nMoves Made:%d\n",movescounter);
printf("Enter a Number to Strike:");
scanf("%d",&key);
for(j=0;j<=24;j++)
{
	if(key==b[j]&&key!=88)
	{
		b[j]=88;
		movescounter++;
		flag=1;
		break;
	}
}
if(flag!=1)
	printf("Number does not exists.\n");
for(j=0;j<=20;j+=5)//Vertical
	if(b[j]==88&&b[j+1]==88&&b[j+2]==88&&b[j+3]==88&&b[j+4]==88)
		checker++;
for(j=0;j<=4;j++)//Horizontal
	if(b[j]==88&&b[j+5]==88&&b[j+10]==88&&b[j+15]==88&&b[j+20]==88)
		checker++;
if(b[0]==88&&b[6]==88&&b[12]==88&&b[24]==88&&b[18]==88)
	checker++;
if(b[4]==88&&b[8]==88&&b[16]==88&&b[12]==88&&b[20]==88)
	checker++;
if(checker>4||movescounter>24)
{
	Display();
	printf("\t>\t>\t>\tBINGO\t  <\t<\t<\n");
	movescounter=0;
	return 0;
}
else
	Game();
return 0;
}