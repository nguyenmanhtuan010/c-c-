#include<stdio.h>

int search_element(int num[], int n){
	int m;
	printf("\nnhap so can tim:");
	scanf("%d",&m);
	for(int i = 0; i < n ; i++){
		if(m == num[i]){
			return i;
		}
	}
	return -1;
}
int main(){
	int num[1000];
	int n ;
	printf("nhap so phan tu:");
	scanf("%d",&n);
    printf("nhap cac phan tu mang:");
	for(int i = 0; i < n ; i++){
		scanf("%d",(num+i));
	}
	printf("cac phan tu cua mang");
	for(int i = 0 ; i < n ; i++){
		printf("%d ",*(num+i));
	}
	int i = search_element(num,n);
	printf("%d",i);
	return 0;
}