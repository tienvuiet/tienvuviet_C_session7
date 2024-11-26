#include<stdio.h>
int main (){
	int n;
	int a[5];
	for(int i=0;i<5;i++){
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("mang vua nhap la:\n ");
	for(int i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
