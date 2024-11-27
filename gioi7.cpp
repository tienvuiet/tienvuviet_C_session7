#include<stdio.h>
int main(){
	int n;
	printf("nhap vao do dai cua mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
		if(a[i]%2==0){
			printf("nhap lai so le ");
			i--;
			continue;
	}}
	printf("cac phan tu vua nhap: ");
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}

