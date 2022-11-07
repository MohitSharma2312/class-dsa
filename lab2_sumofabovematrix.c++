// #include <stdio.h>

// int main()
// {
//     int n, m;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     printf("Enter number of columns: ");
//     scanf("%d", &m);
    
//     int zeroes = 0, sum = 0;
//     int arr[n][m];
    
//     printf("Enter the matrix:\n");
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             scanf("%d", &arr[i][j]);
//             if(j>i) sum += arr[i][j];
//             if(arr[i][j]==0) zeroes++;
//         }
//     }
    
    
//     printf("Sum of elements above main diagonal = %d\n", sum);

//     for(int i=1;i<=n;i++)
// {
//  for(int j=1;j<=m;j++)
//  {
//   if(i>j)
//   sum=sum+arr[i][j];
//  }
// }
// printf("\nSum of elements below main diagonal of matrix = %d",sum);
// getch();
    
//     printf("\nThe diagonal elements are:\n");
//     int min = n;
//     if(m<min) min = m;
//     for(int i=0; i<min; i++) printf("%d ", arr[i][i]);
    
// }
#include<iostream>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;
class DateTime
{
    private:
    int day,month,hour,year,minute,second;

    public:
    int current()
    {
        time_t ttime = time(0);
        char* dt = ctime(&ttime);
        cout << "\nThe current date and time is: " << dt << endl;
		return ttime;
    }
    // C++ program to find date after adding
// given number of days.

bool isLeap(int y)
{
	if (y%100 != 0 && y%4 == 0 || y %400 == 0)
		return true;

	return false;
}

// Given a date, returns number of days elapsed
// from the beginning of the current year (1st
// jan).
int offsetDays(int d, int m, int y)
{
	int offset = d;

	switch (m - 1)
	{
	case 11:
		offset += 30;
	case 10:
		offset += 31;
	case 9:
		offset += 30;
	case 8:
		offset += 31;
	case 7:
		offset += 31;
	case 6:
		offset += 30;
	case 5:
		offset += 31;
	case 4:
		offset += 30;
	case 3:
		offset += 31;
	case 2:
		offset += 28;
	case 1:
		offset += 31;
	}

	if (isLeap(y) && m > 2)
		offset += 1;

	return offset;
}

// Given a year and days elapsed in it, finds
// date by storing results in d and m.
void revoffsetDays(int offset, int y, int *d, int *m)
{
	int month[13] = { 0, 31, 28, 31, 30, 31, 30,
					31, 31, 30, 31, 30, 31 };

	if (isLeap(y))
		month[2] = 29;

	int i;
	for (i = 1; i <= 12; i++)
	{
		if (offset <= month[i])
			break;
		offset = offset - month[i];
	}

	*d = offset;
	*m = i;
}

// Add x days to the given date.
void addDays(int d1, int m1, int y1, int x)
{
	int offset1 = offsetDays(d1, m1, y1);
	int remDays = isLeap(y1)?(366-offset1):(365-offset1);

	// y2 is going to store result year and
	// offset2 is going to store offset days
	// in result year.
	int y2, offset2;
	if (x <= remDays)
	{
		y2 = y1;
		offset2 = offset1 + x;
	}

	else
	{
		// x may store thousands of days.
		// We find correct year and offset
		// in the year.
		x -= remDays;
		y2 = y1 + 1;
		int y2days = isLeap(y2)?366:365;
		while (x >= y2days)
		{
			x -= y2days;
			y2++;
			y2days = isLeap(y2)?366:365;
		}
		offset2 = x;
	}

	// Find values of day and month from
	// offset of result year.
	int m2, d2;
	revoffsetDays(offset2, y2, &d2, &m2);

	cout << "d2 = " << d2 << ", m2 = " << m2
		<< ", y2 = " << y2;
}
int reset()
    {
        time_t ttime = time(0);
        char* dt = ctime(&ttime);
        cout << "\nThe reset date and time is: " << dt << endl;
		return 0;
    }
	// void add()
    // {
	// 	int a=reset()+current();
    //     cout << "\nThe reset date and time is: " << a << endl;
    // }


};


int main()
{
    DateTime t1;
    t1.current();
    int d = 27, m = 8, y = 2022;
	int x  ;
	 cout<<"Enter no. of days=";
	 cin>>x;

	t1.addDays(d, m, y, x);
	t1.reset();
	int a = t1.reset()+t1.current();
	 cout << "\nThe : " << a << endl;

	
    return 0;
}
