#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <windows.h>
#include <dir.h>

void space()
{
    int j;
    for(j=0;j<40;j++)
        {
        printf(" ");
        }
}

void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

typedef struct
{
    char d[10][5];
}dig;

int len(int num)
{
    int n=0;
    while(num!=0)
    {
        num=num/10;
        n++;
    }
    return n;
}

void setb(int *b,int num,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        *(b+i)=num%10;
        num=num/10;
    }
}

void digit(int num)
{
    dig di[3];
    int n,*b,i,j,k,l,o,nu;
    nu=num;
    if(num<0)
    {
        num=num*(-1);
    }
    n=len(num);
    b=(int *)malloc(n*sizeof(int));
    setb(b,num,n);

    strcpy(di[0].d[0]," _ ");
    strcpy(di[1].d[0],"| |");
    strcpy(di[2].d[0],"|_|");

    strcpy(di[0].d[1],"   ");
    strcpy(di[1].d[1],"  |");
    strcpy(di[2].d[1],"  |");

    strcpy(di[0].d[2]," _ ");
    strcpy(di[1].d[2]," _|");
    strcpy(di[2].d[2],"|_ ");

    strcpy(di[0].d[3]," _ ");
    strcpy(di[1].d[3]," _|");
    strcpy(di[2].d[3]," _|");

    strcpy(di[0].d[4],"   ");
    strcpy(di[1].d[4],"|_|");
    strcpy(di[2].d[4],"  |");

    strcpy(di[0].d[5]," _ ");
    strcpy(di[1].d[5],"|_ ");
    strcpy(di[2].d[5]," _|");

    strcpy(di[0].d[6]," _ ");
    strcpy(di[1].d[6],"|_ ");
    strcpy(di[2].d[6],"|_|");

    strcpy(di[0].d[7]," _ ");
    strcpy(di[1].d[7],"  |");
    strcpy(di[2].d[7],"  |");

    strcpy(di[0].d[8]," _ ");
    strcpy(di[1].d[8],"|_|");
    strcpy(di[2].d[8],"|_|");

    strcpy(di[0].d[9]," _ ");
    strcpy(di[1].d[9],"|_|");
    strcpy(di[2].d[9]," _|");


    for(i=0;i<3;i++)
    {
        for(l=0;l<40;l++)
        printf(" ");
        if(i==2&&num!=0)
        {
            printf("|   |=");
        for(o=51-4*n;o>0;o--)
        {
            printf(" ");
        }
        SetColor(9);
        for(j=0;j<n;j++)
        {
            k=b[j];
            printf("%s ",di[i].d[k]);
        }
        SetColor(10);
        }
        else{
        printf("|   |");
        if(nu>=0){
        for(o=52-4*n;o>0;o--)
        {
            printf(" ");
        }
        SetColor(9);
        for(j=0;j<n;j++)
        {
            k=b[j];
            printf("%s ",di[i].d[k]);
        }
        }
        else{
                SetColor(9);
                if(i==1){
            for(o=50-4*n;o>0;o--)
        {
            printf(" ");
        }
        printf("_ ");
        }
        else{
            for(o=52-4*n;o>0;o--)
        {
            printf(" ");
        }
        }
        SetColor(9);
        for(j=0;j<n;j++)
        {
            k=b[j];
            printf("%s ",di[i].d[k]);
        }
        }
        SetColor(10);
        }
        printf("|   |");
        printf("\n");
    }
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf("_");
    }
    printf("|   |");
    printf("\n");

}






int main()
{

    int i,j,k,n,o=0,p=0,q,r=51,s,t=0,z=0,y,u[10],v=0,e;
    char a,b,w[]="CALCULATOR By SanChh";
    char x[4]="/*-+";
    space();
SetColor(10);
    SetColor(2);
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
        for(i=0;i<59999999;i++);
    }
        for(i=0;i<599999999;i++);
    system ("CLS");
    SetColor(10);
    do{

//Animation----------------------------------------------------------------------------------------------------------------------------------------

if(p>=1)
{
    space();
    SetColor(2);
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
    SetColor(10);
space();
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");
    printf("%d",o);

    for(i=r;i>0;i--)
    {
        printf(" ");
    }

    printf("|   |");
    printf("\n");
    digit(z);


//for zero 0---------------------------------------------------------------------------------
    if(n==0)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }



//for seven 7---------------------------------------------------------------------------------
    if(n==7)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for eight 8---------------------------------------------------------------------------------
    if(n==8)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for nine 9---------------------------------------------------------------------------------
    if(n==9)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for four 4---------------------------------------------------------------------------------
    if(n==4)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }


