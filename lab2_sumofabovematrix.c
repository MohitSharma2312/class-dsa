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
    
    
    printf("Sum of elements above main diagonal = %d\n", sum);

    for(int i=1;i<=n;i++)
{
 for(int j=1;j<=m;j++)
 {
  if(i>j)
  sum=sum+arr[i][j];
 }
}
printf("\nSum of elements below main daigonal of matrix = %d",sum);
getch();
    
    printf("\nThe diagonal elements are:\n");
    int min = n;
    if(m<min) min = m;
    for(int i=0; i<min; i++) printf("%d ", arr[i][i]);
    
}