// DIAMOND:
#include <stdio.h>
int main(){
	int height,i,spaces,k,y;
	char shape;
	printf("Enter the height of the dimaond shape: ");
	scanf("%d",&height);
	printf("Enter the character which you need to print the diamond with: ");
	scanf(" %c",&shape);
	height = height/2;
	y = 1;
	for(i=0;i<height;i++){
		for(spaces=0;spaces<height-i;spaces++){
			printf(" ");
		}
		for(k=0;k<y;k++){
			printf("%c",shape);
		}
		y = y+2;
		printf("\n");
   }
   for(i=0;i<y;i++){
   		printf("%c",shape);
   }
   printf("\n");
   y = y-2;
   for(i=0;i<height;i++){
   		for(spaces=0;spaces<i+1;spaces++){
   			printf(" ");
        }
   		for(k=0;k<y;k++){
   				printf("%c",shape);
		}
		y = y-2;
		printf("\n");
	}
}
