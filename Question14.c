// Creating a triangle:
#include <stdio.h>
int main(){
	int height,i,spaces,k;
	printf("Enter the height of the triangle: ");
	scanf("%d",&height);
	for(i=0;i<height;i++){
		for (spaces=0;spaces<height-i-1;spaces++){
			printf(" ");
		}
		for(k=0;k<(i*2)+1;k++){
			printf("*");
				
		}
		printf("\n");
		
	}
}
