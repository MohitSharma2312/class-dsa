#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of element in a array");
    scanf ("%d", &n);
    int arr[n]; 
    printf("Enter the number of elements of a array%d",n);
    for (int i=0; i<n; i++){
        scanf   ("%d", (arr+i));
    }
    for (int i=1;i<n;i++){
        int j = i-1,sum=0;
        while (j>0){
            sum+=arr[j];
            if (sum==arr[i]){
                printf("%d",arr[i]);

            }
            if (sum>arr[i]){
                break;
            }
            j--;
        }
    }
}