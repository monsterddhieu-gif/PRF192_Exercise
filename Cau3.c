#include<stdio.h>
#include<string.h>

int main(){
	char a[100001];
	scanf("%s", a);
	
	int n = strlen(a);
	int left=0;
	int right=n-1;
		
	while(left<right){
		if(a[left] != a[right]){
			printf("NO");
			return 0;
		}
		left++;
		right--;
	}
	
	printf("YES");
	return 0;
}