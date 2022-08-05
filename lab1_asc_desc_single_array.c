#include<stdio.h>

void ascDecFunc(int a[], int n)
{
    int temp;
    for(int i=0;i < n-1;i++)
    {
        for(int j = 0;j < n/2; j++) { if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
        for(int j = n/2;j < n-1; j++)
        {
            if(a[j] < a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
	
	for(int i = 0; i < n; i++)
	    printf("%d ", a[i]);
}
 
int main()
{
    int arr[] = {11,23,44,21,32,89,4,7,2,9};
    int len = sizeof(arr) / sizeof(arr[0]);
    ascDecFunc(arr, len);
 
    return 0;
}