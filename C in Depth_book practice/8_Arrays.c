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
/*#include<stdio.h>
int main()
{
    int n, arr[15], i, j;
    printf("Enter the number : ");
    scanf("%d", &n) ;
    
    i=0 ;
    while(n!=0)
    {
        arr[i] = n%2 ;
        n = n/2 ;
        i++ ;
    }

    printf("Binary : ");
    for(j=i-1 ; j>=0 ; j--)
    {
        printf("%d", arr[j]) ;
    }
    return 0 ;
}*/



// 7. Program to pass array elements to the function
/*#include<stdio.h>
#define SIZE 10

int print_array (int n);
int main()
{
    int arr[SIZE] , size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the array elements : ");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d", &arr[i]);
        print_array(arr[i]) ;
    }

    return 0 ;
}

int print_array(int n)
{
    printf("%d ", n) ;
}*/



// 7.1 Program to pass array elements to function
/*#include<stdio.h>
#define SIZE 20

void check(int n) ;
int main()
{
    int arr[SIZE], size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the array elements : ") ;
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d", &arr[i]);
        check(arr[i]) ;
    }

    return 0 ;
}

void check (int n)
{
    if(n%2 == 0)
    {
        printf("Even ");
    }
    else
    {
        printf("Odd ") ;
    }
}*/



// 8. Program to understand the effect of passing an array to a function
/*#include<stdio.h>
#define SIZE 10

void sum_of_square_of_elements(int arr[], int size) ;

int main()
{
    int arr[SIZE], size ;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the array elements : ");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum_of_square_of_elements(arr, size) ;

    printf("Content of array : ");
    for(int i=0 ; i<size ; i++)
    {
        printf("%d ", arr[i]) ;
    }

    return 0 ;
}

void sum_of_square_of_elements(int arr[], int size)
{
    int sum=0 ;

    for(int i=0 ; i<size ; i++)
    {
        arr[i] *= arr[i] ;
        sum += arr[i] ;
    }
    printf("Sum of square of elements : %d", sum) ;
    
    printf("\n") ;
}*/



// 9. Program uses a general function which work on array of diffrent size
/*#include<stdio.h>

int add (int arr[], int size) ;

int main()
{
    int a[5]  = {2,4,6,8,10} ;
    int b[8]  = {1,3,5,7,9,11,13,15} ;
    int c[10] = {1,2,3,4,5,6,7,8,9,10} ;

    printf("Sum of array a = %d\n", add(a,5));
    printf("Sum of array b = %d\n", add(b,8));
    printf("Sum of array c = %d\n", add(c,10));

    return 0 ;
}

int add (int arr[], int size)
{
    int sum=0 ;
    for(int i=0 ; i<size ; i++)
    {
        sum += arr[i] ;
    }

    return sum ;
}*/



// 10. Program to input and display matrix
/*#include<stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int mat[ROW][COL] ;

    printf("Enter the elements of matrix[%d][%d] in row-wise :\n", ROW, COL) ;
    for(int i=0 ; i<ROW ; i++)
    {
        for(int j=0 ; j<COL ; j++)
        {
            scanf("%d", &mat[i][j]) ;
        }
    }

    printf("Matrix : \n");
    for(int i=0 ; i<ROW ; i++)
    {
        for(int j=0 ; j<COL ; j++)
        {
            printf("%d ", mat[i][j]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}*/



// 16. Write a program using array, it reads the decimal number and convert it to (1)Binary (2)Octal (3)Hexadecimal
/*#include<stdio.h>

void print_binary(int n) ;
void print_octal(int n) ;
void print_hexadecimal(int n) ;

int main()
{
    int n, choice;
    printf("Enter a decimal number : ");
    scanf("%d", &n);
  
    printf("\n1.Convert to Binary\n");
    printf("2.Convert to Octal\n");
    printf("3.Convert to Hexadecimal\n");

    printf("\nEnter your choice : ");
    scanf("%d", &choice) ;

    switch(choice)
    {
        case 1 : print_binary(n) ; break ;
        case 2 : print_octal(n) ; break ;
        case 3 : print_hexadecimal(n) ; break ;
        default : printf("Invalide choice") ; break ;             
    }

    return 0 ;
}

void print_binary(int n)
{
    int rem ;
    printf("\nBinary : ") ;
    while(n!=0)
    {
        rem = n%2 ;
        printf("%d", rem) ;
        n = n/2 ;
    }
}

void print_octal(int n)
{
    printf("\nOctal : %o", n);
}

void print_hexadecimal(int n)
{
    printf("\nHexadecimal : %X", n) ;
}*/



// 17. Linear Search
#include<stdio.h>

int LinearSearch(int arr[], int item, int size) ;

int main()
{
    int arr[] = {4,2,6,21,3,32,54,34,6,2,7,5} ;
    int item, size;

    size = sizeof(arr) / sizeof(arr[0]) ;

    printf("Enter the item to be searched : ");
    scanf("%d", &item) ;

    LinearSearch(arr,item,size);

    return 0 ;
}

int LinearSearch(int arr[], int item, int size)
{
    int flag ;

    for(int i=0 ; i<size ; i++)
    {
        flag = 1 ;

        if(item == arr[i])
        {
            printf("%d found in %dth position", item, i) ;
            break ;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag == 0)
    {
        printf("Not found");
    }
}