// so luong cac so duong lien tiep nhieu nhat
#include<stdio.h>
int main(){
	int n,i;
	int a[1000];
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri mang\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int sld=0,max=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			sld++;
		   if(sld>max){
		   	max=sld;
		   }
		}else{
			sld=0;
		}
	}printf("So luong so duong lien tiep nhieu nhat la: %d",max);
}
	
