//Input 10 numbers from the user and print the sum of all numbers which are greater than 10.
#include <stdio.h>
int main(){
	int i,num,sum = 0;
	for(i=0;i<10;i++){
		printf("Enter a %d number: ",i+1);
		scanf("%d",&num);
		if(num>10){
			sum = sum + num;
		}
	}
	printf("Sum of all the numbers greater than 10 is %d",sum);
}
