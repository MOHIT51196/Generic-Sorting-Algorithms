/* **********************PROGRAM FOR SELCTION SORT**********************
******************************************************************    */


#include <stdio.h>
#include <conio.h>
#define N 50


void select_sort(int A[],int size)
{
    int small,pos,i,j,temp;

    for(i=0;i<size-1;i++)
    {
        small=A[i];
        pos=i;

        for(j=i+1;j<size;j++)
        {
            if(small>A[j])
            {
                small=A[j];  pos=j;
            }
        }

        if(pos!=i)
        {
        // swaping of the two numbers

        temp=A[pos];
        A[pos]=A[i];
        A[i]=temp;
        }
    }

    printf("\n\n-------------AFTER SORTING-------------\n\n");

    for(i=0;i<size;i++)
        printf("\nThe value at %d is : > %d",i,A[i]);

    return;
}

int main()
{
    int A[N];
    printf("\n\n-----------SELECTION SORT-------------\n\n");
    int i,n;

    printf("Enter the size of the array: >");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the value at %d : > ",i);
        scanf("%d",&A[i]);
    }

    printf("\n\npress any key to initiate sorting...\n");
    getch();

    printf("\n\n-------------BEFORE SORTING-------------\n\n");
    for(i=0;i<n;i++)
        printf("\nThe value at %d is : > %d",i,A[i]);

    printf("\n\nSorting.........\n\n");
    select_sort(A,n);

    getch();
    return 0;
}
