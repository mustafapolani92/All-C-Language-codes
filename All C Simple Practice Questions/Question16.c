//Inverted left half pyramid
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>
int main(){
	int i,spaces,j,height;
	printf("Enter the height of the inverted left half pyramid: ");
	scanf("%d",&height);
	for(i=0;i<height;i++){
		for(spaces=0;spaces<i;spaces++){
			printf(" ");
		}
		for(j=0;j<height-i;j++){
			printf("*");
		}
		printf("\n");
		
	}
}
