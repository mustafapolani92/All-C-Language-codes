
# include <stdio.h>
int main(){
	//Write a program which keeps taking input from user until he enters -1. On receiving -1 your program will display average of input numbers.
	int sum = 0,num1 = 0,count = 0;
    float avg;
	printf("Enter a number(Enter -1 to exit): ");
	scanf("%d",&num1);
	while(num1!=-1){
		count++;
		sum = sum + num1;
		printf("Enter a number(Enter -1 to exit): ");
	    scanf("%d",&num1);
	}
	avg = sum/count;
	printf("Average of all the numbers is %.2f",avg);
	return 0;

}
