//Fibonacci sequence is calculated such that the n th term is the sum of n – 1 th and n – 2 th term. The first
//number in the sequence is 0 and the second number is 1. Therefore, the third number would be 0 + 1 = 1,
//the fourth number would be 1 + 1 = 2, the seventh number would be 5 + 8 = 13, and so on. Write a
//program that asks the user to enter a number (representing the number of terms to be found). The
//program should write all the numbers in the sequence up to, and including, this term. For example,
# include <stdio.h>
int main(){
	int array[50],i = 2,n;
	printf("Enter the number of terms you want to find of the fibonacci sequence: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Error number must be positive.");
		return 0;
	}
	printf("The first %d terms of the fibonacci sequence is:\n",n);
	array[0] = 0;
	array[1] = 1;
	while (i<n){
		array[i] = array[i-1]+array[i-2];
		i++;
	}
	for(i=0;i<n;i++){
		printf("Term # %d : %d\n",i+1,array[i]);
	}
}








