#include<stdio.h>

int main(){
	int n;
	int a[n],i;
	double tbc;
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	 printf("Nhap gia tri cua mang:\n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int tong=0;
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			tong=tong+a[i];
			dem++;
		}tbc=double(tong/dem);
	}printf("trung binh cong cac so le trong mang la:%lf ",tbc);
	return 0;
}


