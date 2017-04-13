/* **********************PROGRAM FOR INSERTION SORT**********************
******************************************************************    */

#include <stdio.h>
#include <stdlib.h>
#define N 20

void insert_sort(int A[],int size)
{
    int temp, i, j;

    for(i=0;i<size;i++)
    {
        temp=A[i];
        j=i-1;

        while((temp<A[j])&&(j>=0))
        {
            A[j+1]=A[j];
            j=j-1;
        }

        A[j+1]=temp;
    }

    printf("\n\n-------------AFTER SORTING-------------\n\n");

    for(i=0;i<size;i++)
        printf("\nThe value at %d is : > %d",i,A[i]);

    printf("\n\n\nTASK SUCCESSFUL.....");
    return;
}

int main()
{
 int A[N];
    printf("\n\n-----------INSERTION SORT-------------\n\n");
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
    insert_sort(A,n);

    getch();
    return 0;

}
