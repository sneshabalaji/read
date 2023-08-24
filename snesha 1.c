
#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for (int pass =0; pass<n-1; pass++)
    {
        for( int i=0; i<n-pass-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={5,6,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array:");
    for( int i=0; i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
