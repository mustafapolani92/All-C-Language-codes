//p can be calculated using the following infinite series:(leibnez series)
//Write a code that prints the value of p after the first 100 terms, 200 terms and 300 terms (in the same
//code).

#include <stdio.h>
int main(){
	double x = 0.00,answer=0.00,y = 1.00;
	int i;
	for(i=0;i<300;i++){
		if(i%2==0){
			x = x + (1/y);
		}
		else{
			x = x + (-1/y);
		}
		if ((i == 99) || (i==199)||(i==299)){
			answer = 4 * x;
			if (i==99){
				printf("Answer of pie after the 100th terms = %.15lf\n",answer);
			}
			else if(i==199){
				printf("Answer of pie after the 200th terms = %.15lf\n",answer);
			}
			else{
				printf("Answer of pie after the 300th terms = %.15lf\n",answer);
			}
		}
		y= y+2;
	 
	}
}
