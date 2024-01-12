#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int length(char name[100]){
	int l=1;
	int i;
	for(i=0;name[i]!='\0';i++){
		if (name[i]==' '){
			l++;
		}
	}
	
	return l;
}
int main() {
	
	char name[100];
	printf("Enter text");
	gets(name);
	
	printf("%d",length(name));
	
	return 0;
}
