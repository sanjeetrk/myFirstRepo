// Program to print n term of fabonacii series

#include<stdio.h>
#include<conio.h>
int  main()
{
	    int term,i;
	    int a=-1,b=1,c;
	    // clrscr();
	    printf("Enter the number of term:  ");
	    scanf("%d",&term);
	    printf("Fabonacii series are:\n");
	    for(i=1;i<=term;i++)
	    {
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	    }
	    getch();
		return 0;
}

