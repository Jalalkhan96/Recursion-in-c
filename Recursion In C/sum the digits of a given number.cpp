//Write a program in C to sum the digits of a given number using recursion.
#include <stdio.h>
int sumOfDigits(int num)
 {
    if (num==0)
	 {
        return 0;
    } 
	else
	 {
        return (num % 10)+sumOfDigits(num/10);
    }
}

int main()
 {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    
    int sum=sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);
}
