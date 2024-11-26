#include<stdio.h>
int main (){
	int n;
    printf("nhap so luong phan tu mang: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    	printf("a[%d] :",i);
    	scanf("%d",&a[i]);
    
	}
	return 0;
}
