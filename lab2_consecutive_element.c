#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array  --> ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array  --> ");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    int consecutive = 0;
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+1 == arr[i+1])
            consecutive++;
        else
        {
            if(consecutive>max)
                max = consecutive;
            consecutive = 0;
        }
    }
    printf("Maximium number of consequitive element  --> %d", max+1);
}