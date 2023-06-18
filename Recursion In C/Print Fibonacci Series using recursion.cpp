//Print Fibonacci Series using recursion.

#include <stdio.h>
int fibonacci(int num) 
{
    if (num <= 1) 
	{
        return num;
    } 
	else
	 {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main()
 {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    
    printf("Fibonacci Series: ");
    for (int i=0;i<num;i++) 
	{
        printf("%d ",fibonacci(i));
    }
}
