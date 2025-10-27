#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[100001];
	int ts[256] = {0};
	fgets(a, 100001, stdin);
	a[strcspn(a, "\n")] = '\0';
	
	for(int i=0; a[i] != 0; i++){
		unsigned char c = a[i];
		ts[c]++;
	}
	
	for(int i=0; i<256; i++){
		if(ts[i]>0){
			printf("%c %d\n", i, ts[i]);
		}
	}
	
	printf("\n");
	
	for(int i=0; i<256; i++){
		if(ts[i]>0 && islower(i)){
			printf("%c %d\n", i, ts[i]);
		}
	}
	return 0;
}