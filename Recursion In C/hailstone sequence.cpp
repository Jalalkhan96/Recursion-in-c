//Enter a number and find its hailstone sequence using recursion. 
#include <stdio.h>
void hailstoneSequence(int num)
 {
    printf("%d ", num);
    if (num==1)
	 {
        return;
    } 
	else if (num%2==0)
	 {
        hailstoneSequence(num/2);
    } 
	else
	 {
        hailstoneSequence(3*num+1);
    }
}

int main()
 {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    
    printf("Hailstone sequence: ");
    hailstoneSequence(number);
}
 
