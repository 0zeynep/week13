#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	int area(int x){
		int area;
		area=x*x;
		return area;
	}
		
	int main() {
		int x;
		printf("Enter a number");
		scanf("%d",&x);
		
		printf("area of square %d",area(x));
	
	return 0;
}
	
