#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

		
int main() {
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	evenodd(x);
	
	return 0;
}
void evenodd(int x){

	
	if (x%2==0){
		printf("even");
	}
	else{
		printf("odd");
		return evenodd;
	}
}