//for five 5---------------------------------------------------------------------------------
    if(n==5)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for six 6---------------------------------------------------------------------------------
    if(n==6)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for one 1---------------------------------------------------------------------------------
    if(n==1)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");



//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for two 2---------------------------------------------------------------------------------
    if(n==2)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");



//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for three 3---------------------------------------------------------------------------------
    if(n==3)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }




    for(i=0;i<99999999;i++);
    system ("CLS");

}

//Animation----------------------------------------------------------------------------------------------------------------------------------------

    start:
        space();
        SetColor(2);
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
    SetColor(10);
    space();
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");
    printf("%d",o);

    for(i=r;i>0;i--)
    {
        printf(" ");
    }


    printf("|   |");
    printf("\n");
    digit(z);


//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle
    for(i=0;i<3;i++)
    {
        if(i==0)
        {y=7;}
        if(i==1)
        {y=4;}
        if(i==2)
        {y=1;}

        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
    }
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    b=getch();
    n=b-48;

//Invalid Input------------------------------------------------------------------------------
    if(n<0||n>9)
    {
        if(n!=-6){
                if(n!=-5){
                        if(n!=-3){
                                if(n!=-1){
        system ("CLS");
        space();
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
        space();
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");
    SetColor(12);
    printf("INVALID INPUT");
    SetColor(10);
    for(i=39;i>0;i--)
    {
        printf(" ");
    }


    printf("|   |");
    printf("\n");
    digit(z);


//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle
    for(i=0;i<3;i++)
    {
        if(i==0)
        {y=7;}
        if(i==1)
        {y=4;}
        if(i==2)
        {y=1;}

        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
    }
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    for(i=0;i<99999999;i++);
    system ("CLS");
    goto start;
    }}}}}




    if(p>=1){
    r--;}
    if(p==0)
    {
       u[v]=n;
       v++;
    }
    if(u[v-1]==0&&p>=1)
    {
        r++;
        u[v]=n;
        v++;
    }

    if(n>=0&&n<=9)
    {
    q=n;
    if(p==0)
    {
        o=q;
    }
    else{
        o=o*10+n;
    }
    p++;
    }
    system ("CLS");
    }while(n>=0&&n<=9);

//After 1st number
    n=len(o);
    s=b;
    r=48-n;
    if(p==0)
    {
       r=47-n;
    }
    if(p==v-1)
    {
        r--;
    }
    p=0;
    v=0;

//2nd number
        do{

//Animation----------------------------------------------------------------------------------------------------------------------------------------

if(p>=1)
{
    space();
    SetColor(2);
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
space();
SetColor(10);
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");

    if(s==47)
    {
      printf("%d / %d",o,t);
    }

    if(s==42)
    {
      printf("%d * %d",o,t);
    }

    if(s==45)
    {
      printf("%d - %d",o,t);
    }

    if(s==43)
    {
      printf("%d + %d",o,t);
    }

    for(i=r;i>0;i--)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");
    digit(z);


//for zero 0---------------------------------------------------------------------------------
    if(n==0)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }



//for seven 7---------------------------------------------------------------------------------
    if(n==7)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for eight 8---------------------------------------------------------------------------------
    if(n==8)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for nine 9---------------------------------------------------------------------------------
    if(n==9)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for four 4---------------------------------------------------------------------------------
    if(n==4)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }


//for five 5---------------------------------------------------------------------------------
    if(n==5)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for six 6---------------------------------------------------------------------------------
    if(n==6)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for one 1---------------------------------------------------------------------------------
    if(n==1)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");



//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=1;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for two 2---------------------------------------------------------------------------------
    if(n==2)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------


//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        for(j=2;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");



//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }

//for three 3---------------------------------------------------------------------------------
    if(n==3)
    {
//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle---------------------------------------

//Number part middle top---------------
        y=7;
        i=0;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 2nd---------------
        y=4;
        i=1;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");


//Number part middle 3rd---------------
        y=1;
        i=2;
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<2;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }

        printf("   ");
        SetColor(12);
        printf("   ___   ");
        SetColor(10);
        printf("   ");
        printf("   ");
        printf("   ---   ");
        printf("   ");
        printf("|\n");


//Middle number part bottom--------------------
        i=3;
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    }




    for(i=0;i<99999999;i++);
    system ("CLS");

}

