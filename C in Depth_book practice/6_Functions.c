// 1. Program to find square root of a number
/*#include<stdio.h>
#include<math.h>
int main()
{
    float n, s;
    printf("Enter a number : ");
    scanf("%f", &n);
    s = sqrt(n) ;
    printf("Square root of %.1f = %.1f\n", n, s);
    return 0 ;
}*/



// 2. Program to draw a line using function
/*#include<stdio.h>
void draw_line(void)
{
    for(int i=0 ; i<=80 ; i++)
    {
        printf("-");
    }
}

int main()
{
    draw_line();
    return 0 ;
}*/



// 3. Program to find sum of two numbers
/*#include<stdio.h>

int sum(int* n1, int* n2);

int main()
{
    int n1, n2, ans;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    ans = sum(&n1, &n2);
    printf("%d + %d = %d\n", n1, n2, ans);
    return 0 ;
}

int sum(int* n1 , int* n2)
{
    return(*n1+*n2) ;
}*/



// 4. Program to find sum of of two numbers
/*#include<stdio.h>

int sum(int a, int b);

int main()
{
    int a=10, b=20, r ;

    r = sum(a, b);
    printf("%d\n", r);

    r = sum(a, b); 
    printf("%d\n", r);

    r = sum(4,5);
    printf("%d\n", r);

    r = sum(100, 150);
    printf("%d\n", r);

    return 0 ;
}

int sum(int a, int b)
{
    return(a+b);
}*/



// 5. Program to understand the use of return statement
/*#include<stdio.h>

void boys_selection(int age, float height , float weight) ;

int main()
{
    int age ;
    float height, weight ;
    printf("Enter your age : ") ;
    scanf("%d", &age);
    printf("Enter your height and weight : ") ;
    scanf("%f%f", &height, &weight);

    boys_selection(age,height,weight) ;

    return 0 ;
}

void boys_selection(int age, float height, float weight)
{
    if(age<18 && age>25)
    {
        printf("Age should be greater 18 and less then 25") ;
        return ;
    }

    if(height<165)
    {
        printf("Height should be greater 165") ;
        return ;
    }

    if(weight<60 && weight>120)
    {
        printf("Weight should be greater 60kg and less than 120kg") ;
        return ;
    }

    printf("You are elegible for next round");
}*/



// 6. Find the largest number
/*#include<stdio.h>

int Largest(int n1, int n2) ;

int main()
{
    int n1, n2, r ;
    printf("Enter a number : ");
    scanf("%d%d", &n1, &n2) ;
    
    r = Largest(n1, n2) ;
    printf("Largest number = %d\n", r);

    return 0 ;
}

int Largest(int n1, int n2)
{
    if(n1>n2)
    {
        return n1 ;
    }
    else
    {
        return n2 ;
    }
}*/



// 7. 
/*#include<stdio.h>

void change(int *a, int *b);

int main()
{
    int a=10 , b=20 ;
    printf("a=%d\tb=%d\n", a, b);
    change(&a, &b);
    printf("a=%d\tb=%d\n", a, b);
    return 0 ;
}

void change(int *a, int *b)
{
    (*a)++ ;                // *a = (*a)++  fails because modifying the same variable twice in the same expression 
    (*b)++ ;
}*/



// 8. Program to find odd or even
/*#include<stdio.h>

void odd_even(int n) ;

int main()
{
    int n, r;
    printf("Enter a number : ");
    scanf("%d", &n);

    odd_even(n);

    return 0 ;
}

void odd_even(int n)
{
    if(n%2==0)
    {
        printf("It is an even number ");
    }
    else
    {
        printf("It is an odd number");
    }
}*/



// 9. Program to find factorial of a number 
/*#include<stdio.h>

int fact(int n);

int main()
{
    int n, f ;
    printf("Enter a number : ");
    scanf("%d", &n);
    f = fact(n);
    printf("%d! = %d\n", n, f);
    return 0 ;
}

int fact(int n)
{
    int f=1;

    for(int i=1 ; i<=n ; i++)
    {
        f *= i ;
    }

    return f ;
}*/



// 10. Program that uses a function with no argument and no return value
/*#include<stdio.h>

void display_menu(void) ;

int main()
{
    int choice ;

    display_menu();
    printf("Enter your choice : ");
    scanf("%d", &choice);
    return 0 ;
}

void display_menu()
{
    printf("1. Create database\n");
    printf("2. Insert new record\n");
    printf("3. Modify a record\n");
    printf("4. Delete a record\n");
    printf("5. Exit\n");
}*/



