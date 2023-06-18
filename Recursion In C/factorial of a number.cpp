//3.Write a program to find the factorial of a number.

#include <stdio.h>
int factorial(int num)
	 {
    if (num==0) 
	{
        return 1;
    }
	 else
	 {
        return num *factorial(num-1);
    }
}

int main()
 {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    
    if (num < 0)
	 {
        printf("Factorial is not defined for negative numbers.\n");
    }
	 else 
	{
        int fact=factorial(num);
        printf("The factorial of %d is: %d\n", num, fact);
    }
}
