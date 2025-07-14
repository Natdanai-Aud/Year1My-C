#include<stdio.h>
int main()


{
//2.1
	
	int height;
	printf("Please input your height: "); scanf("%d",&height);
	if(height>120)
		printf("Your ticket price is 350 baht.");
	if(height<=120)
		printf("Your ticket price is 250 baht.");
	
	
//2.2
	/*
	char member;
	float price;
	int discount;
	printf("Please input your item's price: "); scanf("%f",&price);
	getchar();
	printf("Are you my member?: "); scanf("%c",&member);
	if(member=='N')
	{
		printf("Your price is %.0f baht.Thank you.",price);
	}
	if(member=='Y')
	{
	discount=price/10.00;
		printf("Your discount is %d baht.\n",discount);
		printf("Your price is %.0f baht.Thank you.",price-discount);
}
	*/
	
//3.1
	/*
	int first,second,third;
	printf("Please enter 1st number: "); scanf("%d",&first);
	printf("Please enter 2nd number: "); scanf("%d",&second);
	printf("Please enter 3rd number: "); scanf("%d",&third);
	if(first>second){
		if(second>third)
			printf("1st number is the greatest.");
		else if(first>third)
			printf("1st number is the greatest.");
		else
			printf("3rd number is the greatest.");
	}
	else if(second>third)
		printf("2nd number is the greatest.");
	else
		printf("3rd number is the greatest.");
	*/
	
//3.2
	/*
	int N;
	scanf("%d",&N);
	if(N==0){
		printf("Zero Number");
	}
	if(N<0){
		printf("Negative Number");
	}
	if(N>0)
		printf("Positive Number");
	*/
	
//3.3
	/*
	float x=1, y=2, z=3;
	printf("Input y="); scanf("%f",&y);
	if((y>=0)&&(y<0.5))
		printf("A");
	else if((y>=0.5)&&(y<1))
		printf("B");
	else
		printf("C");
	*/
	
//3.4.1
	/*
	int x;
	printf("x= "); scanf("%d",&x);
	if(x>=0)
		if(x<=8)
			printf("A");
	else printf("B");
	*/
	
//3.4.2
	/*
	int x;
	printf("x= "); scanf("%d",&x);
	if(x>=0)
	{
		if(x<=8)
			printf("A");
	}
	else printf("B");
	*/
	
//4.1
	/*
	char x;
	printf("Please input single letter: "); scanf("%c",&x);
	switch(x)
	{
		case'A': case'B': case'C': case'a': case'b': case'c':
			printf("The digit 2 corespond to the letter %c on the telephone.",x);
			break;
		case'D': case'E': case'F': case'd': case'e': case'f':
			printf("The digit 3 corespond to the letter %c on the telephone.",x);
			break;
		case'G': case'H': case'I': case'g': case'h': case'i':
			printf("The digit 4 corespond to the letter %c on the telephone.",x);
			break;
		default:
			printf("Their is not digit on the telephone that coresponds to %c",x);
	}
	*/
	
//5.1
	/*
	char x;
	printf("input char: "); scanf("%c",&x);
	if((x>='A')&&(x<='Z'))
	printf("Output:Upper case letter.");
	else if((x>='a')&&(x<='z'))
	printf("Output:Lower case letter.");
	else if((x>='0')&&(x<='9'))
	printf("Output:Digit.");
	else
	printf("Output:Others");
	*/
	
//5.2
	/*
	int p,t;
	float c,f;
	printf("Promotion Half price : "); scanf("%d",&p);
	getchar();
	printf("Your usage time : "); scanf("%d",&t);
	switch(p){
	case 400: case 800: case 1200:
		c=p/2;
		f=(t*1.5)-c;
		if(f<=c)
	printf("Fee:%.2f baht",c);
		else if(f>=c)
	printf("Fee:%.2f baht",f);
	break;
	default:
		
		printf("Don't have this promotion.");
}	
	*/
	}


