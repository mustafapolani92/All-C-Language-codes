#include <stdio.h>
#include <math.h>
int main(){
//A number x can be determined to be a prime number by a method called trial division. Check if x can be
//divided by 2,3,4,…sqrt(x). If it can be divided then it is not a prime number otherwise it is. For example,
//to check if 29 is a prime number, take the square root of 29 and round it to the nearest integer, i.e.,
//5.3852 would be 6. Now check if 29 is divisible by 2,3,4,5 or 6. As it cannot be divided by any of these
//numbers it is a prime number. Your program should exit the loop as soon as it finds the first divisor.

int num,x,i,j;
j = 0;
x = 0;
printf("Enter a number you want to check: ");
scanf("%d",&num);
x = pow(num,0.5);
x = x+1;
for(i=2;i <= x;i++){
	if(num%i==0){
		printf("Your number %d is not a prime number and divisible by %d",num,i);
		j = 1;
		break;
	}
}
if(j==0){
	printf("Your number %d is a prime number.",num);
}
}
