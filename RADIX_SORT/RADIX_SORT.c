#include <stdio.h>
#include <stdlib.h>
#define  N  30


int length_detect(int a [], int n)
{
    int i,max=a[0],count=0;

    for(i=0;i<n;i++)
    {
        if(max<a[i])    max=a[i];
    }

    do
    {
        count++;
        max=max/10;

    } while(max!=0);

return count ;
}

void radix_sort(int A[],int size)
{
    int C[N],small, pos,temp, i, j, k, length;

    length=length_detect(A,size);
    printf("\nLENGTH OF THE ELEMENT : %d\n",length);

    for(i=0;i<size;i++)
            C[i]=A[i];

    for(k=1;k<=length;k++)
    {
       for(i=0;i<size;i++)
       {
           small=A[i]%10;
           pos=i;

           for(j=i+1;j<size;j++)
           {
               if(small>A[j])
               {    small=A[j]%10;
                    pos=j;
               }
           }
           if(pos!=i)
           {
               temp=A[pos];
               A[pos]=A[i];
               A[i]=temp;

               temp=C[pos];
               C[pos]=C[i];
               C[i]=temp;
           }

       }

       for(i=0;i<size;i++)
       {
           A[i]=A[i]/10;
       }
    }


    printf("\n\n-------------AFTER SORTING-------------\n\n");

    for(k=0;k<size;k++)
        printf("\nThe value at %d is : > %d",k,C[k]);

   return;
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
    radix_sort(A,n);

    printf("\n\n\nTASK SUCCESSFUL.....");

    getch();
    return 0;
}
