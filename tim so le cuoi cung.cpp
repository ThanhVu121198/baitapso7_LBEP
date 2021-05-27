// tim so le cuoi cung cua mang
#include<stdio.h>
int main(){
	int n,i;
	int a[1000];
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		if(a[i]%2!=0){
			printf("So le cuoi cung la: %d",a[i]);
			return 0;
	    	}
		}printf("Mang khong co so le");
	}
	
