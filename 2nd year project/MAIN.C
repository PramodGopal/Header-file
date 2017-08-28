#include<stdio.h>
#include<conio.h>
#include "im.h"
#include "fm.h"
#include "fmer.h"
#include "imer.h"
int a[1000];
float ab[1000];
void main()
{
	int n,i,ch;
	clrscr();
	printf("Enter the choice of array\n");
	printf("\nPress 1 for integer array\n");
	printf("\nPress 2 for floating point array\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Enter the no. of elements\n");
			   scanf("%d",&n);
			   printf("Enter the integer array elements\n");
			   for(i=0;i<n;i++)
			    {
				 scanf("%d",&a[i]);
			    }
			    imerge_sort(0,n-1,a);
			    printf("\n\nThe sorted elements are ");
			     for(i=0;i<n;i++)
			     {
				   printf(" %d  ",a[i]);
			     }
			     break;

		case 2:printf("Enter the no. of elements\n");
			   scanf("%d",&n);
			   printf("Enter the floating point array elements\n");
			   for(i=0;i<n;i++)
			    {
				 scanf("%f",&ab[i]);
			    }
			    fmerge_sort(0,n-1,ab);
			    printf("\n\nThe sorted elements are ");
			    for(i=0;i<n;i++)
			     {
				 printf(" %.2f  ",ab[i]);
			     }
			     break;
	}
	getch();
}