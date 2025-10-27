#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100001];
	fgets(a, 100001, stdin);
	a[strcspn(a, "\n")] = '\0';
	int demchu=0, demso=0, kitu=0;
	
	for(int i=0; a[i] != '\0'; i++){
		if(isalpha(a[i])){
			demchu++;
		}else if(isdigit(a[i])){
			demso++;
		}else{
			kitu++;
		}
		}
	printf("%d %d %d", demchu, demso, kitu);
	return 0;
}