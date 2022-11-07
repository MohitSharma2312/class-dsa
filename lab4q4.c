/*use menu driven to apply the following operations on it.
a. Addition
b. Subtraction
c. Multiplication */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    int size1;
    int size2;
    printf("Enter Degree of Exp1 ");
    scanf("%d",&size1);
    printf("Enter Degree of Exp2 ");
    scanf("%d",&size2);
    int exp1[size1+1];
    int exp2[size2+1];
    int arr[size1+1][size1+size2+1];
    for(int i=0;i<size1+1;i++)
    {
        printf("\nEnter Exp1 Coffecient %d = ",i+1);
        scanf("%d",&exp1[i]);
    }
    for(int i=0;i<size2+1;i++)
    {
        printf("\nEnter Exp2 Coffecient %d = ",i+1);
        scanf("%d",&exp2[i]);
    }
    int temp=0;
    printf("Enter 1 for addition of polynomials\n");
    //printf("Enter 2 for substraction of polynomials\n");
    printf("Enter 3 for multiplication of polynomials\n");
    printf("Enter choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        {
            if(sizeof(exp1)>sizeof(exp2))
            {
                temp=sizeof(exp1)/sizeof(int);
            }
            else
            {
                temp=sizeof(exp2)/sizeof(int);
            }
            int arr2[temp];
            for(int i=0;i<temp;i++)
            {
                arr2[i]=0;
            }
            for(int j=0;j<sizeof(exp1)/sizeof(int);j++)
            {
                   arr2[j]=arr2[j]+exp1[j]; 
            }
            for(int k=0;k<sizeof(exp2)/sizeof(int);k++)
            {
                   arr2[k]=arr2[k]+exp2[k];
            }
            printf("\nSum : ");
            for(int i=0;i<temp;i++)
            {
                printf("+%dx^%d ",arr2[i],i);
            }
            break;
        }
        // case 2:
        // {
        //     if(sizeof(exp1)>sizeof(exp2))
        //     {
        //         temp=sizeof(exp1)/sizeof(int);
        //     }
        //     else
        //     {
        //         temp=sizeof(exp2)/sizeof(int);
        //     }
        //     int arr2[temp];
        //     for(int i=0;i<temp;i++)
        //     {
        //         arr2[i]=0;
        //     }
        //     for(int j=0;j<sizeof(exp1)/sizeof(int);j++)
        //     {
        //            arr2[j]=arr2[j]-exp1[j];
        //     }
        //     for(int k=0;k<sizeof(exp2)/sizeof(int);k++)
        //     {
        //            arr2[k]=arr2[k]-exp1[k];
        //     }
        //     printf("\nSubstraction : ");
        //     for(int i=0;i<temp;i++)
        //     {
        //         printf(" %dx^%d ",arr2[i],i);
        //     }
        //     break;
        // }
        case 3:
        {
            for(int i=0;i<size1+1;i++)
            {
                for(int j=0;j<size1+size2+1;j++)
                {
                    arr[i][j]=0;
                }
            }
            for(int i=0;i<size1+1;i++)
            {
                for(int j=0;j<size2+1;j++)
                {
                    arr[i][i+j]=exp1[i]*exp2[j];
                }
            }
            printf("\n");
            printf("\nProduct : ");
            for(int i=0;i<size1+size2+1;i++)
            {
                int sum=0;
                for(int j=0;j<size1+1;j++)
                {
                    sum+=arr[j][i];
                }
                printf("+%dx^%d ",sum,i);
            }
            break;
        }
    }
    return 0;
}