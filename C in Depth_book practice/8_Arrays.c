// 1. Program to input values into an array and display it
/*#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE], limit;
    printf("Enter the size of array : ");
    scanf("%d", &limit);
    printf("Enter the array elements : ");
    for(int i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0 ; j<limit ; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0 ;
}*/




// 2.  Program to add elements of an array
/*#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5} ;
    int size, sum=0;

    size = sizeof(arr) / sizeof(arr[0]) ;
    
    for(int i=0 ; i<size ; i++)
    {
        sum += arr[i] ;
    }

    printf("Sum of array elements : %d\n", sum);
    
    return 0 ;
}*/



// 3. Program to count odd and even numbers in an array
/*#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7} ;
    int size, count_odd=0, count_even=0 ;

    size = (sizeof(arr) / sizeof(arr[0])) ;

    for(int i=0 ; i<size ; i++)
    {
        if((arr[i]%2) == 0)
        {
            count_even++ ;
        }
        else
        {
            count_odd++ ; 
        }
    }

    printf("No of odd elements in an array  : %d\n", count_odd) ;
    printf("No of even elements in an array : %d\n", count_even);
    
    return 0 ;
}*/



// 4. Program to find largest and smallest number in an array
/*#include<stdio.h>
int main()
{
    int arr[] = {8, 7, 12, 2, 4, 6} ;
    int size, largest, smallest ;

    largest = smallest = arr[0] ;

    size = (sizeof(arr) / sizeof(arr[0])) ;

    for(int i=1 ; i<size ; i++)
    {
        if(arr[i] > largest) 
        {
            largest = arr[i] ;
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i] ;
        }
    }

    printf("Largest : %d\n", largest);
    printf("Smallest : %d\n", smallest);

    return 0 ;
}*/



// 5. Program to reverse the element of array
/*#include<stdio.h>
int main()
{
    int arr[] = {11,22,33,44,55,66} ;
    int size, temp;

    size = sizeof(arr) / sizeof(arr[0]) ;

    for(int i=0 ; i<(size/2) ; i++)
    {
        temp = arr[i] ;
        arr[i] = arr[size-i-1] ;
        arr[size-i-1] = temp ;
    }

    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]) ;
    }

    return 0 ;
}*/



// 6. Program to convert decimal number to binary number
