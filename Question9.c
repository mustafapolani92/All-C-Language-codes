//The trigonometric series to find cos(x), where x is a number in radians, is given as:
//Write a program that asks the user for x and the number of terms to use to find cos(x). Find the value of
//cos(x) using available function and compute the difference between the calculated value (using your
//program) and the value found from the function. Answer should be displayed with an accuracy of 15
//decimal places.Series:
//cos(x)=1-x^2/2!+x^4/4!

#include <stdio.h>
#include <math.h>
int factorial(int num1){
	int answer = 1;
	int i;
	if(num1==1 || num1==0){
		answer = 1;
	}
	else{
		for(i=1;i<=num1;i++){
			answer = answer * i;
		}
	}
	return answer;
}
int main(){
	float x;
	double j,k,z,sub;
	int count,y;
	j = 0.000;
	printf("Enter the value of x where x is in radians: ");
	scanf("%f",&x);
	printf("Enter the number of terms to find x: ");
	scanf("%d",&count);
	int i = 1;
	if(count<=0){
		printf("Error number of terms cannot be less than 0 or equal to 0.\n");
	}
	y = 2;
	for(i=2;i<=count;i++){
		if(i%2==0){
			k = -((pow(x,y))/factorial(y));
		}
		else{
			k = (pow(x,y))/factorial(y);
		}
		j = j + k;
		y = y+2;
	}
	j = j + 1;
	z = cos(x);
	sub = j-z;
	printf("The calculate value by series is:  %.15lf\n",j);
	printf("The actual value is:  %.15lf\n,",z);
	printf("Difference: %.15lf\n",sub);
	
}

