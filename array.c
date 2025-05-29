// write a program  of array that contains many many elements and  and find maximum and minimum element in the array
#include<stdio.h>
int main() {
    int n,i;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        

    }
    for(i=0;i<n;i++)
    {
        printf("\t%d", array[i]);
    }

    return 0;
}
