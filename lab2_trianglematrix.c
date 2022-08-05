
#include <stdio.h>

void lower (int a[3][3], int r, int c)
{
for(int i = 0; i < r; i++)
{
	for(int j = 0; j < c; j++)
	{
	if(i > j)
		printf("0");
	else
	printf("%d" , a[i][j]);
	printf(" ");
	}
	printf("\n");
}
}

void upper (int a[3][3], int r, int c)
{
for(int i = 0; i < r; i++)
{
	for(int j = 0; j < c; j++)
	{
	if(i < j)
		printf("0");
	else
	printf("%d" , a[i][j]);
	printf(" ");
	}
	printf("\n");
}
}
int main() {

int r = 3, c = 3;
int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

printf("\nLower Triangular Matrix is :\n");
lower(a, r, c);
printf("\nUpper Triangular Matrix is :\n");
upper(a, r, c);

	return 0;
}

#include <stdio.h>
 
// Function to print contents of an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
// Function to reverse elements of an array
void reverse(int arr[], int n)
{
    int aux[n];
 
    for (int i = 0; i < n; i++) {
        aux[n - 1 - i] = arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = aux[i];
    }
}
 
int main2(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, n);
    print(arr, n);
 
    return 0;
}