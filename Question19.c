// Hollow square pattern
//*******
//*     *
//*		*
//*		*
//*		*
//*		*
//*******
#include <stdio.h>
int main(){
	int height,i,j;
	printf("Enter the height of the square: ");
	scanf("%d",&height);
	for(i=0;i<height;i++){
		printf("*");
	}
	printf("\n");
	for(j=0;j<height-2;j++){
	
		printf("*");
		for(i=0;i<height-2;i++){
			printf(" ");
		}
		printf("*");
		printf("\n");
		
	}
	for(i=0;i<height;i++){
		printf("*");
	}
	
}
