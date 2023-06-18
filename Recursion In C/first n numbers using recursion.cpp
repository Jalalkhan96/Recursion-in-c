//1.Write a program in C to print first n numbers using recursion.

#include<stdio.h>
void printNumbers(int num)
{
	if(num>0)
	{
		printNumbers(num-1);
		printf("%d ",num);
	}
}
int main()
{
	int num;
	printf("Enter value of num :");
	scanf("%d",&num);
	printf("Print first %d numbers: ",num);
	printNumbers(num);
	printf("\n");
}
