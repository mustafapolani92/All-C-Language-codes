//Determine the pattern followed by the series below:
//1, 2, 3, 5, 8, 13, 21, 34, …
//Write a program that takes a number ‘n’ and prints first ‘n’ numbers of this series. For example, if user
//enters 6, your program should display
//1, 2, 3, 5, 8, 13
#include <stdio.h>
int main(){
	int array[200];
	int n;
	printf("Enter a number n: ");
	scanf("%d",&n);
	int i = 2;
	array[0] = 1;
	array[1] = 2;
	while (i<n){
		array[i] = array[i-1] + array[i -2];
		i++;
	}
	for(i =0;i<n-1;i++){
		printf("%d,",array[i]);
	}
	printf("%d.",array[n-1]);
}
