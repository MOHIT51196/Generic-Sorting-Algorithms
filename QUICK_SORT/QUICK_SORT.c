/* **********************PROGRAM FOR QUICK SORT**********************
******************************************************************    */

#include <stdio.h>
#include <stdlib.h>
#define N 30


void quick_sort(int A[],int lb,int ub)
{
    int pivot=A[lb];
    int i=lb+1,j=ub,temp;

    if(lb<ub)
    {
        while(i<=j)
        {
            while(A[i]<pivot)   i++;
            while(A[j]>pivot)   j--;

            if(i<j)
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }

        // SWAPING THE PIVOTAL VALUE AT THE END
        temp=A[j];
        A[j]=A[lb];
        A[lb]=temp;

        // SORTING THE LEFT SEGMENT
        quick_sort(A,lb,j-1);

        // SORTING THE RIGHT SEGMENT
        quick_sort(A,j+1,ub);
    }
return;
}

int main()
{
    int A[N];
    printf("\n\n-----------QUICK SORT-------------\n\n");
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
    quick_sort(A,0,n-1);

    printf("\n\n-------------AFTER SORTING-------------\n\n");

    for(i=0;i<n;i++)
        printf("\nThe value at %d is : > %d",i,A[i]);

    printf("\n\n\nTASK SUCCESSFUL.....");

    getch();
    return 0;
}
