#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 30


void shell_sort(int a[],int size)
{
    int i=0,j=0,k=0,temp;

    for(k=size/2;k>0;k/=2)
    {
        for(j=k;j<size;j++)
        {
            for(i=j-k;i>=0;i-=k)
            {
                if(a[i+k]<a[i])
                   {
                       temp=a[i+k];
                       a[i+k]=a[i];
                       a[i]=temp;
                   }
                else
                    break;
            }
        }
    }


}


int main()
{
    int A[N];
    printf("\n\n-----------RADIX SORT-------------\n\n");
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

    shell_sort(A,n);

    printf("\n\n-------------AFTER SORTING-------------\n\n");
    for(i=0;i<n;i++)
        printf("\nThe value at %d is : > %d",i,A[i]);

    printf("\n\n\nTASK SUCCESSFUL.....");
    printf("\n\n\nprogrammed by MOHIT MALHOTRA");

    getch();
    return 0;
}
