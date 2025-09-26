#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i;
	double S=0;
	if(n>0){
		for(i=1; i<=n; i++){
			S+=1.0/i;
		}
		printf("%.3lf", S);
		}else{
			printf("Sai cu phap");
		}
		return 0;
	}