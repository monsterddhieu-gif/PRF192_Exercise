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
	
	int max =0, min = 1000000000;
	char ch_max;
	char ch_min;
	
	for(int i=0; i<256; i++){
		if(ts[i]>0){
			if(ts[i]>max || (ts[i] == max && i>ch_max)){
				max = ts[i];
				ch_max=i;
			}
		}
	}
	
	for(int i=0; i<256; i++){
		if(ts[i]>0){
		if(ts[i]<min || (ts[i] == min && i > ch_min)){
			min = ts[i];
			ch_min =i;
		}
	}
}
	
	printf("%c %d\n", ch_max, max);
	printf("%c %d\n", ch_min, min);
	return 0;
}