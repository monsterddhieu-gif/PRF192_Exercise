#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[1001];
	fgets(a, 1001, stdin);
	a[strcspn(a, "\n")] = '\0';
	
	for(int i=0; a[i] != '\0'; i++){
		printf("%c", toupper(a[i]));
	}
	printf("\n");
	
	for(int i=0; a[i] != 0; i++){
		printf("%c", tolower(a[i]));
	}
	
	return 0;
}