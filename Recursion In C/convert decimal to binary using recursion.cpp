//Write a program to convert decimal to binary using recursion.
#include <stdio.h>
void decimalToBinary(int num) 
{
    if (num>0)
	 {
        decimalToBinary(num/2);
        printf("%d",num%2);
    }
}

int main()
 {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    
    printf("Binary equivalent: ");
    decimalToBinary(decimal);  
}
