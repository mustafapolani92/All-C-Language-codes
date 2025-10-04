//Keep inputting two numbers from the user. You have to stop when the sum of the two numbers is odd;
//otherwise input the two numbers again. At the end you have to output the product of all the numbers
//input by the user.
#include <stdio.h>
int main(){
	int num1,num2,sum=0,product=1;
	printf("Enter the number 1: ");
	scanf("%d",&num1);
	printf("Enter the number 2: ");
	scanf("%d",&num2);
	sum = num1 + num2;
	while (sum%2 == 0){
		product = product * num1 * num2;
		printf("Number stored successfully!!\n");
		printf("Enter the number 1: ");
	    scanf("%d",&num1);
	    printf("Enter the number 2: ");
	    scanf("%d",&num2);
	    sum = num1 + num2;
	}
	printf("The product of all these numbers is %d\n",product);
}
