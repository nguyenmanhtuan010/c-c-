#include<stdio.h>

int strleng(char s[]){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i; 
}


void swap(char a[]){
	for(int i = 0 ; i < strleng(a) ; i++){
		for(int j = i + 1; j < strleng(a); j++){
			if(a[i]<a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int isAnagram(char a[], char b[]){
	int lena = strleng(a);
	int lenb = strleng(b);
	if( lena != lenb) return 0;
	for(int i = 0 ; i < strleng(a);i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}

int main(){
	char a[] = "liver";
	char b[] = "tuna";
    swap(a);
	swap(b);
	printf("chuoi a: %s \nchuoi b: %s", a, b);
	if(isAnagram(a,b)) printf("is Anagram");
	else printf(" not Anagram");	
}