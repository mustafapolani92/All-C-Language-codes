#include <stdio.h>
int main(){
	char num1[100];
	int x,i;
	printf("Enter the number: ");
	scanf("%s",num1);
	i = 0;
	while (num1[i] != '\0'){
		i++;
	}
	for(x = 0;x<i;x++){
		printf("%c\n",num1[x]);
	}
	printf("Reversed Working: ");
	i = i - 1;
	while (i >= 0){
		printf("%c",num1[i]);
		i--;
	}
}
