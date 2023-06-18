//Write a program in C to find GCD of two numbers using recursion.
#include <stdio.h>
int gcd(int a,int b) 
{
    if (b==0)
	 {
        return a;
    } 
	else
	 {
        return gcd(b,a%b);
    }
}

int main() {
    int num1,num2;
    printf("Enter two positive integers: ");
    scanf("%d %d",&num1,&num2);
    
    int result=gcd(num1,num2);
    printf("GCD: %d\n",result);
}
