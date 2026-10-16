// 1. Program to find factorial of number using recursion
/*#include<stdio.h>

int fact (int n);

int main()
{
    int n, f;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("No factorial for negative numbers.");
    }
    else
    {
        printf("%d! = %d\n", n, fact(n)) ;
    }

    return 0 ;
}

int fact (int n)
{
    if(n==0)
    {
        return 1 ;
    }
    else
    {
        return (n * fact(n-1));
    }
}*/



// 2. Display numbers
/*#include<stdio.h>

int display(int n);

int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d", &n);

    display(n) ;

    return 0 ;
}

int display(int n)
{
    printf("%d ", n);
    if(n==0)
    {
        return 0 ;
    }
    else
    {
        return (display(n-1)) ;
    }

}*/



// 3. Program to display and find out the sum of series
/*#include<stdio.h>

int DisplaySum(int n) ;

int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Sum of series : %d", DisplaySum(n)) ;

    return 0 ;
}

int DisplaySum(int n)
{
    if(n==0)
    {
        return 0 ;
    }
    else
    {
        return (n + DisplaySum(n-1)) ;
    }
}*/



// 4. Find the sum of digit of the number 
#include<stdio.h>

int SOD(int n);
int DisplayDigit(int n) ;

int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Sum of digit   : %d\n", SOD(n));
    printf("Digits are     : ") ;
    DisplayDigit(n);

    return 0 ;
}

int SOD(int n)
{
    if(n/10 == 0)
    {
        return n ;
    }
    else
    {
        return(n%10 + SOD(n/10));
    }
}

int DisplayDigit(int n)
{
    printf("%d ", n%10) ;
    if(n/10 == 0)
    {
        return n ;
    }
    else
    {
        return (DisplayDigit(n/10)) ;
    }
}

// 5. 