#include<stdio.h>
int main()
{
	//lap3
	
	//3.1
	int dividend,divisor,q,r;
	printf("Input Dividend: "); 
	scanf("%d",&dividend);
	printf("Input Divisor: "); 
	scanf("%d",&divisor);
	q=dividend/divisor;
	r=dividend%divisor;
	printf("Quotient of %d/%d is %d and remainder is %d",dividend,divisor,q,r);
	
	
	/*
	//3.2
	float c,f;
	printf("Input a temperature in degree Celsius: ",c); scanf("%f",&c);
	f=9.0/5.0*c+32;
	printf("%.0f degrees Celsius is equivalent to %.1f degrees Fahrenheit",c,f);
	*/
	
	/*
	//3.3
	float one,two,three;
	printf("input1: ",one); scanf("%f",&one);
	printf("input2: ",two); scanf("%f",&two);
	printf("input3: ",three); scanf("%f",&three);
	printf("output\n");
	
	printf("%9.4f\n",one);
	printf("%9.4f\n",two);
	printf("%9.4f\n",three);
	*/
	
	/*
	//3.4
	float r,a,v;
	printf("Please input r : "); scanf("%f",&r);
	a=4.00*22/7*r*r;
	printf("The surface area of sphere is %.2f\n",a);
	v=4.00/3.00*22/7*r*r*r;
	printf("The volume of sphere is %.2f",v);
	*/	
}