// 17. Write a function reverse() that input a number abd returns the reverse of the number.
/*#include<stdio.h>

int reverse(int n);

int main()
{
    int n, rev; 
    printf("Enter a number : ");
    scanf("%d", &n);

    rev = reverse(n);

    printf("Reverse of number = %d", rev) ;

    return 0 ;
}

int reverse(int n)
{
    int digit, rev=0 ;

    while(n!=0)
    {
        digit = n%10 ;
        rev = (rev*10) + digit ;
        n = n/10 ;
    }

    return rev ;
}*/



// 18. Make a function isPalindrome() that inputs the number ans check weather it is palindrome number. 
/*#include<stdio.h>

void isPalindrome(int n);

int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);

    isPalindrome(n) ;

    return 0 ;
}

void isPalindrome(int n)
{
    int digit, rev=0, temp ;

    temp = n ;

    while(n!=0)
    {
        digit = n%10 ;
        rev = (rev*10) + digit ;
        n = n/10 ;
    }

    if(rev == temp)
    {
        printf("It is a palindrome number.");
    }
    else
    {
        printf("It is not palindrome number.");
    }
}*/



// 19. Write a function isPrime() which takes number and returns 1 if the number is prime and 0 otherwise
/*#include<stdio.h>

int isPrime(int n);

int main()
{
    int n, ans;
    printf("Enter a number : ");
    scanf("%d", &n);

    ans = isPrime(n);

    if(ans == 1)
    {
        printf("It is a prime number.");
    }
    else
    {
        printf("It is not a prime number.");
    }

    return 0 ;
}

int isPrime(int n)
{
    int flag=1 ;

    if(n<2)
    {
        flag = 0 ;
    }

    for(int i=2 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            flag = 0 ;
        }
    }

    if(flag == 1)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}*/



// 20. Write a function that input two numbers and print all the prime number between those number.
/*#include<stdio.h>

void PrintPrime(int a, int b) ;

int main()
{
    int a, b ;
    printf("Enter the starting number and ending number : ");
    scanf("%d%d", &a, &b);
    if(a<2)
    {
        printf("There are no prime numbers.");
        return 0 ;
    }

    PrintPrime(a,b);

    return 0 ;
}

void PrintPrime(int a, int b)
{
    for(int i=a ; i<b ; i++)
    {
        int flag = 1 ;

        for (int j=2 ; j<i ; j++)
        {
            if(i==j)
            {
                continue;
            }

            if(i%j == 0)
            {
                flag = 0 ;
                break;
            }
            else
            {
                flag = 1 ;
            }
        }

        if(flag == 1)
        {
            printf("%d ", i);
        }
    }
}*/



// 21. A function that convert decimal to binary
/*#include<stdio.h>

void Print_binary(int n) ;
int get_binary(int n) ;

int main()
{
    int n, bin;
    printf("Enter a number : ");
    scanf("%d", &n);

    Print_binary(n);

    bin = get_binary(n);
    printf("Binary : %d\n", bin);
    
    return 0 ;
}

void Print_binary(int n)
{
    int reg=0;
    printf("Binary : ") ;
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (n>>i)&1 ) ;
    }
    printf("\n") ;
}

int get_binary(int n)
{
    long rem ,bin=0;

    while(n!=0)
    {
        rem = n%2 ;
        bin = (bin*10) + rem ;
        n = n/2 ;
    }

    return bin ;
}*/



// 23. Write a function that inputs binary or octal number and convert it into decimal
/*#include<stdio.h>

int getDecimal(long int b);

int main()
{
    long int b, n, o;
    printf("Enter the number in binary : ") ;
    scanf("%d", &b);

    n = getDecimal(b);

    printf("In decimal : %d\n", n);
    printf("In octal   : %o\n", n) ;

    return 0 ;
}

int getDecimal(long int b)
{
    int rem, n, i=0, j, sum=0;

    while(b!=0)
    {
        rem = b%10 ;

        for(j=0 ; j<=i ; j++)
        {
            if(j==0)
            {
                n = rem * 1 ;
                continue; ;
            }
            n = rem * 2*n ;
        }

        sum += n ;
        b = b/10 ;
        i++ ;
    }

    return sum ;
}*/
