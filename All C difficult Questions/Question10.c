//Write a program in which the user has to enter all numbers between 5 and 25 (inclusive). If the user does
//not enter the correct number, display an error and ask to enter again.
#include <stdio.h>
int main(){
	int num,i;
	printf("Enter a number between 5 and 25 inclusive: ");
	for(i=5;i<=25;i++){
		printf("Enter a number between 5 and 25 inclusive: ");
		scanf("%d",&num);
		while(num!=i){
			printf("Invalid....Enter again.\n");
			printf("Enter a number between 5 and 25 inclusive: ");
			scanf("%d",&num);
		}
		printf("Correct number written successfully.\n");
		printf("%d\n",i);
	}
	printf("Congrats on successfully writing all the numbers.\n");
}
