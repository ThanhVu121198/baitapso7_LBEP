// tim so duong nho nhat
#include<stdio.h>
int main(){
	int n,i;
	int a[1000];
	printf("Nhap so phan tu co trong mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cua mang:\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int min;
	for(i=0;i<n;i++){
		if(a[i]>0){
			min=a[i];
	for(i=0;i<n;i++){
		if(a[i]>0&&a[i]<min){
			min=a[i];
			
		}
	}printf("So duong nho nhat mang la:%d",min);
}else{
	printf(" Mang khong co so duong @@");
	return 0;
}
}
}
