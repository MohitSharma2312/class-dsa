#include <stdio.h>

void find(int a[20],int n,int k, int l)
{
    int i,j,t;
    for ( i = 0; i < n; i++ )
    {
        for ( j = 0; j < n-i-1; j++ )
        {
            if(a[j]>a[j+1])
            {t=a[j];a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    printf("sorted list");


    for ( i = 0; i < n; i++ )
    printf("%d ",a[i]);
    if (l==1)
    {
        for (i=n-1; i >= n-k; i--);
        printf("\n kth term largest element in array:%d",k,a[i+1]);
    }
    else{
        for (i=0; i < k; i++ );
        printf("\n kth term smallest element in array:%d",k,a[i-1]);
        }
    }
    int main()
    {
        int i,n,a[20],k,l;
        printf(" number of elements in array:");
        scanf("%d",&n);
        printf(" enter array element:");
        for (i=0; i<n; i++)
        scanf("%d",&a[i]);
        printf("enter the value of k");
        scanf("%d",&k);
        printf("\n kth term 1 for largest element or 0 for smallest element in array:");
        scanf("%d",&l);

        find(a,n,k,l);
        }