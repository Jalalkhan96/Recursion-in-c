//Reverse a number using recursion.
#include <stdio.h>
int reverseNumber(int num)
 {
    static int reversedNum=0;
    if (num>0) 
	{
        reversedNum=reversedNum*10+(num%10);
        reverseNumber(num/10);
    }
    return reversedNum;
}

int main() 
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    
    int reversed=reverseNumber(number);
    printf("Reversed number: %d\n",reversed);
}
