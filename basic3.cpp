#include<stdio.h>
int main (){
	int n;
	int a[5];
	int dem=0;
		for(int i=0;i<5;i++){	
			printf("nhap a[%d]: ",i);
			scanf("%d",&a[i]);
		}
	printf("\n");
		for(int i=0;i<5;i++){		
			if(a[i]%2==0){
			printf("%d\n",a[i]);
		}
	}
		for(int i=0;i<5;i++){		
			if(a[i]%2!=0){
		    dem++;
		    if(dem==5){
		    	printf(" khong co so nao");
			}
		}
		}
	return 0;
}
