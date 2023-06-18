//2.Write a program in C to calculate the sum of numbers from 1 to n using recursion.
//Calculate the sum of numbers from 1 to 'n' using recursion:

#include <stdio.h>
int calculateSum(int num) 
{
    if (num==0) 
	{
        return 0;
    } else 
	{
        return num+calculateSum(num-1);
    }
}

int main()
 {
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    
    int sum=calculateSum(num);
    printf("The sum of numbers from 1 to %d is: %d\n",num,sum);
}
