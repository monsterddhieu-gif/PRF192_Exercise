#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct student{
	char name[50];
	int tuoi;
};
typedef struct student st;
int main(){
	st a;
	gets(a.name);
	scanf("%d", &a.tuoi);
	printf("Name: %s \nTuoi: %d", a.name, a.tuoi);
	return 0;
}