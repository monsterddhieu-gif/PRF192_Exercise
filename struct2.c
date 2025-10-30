#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct sinhvien{
	char name[50];
	int age;
	int score;
};

typedef struct sinhvien sv;

sv nhap(){
	sv x;
	getchar();
	fgets(x.name, 50, stdin);
	x.name[strcspn(x.name, "\n")]='\0';
	scanf("%d %d", &x.age, &x.score);
	return x;
}

void in(sv x){
	printf("Name: %s\nAge: %d\nScore: %d", x.name, x.age, x.score);
}

int main(){
	sv x[1000];
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		x[i] = nhap();
	double max = x[0].score;
	int pos = 0;
	for(int i=0; i<n; i++){
		if(x[i].score>max){
			max = x[i].score;
			pos = i;
		}
	}
	in(x[pos]);
	return 0;
}
