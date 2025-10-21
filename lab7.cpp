#include<stdio.h>
//3.1
/*
void PrintLongerLine(){
	int i;
	for(i=0;i<29;i++)
		printf("%c",'*');
	printf("\n");
}
int main(){
	PrintLongerLine();
	PrintLongerLine();
}
*/
//3.1next
/*
void PrintLine(){
	int i;
	for(i=0;i<20;i++)
		printf("%c",'*');
	printf("\n");
}
void PrintLongerLine(){
	int i;
	for(i=0;i<29;i++)
		printf("%c",'*');
	printf("\n");
}
int main(){
	PrintLine();
	PrintLongerLine();
	PrintLine();
	PrintLongerLine();
}
*/
//Ex4.1
/*
void PrintCharLine(char c, int len){
	int i;
	for(i=0;i<len;i++)
		printf("%c",c);
	printf("\n");
}
int main(){
	PrintCharLine('o',10);
	PrintCharLine('x',20);
	getchar();
}
*/
//4.1next
/*
void PrintCharLine(char c, int len){
	int i;
	for(i=0;i<len;i++)
		printf("%c",c);
	printf("\n");
}
int main(){
	PrintCharLine('x',10);
	PrintCharLine('*',20);
	PrintCharLine('v',30);
	getchar();
}
*/
//4.2
/*
void PlotChar(char c, int dist){
	int i;
	for(i=0;i<dist;i++)
		printf(" ");
	printf("%c\n",c);
}
int main(){
	PlotChar('x',1);
	PlotChar('-',2);
	PlotChar('+',3);
	PlotChar('o',6);
}
*/
//5.1
/*
double CircleArea(double radius){
	double area = 3.14159*radius*radius;
	return area;
}
int main(){
	double radius;
	printf("Enter radius: ");
	scanf("%lf",&radius);
	printf("The area of the circle is %.2lf.\n",CircleArea(radius));
}
*/
//5.2
/*
#include<math.h>
double f(int n){
	double sum=0;
	int i;
	for(i=1;i<=n;i++)
		sum+=1.0/i;
	return sum;
}
int main(){
	int x;
	printf("x | f(x)\n");
	printf("--+------\n");
	for(x=1;x<=15;x++){
		printf("%2d| %.3lf\n",x,f(x));
	}
}
*/
//6.1.1
/*
int sum=0; //Global Variable
void AddToSum(int x){
	sum=sum+x;
	printf("Sum in functionAdd = %d\n",sum);
}
void SubtractFromSum(int x){
	sum=sum-x;
	printf("Sum in functionSubtract = %d\n",sum);
}
int main(){
	AddToSum(20);
	SubtractFromSum(5);
	printf("Sum = %d\n",sum);
}
*/
//6.1.2
/*
int sum=0; //Global Variable
void AddToSum(int x){
	sum=sum+x;
	printf("Sum in functionAdd = %d\n",sum);
}
void SubtractFromSum(int x){
	int sum=0;
	sum=sum-x;
	printf("Sum in functionSubtract = %d\n",sum);
}
int main(){
	AddToSum(20);
	SubtractFromSum(5);
	printf("Sum = %d\n",sum);
}
*/
//7.1

#include<math.h>
void PlotChar(char c, int dist){
	int i;
	for(i=0;i<dist;i++)
		printf(" ");
	printf("%c\n",c);
}
double f(int n){
	double a;
		a=20+10*sin(n/(22.00/7.00));
	return a;
}
int main(){
	int x;
	printf("x| f(x)\n");
	printf("--+-------------------------------------> y\n");
	for(x=0;x<=20;x++){
		printf("%2d| ",x);
		PlotChar('*',(int)ceil(f(x)));
	}
}
