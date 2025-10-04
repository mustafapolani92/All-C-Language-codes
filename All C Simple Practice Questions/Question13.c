//Left half pyramid
//     *
//    **
//   ***
//  ****
// *****

#include <stdio.h>
int main(){
	int height,i,j,k;
	printf("Enter the height of pyramid: ");
	scanf("%d",&height);
	for(i=0;i<height;i++){
		for(j=0;j<=height-i-1;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}
