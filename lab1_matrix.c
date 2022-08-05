#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    
    int zeroes = 0, sum = 0;
    int arr[n][m];
    
    printf("Enter the matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
            if(j>i) sum += arr[i][j];
            if(arr[i][j]==0) zeroes++;
        }
    }
    
    printf("\nNumber of zeroes = %d\n", zeroes);
    printf("Sum of elements above main diagonal = %d\n", sum);
    
    printf("\nThe diagonal elements are:\n");
    int min = n;
    if(m<min) min = m;
    for(int i=0; i<min; i++) printf("%d ", arr[i][i]);
    
    printf("\n\nElemennts of matrix in row major form are:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nElemennts of matrix in column major form are:\n");
    for(int j=0; j<m; j++) {
        for(int i=0; i<n; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}