#include<stdio.h>
int main(){
	int n;
	printf("nhap n: ");	scanf("%d",&n);
		int a[n]; 
	for(int i=0;i<n;i++){
		printf(" nhap a[%d] : ",i);
		scanf("%d",&a[i]);
	}
    int size=sizeof(a)/sizeof(int);
	printf("mang vua nhap la: ");
	for(int i=0;i<n;i++){
	printf("do dai cua mang la: %d\n",size);
		printf("%d\t",a[i]);
	}
	return 0;
}
