#include<stdio.h>
int main()
{
    int n;
    int data[n];
    printf("enter the no. of elements in an array ");
    scanf("%d", &n);
    
    printf("enter the elements:");
    for (int i = 0; i < n; ++i)
    scanf("%d", data +i );

    printf("You entered the elements"   );
    for (int i = 0; i < n; ++i )
    printf("%d\n", *(data + i));
    return 0;

    
    }