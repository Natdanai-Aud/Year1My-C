#include<stdio.h>
int main()
{
//1
/*
	float grade =3.5;
	float*ptr;
	ptr =&grade;
	printf("Grade = %.2f\n",*ptr);
	printf("Address of Grade = %x\n",ptr);
*/
//ex2
/*
	int number[5]={10,20,30,40,50};
	int*myPointer=number;
	printf("first -> %d\n",*myPointer);
	myPointer++;
	printf("go next -> %d\n",*myPointer);
	myPointer+=3;
	printf("go next 3 -> %d\n",*myPointer);
	myPointer--;
	printf("go back -> %d\n",*myPointer);
*/
	float data[4]={1.2,4.0,2.4,3.8},sum=0; int i;
	float*ptr;
	for(i=0;i<4;i++)
	{
	sum=sum+data[i];
	float*ptr=&sum;
	}
	printf("AVG of Data = %.2f\n",sum/4);
}
