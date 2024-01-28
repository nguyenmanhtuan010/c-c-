#include<stdio.h>
#include<stdlib.h>

int strleng(char s[]){
	int i = 0 ;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}

int b_to_d(char s[]){
	int decimal = 0;
	for(int i = 0; i < strleng(s) ; i++){
		if(s[i] == '1'){
			decimal += 1 << (strleng(s)-1-i);
		}
	}
	return decimal;
}

char* reverse(char a[]){
	char* b = (char*)malloc(strleng(a)*sizeof(char));
	b[strleng(a)]='\0';
	for(int i = 0 ; i < strleng(a); i++ ){
		b[strleng(a) - 1 -i] = a[i];
	}
	return b;
} 


int main(){
	
	char a[] = "00000010100101000001111010011100";
	char * b = reverse(a);
	printf("%s", b);
	printf("\n%d",b_to_d(b));
}