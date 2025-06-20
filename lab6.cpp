#include<stdio.h>
int main()
{
//1.1
/*
	int k;
	for(k=0;k>=-56;k--)
		printf("%d\n",k);
*/
//1.2
/*
	int k;
	for(k=1;k<=10;k++)
		printf("%d\n",k*8);
*/
//ex.1.2
/*
	int i,N;
	printf("Enter N: "); scanf("%d",&N);
	for(i=1;i<=N;i++){
		if(N%i==0) printf("%d\n",i);
	}
*/
//1.3
/*
	int i,N,count=0;
	printf("Enter N: "); scanf("%d",&N);
	for(i=1;i<=N;i++){
		if(N%i==0)count=count+1;
	}
	printf("The number of divisors of %d is %d.\n",N,count);
*/
//1.4
/*
	int i,a,b,count=0;
	printf("Input A = "); scanf("%d",&a);
	printf("Input B = "); scanf("%d",&b);
	for(i=a;i<b;i++){
		if(i%7==0){
		count=count+1;
		printf("%d ",i);
	}
	}
	printf("\nOutput : There is %d number.",count);
*/
//1.5
/*
	int i,a,b,c,count=0;
	printf("Input A = "); scanf("%d",&a);
	printf("Input B = "); scanf("%d",&b);
	printf("Input C = "); scanf("%d",&c);
	for(i=a;i<b;i++){
		if(i%c==0){
		count=count+1;
		printf("%d ",i);
	}
	}
	printf("\nOutput : There is %d number divisible by %d.",count,c);
*/
//1.6
/*
	int i,N,count=0;
	printf("Enter N: "); scanf("%d",&N);
	for(i=1;i<=N;i++){
		if(N%i==0)
		count=count+1;
	}
		if(count==2)
			printf("%d is a prime.",N);
		else
			printf("%d is not a prime.",N);
*/
//2.1
/*
	int n,i,j;
	printf("Input n : "); scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=n;j>1;j--)
		{
			printf("*");
		}
		printf("*\n");
			}
*/
//2.2
/*
int n,i,j;
	printf("Input n : "); scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=n;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
			}
*/
//-2.3-
/*
int n,i,j;
	printf("Input n : "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++) printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
			}
*/
	int n,i;
	printf("Please input N : "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(i%2==0){
		printf("Factor of n : %d\n",i);
	}
	
	printf("Sumation of factor is %d");
}
