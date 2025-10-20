#include<stdio.h>
//3.1

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
