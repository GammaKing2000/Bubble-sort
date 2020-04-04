#include<stdio.h>
#include<conio.h>

void main()
{
	void bubble(int ap[], int s);
	int ar[50], size, i;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	
	printf("\nEnter the elements of the array: ");
	for(i=0; i<size; i++)
      scanf("%d", &ar[i]);   
	  
	bubble(ar, size);	
	
	printf("\nSorted array is: ");
	for(i=0; i<size; i++)
	   printf("%d ", ar[i]);
	getch();
}

void bubble(int ap[], int s)
{
	int i, j, temp;
	for(i=0; i<s-1; i++)
       for(j=0; j<s-i-1; j++)
	    	if(ap[j]>ap[j+1])
		    {
				temp=ap[j];
				ap[j]=ap[j+1];
				ap[j+1]=temp;
		    }
}
