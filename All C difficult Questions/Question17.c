// Rhombus Pattern:
//****
// ****
//  ****
//   ****
#include <stdio.h>
int main(){
	int height,i,spaces,j;
	printf("Enter the height of rhombus: ");
	scanf("%d",&height);
	for(i=0;i<height;i++){
		for(spaces=0;spaces<i;spaces++){
			printf(" ");
		}
		for(j=0;j<height;j++){
			printf("%d",i+1);
		}
		printf("\n");
	}
}
