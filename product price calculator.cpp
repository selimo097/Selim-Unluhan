#include<stdio.h>

int main()
{
	float  weight;
	float  price;
	float sum;
	
	
	printf("what is the price of your product?\n",price);
	scanf(" %f", &price);
	
	printf("enter the weight of your product please\n",weight);
	scanf(" %f", &weight);
	
	sum = price * weight;
	
	printf("%.2f",sum);
	
	
	
	
	return 0;
	
}
