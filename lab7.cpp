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
