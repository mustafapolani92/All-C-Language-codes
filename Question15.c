//Inverted right half pyramid
//*****
//****
//***
//**
//*
#include <stdio.h>
int main(){
	int height,i,j;
	printf("Enter the height of the right half pyramid: ");
	scanf("%d",&height);
	for(i=0;i<height;i++){
		for(j=0;j<height-i;j++){
			printf("*");
			
		} 
		printf("\n");
	}
}
