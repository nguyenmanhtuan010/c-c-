#include <stdio.h>
#include<math.h>

int find_max(int a[], int n){
	int max = a[0];
	for(int i = 1 ; i < n ; i++){
		if(max < a[i]) max = a[i];
	}
	return max;
}

int ktr_snt(int n){
	if(n<2) return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if( n % i == 0) return 0;
	}
	return 1;
}

int find_min(int a[], int n){
	int min = a[0] ;
	for(int i = 1 ; i < n ; i++){
		if(min > a[i]) min = a[i];
	}
	for(int i = 0; i <  n; i++){
		if(a[i]==min) return i;
	}
}

void delete_element(int a[], int *n){
	int m;
	printf("\nnhap vi tri can xoa: ");
	scanf("%d",&m);
	for(int i = m ; i < *n ; i++){
        a[i] = a[i+1];     		
	}
	*n = *n - 1;
}

void swap(int a[], int n){
	int i , j;
	for( i = 0 ; i < n - 1; i ++){
		for(j = i+1; j < n ; j ++){
			int temp = a[i] ^ a[j];
			a[j] = temp ^ a[j];
			a[i] = temp ^ a[i];
		}
	}
}
int main(void)
{
    int a[100];
    int n ;
	printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    printf("nhap cac phan tu mang: ");
    for(int i = 0 ; i < n ; i ++){
    	scanf("%d", (a+i));
	}
	printf("cac phan tu da nhap: ");
	for(int i = 0 ; i < n ; i++){
		printf("%d ", *(a+i));
	}
	printf("\nphan tu lon nhat trong mang: %d", find_max(a,n));
	printf("\nphan tu nho nhat trong mang: %d", find_min(a,n));
	printf("\ncac phan tu la so nguyen to trong mang: ");
	for(int i = 0 ; i  < n ; i++){
		if(ktr_snt(a[i])) printf("%d ",*(a+i));
	}
	delete_element(a,&n);
	printf("cac phan tu sau khi xoa: ");
	for(int i = 0 ; i < n ; i++){
		printf("%d ", *(a+i));
	}

}
