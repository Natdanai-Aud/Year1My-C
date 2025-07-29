#include<stdio.h>
int main()
{
	
	//1.1
	int i,N;
	printf("Please input N: ");
	scanf("%d",&N);
	i=N;
	while(i>=1)
	{
		printf("%d\n",i);
		i--;
	}
	
	//1.2
	/*
	int i,N;
	printf("Please input N: ");
	scanf("%d",&N);
	i=N;
	while(i>=1)
	{
		if(i%2==1)
		printf("%d\n",i);
		i--;
	}
	*/

//1.3
	/*
	int N=0,sum;
	while(N>=0)
	{
		printf("Please input N: ");
		scanf("%d",&N);
		if(N>=0)
		sum=sum+N;
	}
	printf("Sum = %d \n",sum);
	printf("Bye Bye!!!\n");
	*/

//1.4
	/*
	int N=0 ,sum=0 ;
	while(N>=0)
	{
		printf("Please input N: ");
		scanf("%d",&N);
		if(N>=0)
		if(N%2==0)
			sum = sum+N;
	}
	printf("Sum even = %d\n",sum);
	printf("Bye Bye!!!");
	*/
//2.1
	/*
	int N=0 ,sum=0 ;
	do{
		printf("Please input N: ");
		scanf("%d",&N);
		if(N>=0)
		sum = sum+N ;
	}while(N>=0);
		printf("Sum = %d\n",sum);
		printf("Bye Bye!!!");
	*/
//3.0
	/*
	float N ,sum ;
	do{
		printf("Enter a score, or -1 to quit : ");
		scanf("%f",&N);
		if(N>=0)
		sum = sum+N;
		printf("Now summation is : %.1f\n",sum);
	}while(N>=0);
		printf("PROGRAM TERMINATED!!!");
	*/
//3.1
	/*
	float N ,sum ,score;
	int count = 0;
	do{
		printf("Enter a score, or -1 to quit : ");
		scanf("%f",&N);
		if(N>=0){
			sum = sum+N ;
			count = count+1 ;
			score = sum/count ;
		}
	}while(N>=0);
		printf("Number of students is %d\n",count);
		printf("Average score is %.2f",score);
		*/
//3.2
	/*
	float i ,x=0 ,score=0 ,min=100 ,max=0 ;
	int count=0;
	for(i=0;x!=-1;i++){
		printf("Score of student%d, or -1 to quit: ",count+1);
		scanf("%f",&x);
		if(x!=-1){
			count = count+1;
			score = score+x ;
			if(x>max){
				max = x;
			}
			if(x<min){
				min = x;
			}
		}
	}
	score = score/count ;
	printf("Number of student is %d\n",count);
	printf("Average score is %.2f\n",score);
	printf("Min score is %.2f\n",min);
	printf("Max score is %.2f\n",max);
	*/
}