//Animation----------------------------------------------------------------------------------------------------------------------------------------

    start2:
        SetColor(2);
        space();
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
    space();
    SetColor(10);
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");

    if(s==47)
    {
      printf("%d / %d",o,t);
    }

    if(s==42)
    {
      printf("%d * %d",o,t);
    }

    if(s==45)
    {
      printf("%d - %d",o,t);
    }

    if(s==43)
    {
      printf("%d + %d",o,t);
    }

    for(i=r;i>0;i--)
    {
        printf(" ");
    }

    printf("|   |");
    printf("\n");
    digit(z);




//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle
    for(i=0;i<3;i++)
    {
        if(i==0)
        {y=7;}
        if(i==1)
        {y=4;}
        if(i==2)
        {y=1;}

        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
    }
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }



//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }


    b=getch();
    n=b-48;

//Invalid Input------------------------------------------------------------------------------
    if(n<0||n>9)
    {

                                        if(n!=-35){
        system ("CLS");
        space();
        SetColor(2);
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
        space();
        SetColor(10);
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");
    SetColor(12);
    printf("INVALID INPUT");
    SetColor(10);
    for(i=39;i>0;i--)
    {
        printf(" ");
    }


    printf("|   |");
    printf("\n");
    digit(z);


//number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle
    for(i=0;i<3;i++)
    {
        if(i==0)
        {y=7;}
        if(i==1)
        {y=4;}
        if(i==2)
        {y=1;}

        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
    }
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }

//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    for(i=0;i<99999999;i++);
    system ("CLS");
    goto start2;
    }}



    if(p>=1){
    r--;}
    if(p==0)
    {
       u[v]=n;
       v++;
    }
    if(u[v-1]==0&&p>=1)
    {
        r++;
        u[v]=n;
        v++;
    }
    if(n>=0&&n<=9)
    {
    q=n;
    if(p==0)
    {
        t=q;
    }
    else{
        t=t*10+n;
    }
    p++;
    }
    system ("CLS");
    }while(n!=13-48);
    if(p==0)
    {
        r--;
    }
    if(p==v-1)
    {
        r--;
    }

    if(s==47)
    {
      z=o/t;
    }

    if(s==42)
    {
      z=o*t;
    }

    if(s==45)
    {
      z=o-t;
    }

    if(s==43)
    {
      z=o+t;
    }

//FInal Result
    space();
    SetColor(2);
    for(j=0;j<20;j++)
    {
        printf("%c",w[j]);
    }
    printf("\n");
    space();
    SetColor(10);
    for(i=0;i<62;i++)
    {
        printf("_");
    }
    printf("\n");

    space();
    printf("|   ");
    for(i=0;i<54;i++)
    {
        printf("_");
    }
    printf("   |");
    printf("\n");
    space();
    printf("|   |");
    for(i=0;i<52;i++)
    {
        printf(" ");
    }
    printf("|   |");
    printf("\n");

//MAIN BODY
    space();
    printf("|   |");

    if(s==47)
    {
      printf("%d / %d",o,t);
    }

    if(s==42)
    {
      printf("%d * %d",o,t);
    }

    if(s==45)
    {
      printf("%d - %d",o,t);
    }

    if(s==43)
    {
      printf("%d + %d",o,t);
    }

    for(i=r+1;i>0;i--)
    {
        printf(" ");
    }
    if(p==1){
    r--;}
    printf("|   |");
    printf("\n");
    digit(z);
    //number part top
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }
//number part middle
    for(i=0;i<3;i++)
    {
        if(i==0)
        {y=7;}
        if(i==1)
        {y=4;}
        if(i==2)
        {y=1;}

        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<3;j++)
        {
        printf("   ");
        printf("  | %d |  ",y+j);
        printf("   ");
        }
        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
    }
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");
        space();
        printf("|");

        printf("   ");
        printf("  | . |  ");
        printf("   ");

        printf("   ");
        printf("  | 0 |  ");
        printf("   ");

        printf("   ");
        printf("  | = |  ");
        printf("   ");


        printf("   ");
        printf("  | %c |  ",x[i]);
        printf("   ");
        printf("|\n");
        space();
        printf("|");
        for(j=0;j<4;j++)
        {
        printf("   ");
        printf("   ---   ");
        printf("   ");
        }
        printf("|\n");

//number part bottom
    for(i=0;i<2;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf(" ");
        }
        printf("|\n");
    }


//bottom part
    for(i=0;i<1;i++)
    {
        space();
        printf("|");
        for(j=0;j<60;j++)
        {
        printf("_");
        }
        printf("|\n");
    }
    getch();

}
