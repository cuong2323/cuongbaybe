#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//NGUYEN VAN TU - 22810310083 - D17CNMP2 //
struct maytinh{
	int mamay;
	char tenmay[40];
	int nsx;
	char hangsanxuat[40];
	float gianhap;
};
void nhap(maytinh* danhsachmaytinh, int n){
	for(int i=0;i<n;i++){
		printf("Ma may:");
		scanf("%d",&danhsachmaytinh[i].mamay);
		printf("Ten may:");
		fflush(stdin);
		gets(danhsachmaytinh[i].tenmay);
		printf("Nam san xuat:");
		scanf("%d",&danhsachmaytinh[i].nsx);
		printf("Hang san xuat:");
		fflush(stdin);
		gets(danhsachmaytinh[i].hangsanxuat);
		printf("Gia nhap:");
		scanf("%f",&danhsachmaytinh[i].gianhap);
	}
}
void xuat(maytinh* danhsachmaytinh, int n){
	for(int i=0;i<n;i++){
		printf("Ma may:%d\n",danhsachmaytinh[i].mamay);
		printf("Ten may:%s\n",danhsachmaytinh[i].tenmay);
		printf("Nam san xuat:%d\n",danhsachmaytinh[i].nsx);
		printf("Hang san xuat:%s\n",danhsachmaytinh[i].hangsanxuat);
		printf("Gia nhap:%f\n",danhsachmaytinh[i].gianhap);
	}
}
void in(maytinh* danhsachmaytinh,int n){
	char s1[]="SAMSUNG";
	printf("May tinh cua nha san xuat SAMSUNG la:\n");
	for(int i=0;i<n;i++){
		if(strcmp(danhsachmaytinh[i].hangsanxuat,s1)==0){
			printf("Ma may:%d\n",danhsachmaytinh[i].mamay);
			printf("Ten may:%s\n",danhsachmaytinh[i].tenmay);
			printf("Nam san xuat:%d\n",danhsachmaytinh[i].nsx);
			printf("Hang san xuat:%s\n",danhsachmaytinh[i].hangsanxuat);
			printf("Gia nhap:%f\n",danhsachmaytinh[i].gianhap);
		}
	}
}
void nam(maytinh* danhsachmaytinh,int n){
	int s2=2019;
	printf("May tinh san xuat nam 2019 la:\n");
	for(int i=0;i<n;i++){
		if(danhsachmaytinh[i].nsx==s2){
			printf("Ma may:%d\n",danhsachmaytinh[i].mamay);
			printf("Ten may:%s\n",danhsachmaytinh[i].tenmay);
			printf("Nam san xuat:%d\n",danhsachmaytinh[i].nsx);
			printf("Hang san xuat:%s\n",danhsachmaytinh[i].hangsanxuat);
			printf("Gia nhap:%f\n",danhsachmaytinh[i].gianhap);
		}	
	}
}
int main(){
	int n;
	printf("Moi nhap n may tinh:");
	scanf("%d",&n);
	struct maytinh* danhsachmaytinh=(struct maytinh*)malloc(
	n*sizeof(struct maytinh));
	nhap(danhsachmaytinh,n);
	xuat(danhsachmaytinh,n);
	in(danhsachmaytinh,n);
	nam(danhsachmaytinh,n);
}