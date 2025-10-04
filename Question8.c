//An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to
//the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.Write a
//program to find all Armstrong number in the range of 0 and 999.
#include <stdio.h>
#include <math.h>
int main(){
	int i = 0,dig1,dig2,dig3,sum=0;
	while (i<999){
		dig1 = i/100;
		dig2 = (i%100);
		dig2 = dig2/10;
		dig3 = i%10;
		sum = pow(dig1,3)+pow(dig2,3)+pow(dig3,3);
		if (sum==i){
		
			printf("%d is an Armstrong number\n",i);
		}
		i++;
		}
}
