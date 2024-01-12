#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 float average(int a,int b,int c, int d,int e){
	float average;
	average=(a+b+c+d+e)/5;
	
	return (float)average;
}
int main() {
	int a, b, c, d, e;
	printf("Enter five numbers");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("average :%f",average(a,b,c,d,e));
	return 0;
}
