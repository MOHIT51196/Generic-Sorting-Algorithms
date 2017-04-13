/* **********************PROGRAM FOR MERGE SORT**********************
******************************************************************    */

#include <stdio.h>
#include <stdlib.h>
#define N 20

int temp [N];       //TO IGNORE THE SEGMENTATION FAULTS

void partition(int a[], int low, int high)
{
    int mid=(low+high)/2;

    if(low<high)
    {
        partition(a,low,mid);
        partition(a,mid+1,high);
        merge_sort(a,low,mid,high);
    }
}

void merge_sort(int A[], int low, int mid, int high)
{
    int i,mi,lo,k;
    mi=mid+1;
    lo=low;
    i=low;


    while((low<=mid)&&(mi<=high))
    {
        if(A[lo]<=A[mi])
        {
            temp[i]=A[lo];
            lo++;
        }
        else
        {
            temp[i]=A[mi];
            mi++;
        }
        i++;
    }

    if(lo>mid)
    {
        for(k=mi;k<=high;k++)
        {
            temp[i]=A[k];
            i++;
        }
    }

    else
    {
        for(k=lo;k<=mid;k++)
        {
            temp[i]=A[k];
            i++;
        }
    }

    for(k=low;k<=high;k++)
        A[k]=temp[k];

  return;

}


int main()
{
    int A[N];
    printf("\n\n-----------MERGE SORT-------------\n\n");
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
    partition(A,0,n-1);

    printf("\n\n-------------AFTER SORTING-------------\n\n");

    for(i=0;i<n;i++)
        printf("\nThe value at %d is : > %d",i,A[i]);

    printf("\n\n\nTASK SUCCESSFUL.....");

    getch();
    return 0;
}
