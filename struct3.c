#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct sinhvien{
	char name[50];
	int age;
};
typedef struct sinhvien sv;
sv nhap(){
	sv a;
	getchar();
	fgets(a.name, 50, stdin);
	a.name[strcspn(a.name, "\n")] = '\0';
	scanf("%d", &a.age);
	return a;
}
void display(sv a){
	printf("Name: %s\nAge: %d\n", a.name, a.age);
}
int main(){
	sv a[1000];
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		a[i] = nhap();
	for(int i=0; i<n; i++)
	display(a[i]);
	return 0;
}