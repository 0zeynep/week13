#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Armstrong(int num){
	int n=num;
	int length=0;
	while(n>0){
		n/=10;
		length++;
	}
	n=num;
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum+= pow(rem,length);
		n/=10;
		
	}
	if (sum=num){
		return 1;
	}
	else{
		return 0;
	}
}
int Prime(int num){
	int i;
	for(i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
		
	}
	return 1;
}

int main() {
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(Armstrong (num) && Prime (num)!=0 ){
		printf("Armstrong and Prime");
	}
	else if(Armstrong (num)==0 && Prime(num)!=0){
		printf("prime");
		
	}
	else if(Armstrong(num) && Prime(num)==0){
		printf("Armstrong");
	}
	else {
		printf("not prime not armstrong");
	}
	
	
	return 0;
}
