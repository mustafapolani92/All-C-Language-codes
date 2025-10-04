//Write a program which takes a number ‘n’ from user and displays its factorial.
#include <stdio.h>
int main(){
	int n,temp,factorial = 1;
	printf("Enter a number you want the factorial of: ");
	scanf("%d",&n);
	temp = n;
	if (n <=0){
		printf("Error number must be greater than 0");
	}
	while(n>0){
		factorial = factorial * n;
		n--;
	}
	printf("Factorial of number %d is: %d! = %d ",temp,temp,factorial);
}
