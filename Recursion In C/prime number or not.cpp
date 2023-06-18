//check a number is a prime number or not using recursion.
#include <stdio.h>
int isPrime(int num,int i) 
{
    if (num<=2)
	 {
        return (num==2)?1:0;
    }
    if (num%i==0) 
	{
        return 0;
    }
    if (i*i>num)
	 {
        return 1;
    }
    return isPrime(num,i+1);
}

int main() 
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    
    if (isPrime(number,2)) 
	{
        printf("%d is a prime number.\n",number);
    } 
	else 
	{
        printf("%d is not a prime number.\n",number);
    }
}
