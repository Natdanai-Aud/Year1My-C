#include<stdio.h>
//#include<math.h>
//3.1
/*
struct Vector{
	double x,y,z;
};
struct Vector ReadVector(){
	struct Vector v;
	printf("X element: ");
	scanf("%lf",&v.x);
	printf("Y element: ");
	scanf("%lf",&v.y);
	printf("Z element: ");
	scanf("%lf",&v.z);
	return v;
}
void PrintVector(struct Vector v){
	printf("(%.2lf,%.2lf,%.2lf)",v.x,v.y,v.z);
}
int main(){
	struct Vector a;
	printf("Enter a vector\n");
	a=ReadVector();
	printf("You justed enter a vector ");
	PrintVector(a);
	printf("\n");
}
*/
//Ex.3.2 use math
/*
struct Vector{
	double x,y,z;
};
struct Vector ReadVector(){
	struct Vector v;
	printf("X element: ");
	scanf("%lf",&v.x);
	printf("Y element: ");
	scanf("%lf",&v.y);
	printf("Z element: ");
	scanf("%lf",&v.z);
	return v;
}
void PrintVector(struct Vector v){
	printf("(%.2lf,%.2lf,%.2lf)",v.x,v.y,v.z);
}
double VectorSize(struct Vector v){
	return sqrt(pow(v.x,2)+pow(v.y,2)+pow(v.z,2));
}
int main(){
	struct Vector v;
	printf("Enter vector v\n");
	v=ReadVector();
	printf("The size of the vector ");
	PrintVector(v);
	printf(" is %.2lf\n",VectorSize(v));
}
*/
//3.2
/*
struct Vector{
	double x,y,z;
};
struct Vector ReadVector(){
	struct Vector v;
	printf("X element: ");
	scanf("%lf",&v.x);
	printf("Y element: ");
	scanf("%lf",&v.y);
	printf("Z element: ");
	scanf("%lf",&v.z);
	return v;
}
double DotVector(struct Vector u,struct Vector v){
	return(u.x*v.x)+(u.y*v.y)+(u.z*v.z);
}
int main(){
	struct Vector u,v;
	printf("Enter vector u\n");
	u=ReadVector();
	printf("Enter vector v\n");
	v=ReadVector();
	printf("u * v = %.2lf\n",DotVector(u,v));
}
*/
struct Vector{
	double x,y,z;
};
struct Vector ReadVector(){
	struct Vector v;
	printf("X element: ");
	scanf("%lf",&v.x);
	printf("Y element: ");
	scanf("%lf",&v.y);
	printf("Z element: ");
	scanf("%lf",&v.z);
	return v;
}
void PrintVector(struct Vector v){
	printf("(%.2lf,%.2lf,%.2lf)",v.x,v.y,v.z);
}
double CrossVector(struct Vector u,struct Vector v){
	struct Vector product;
	product=(u.y*v.z)-(u.z*v.y);
//	product=(u.z*v.x)-(u.x*v.z);
	//=(u.x*v.y)-(u.y*v.x);
	return product;
}
int main(){
	struct Vector u,v;
	printf("Enter vector u\n");
	u=ReadVector();
	printf("Enter vector v\n");
	v=ReadVector();
	printf("u x v = ");
	PrintVector(CrossVector(u,v));
}
