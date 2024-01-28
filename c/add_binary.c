#include<stdio.h>
#include<stdlib.h>

int strlength(char str[]){
	int i = 0;
	while( str[i] != '\0'){
		i++;
	}
	return i;
}

char* add_binary(char a[], char b[]){
	int len_a = strlength(a);
	int len_b = strlength(b);
	int max_len;
	
	if(len_a > len_b) max_len = len_a;
	else if(len_a < len_b) max_len = len_b;
	else max_len = len_a;
	char* result = (char*)malloc((max_len+2) * sizeof(char));
	
	result[max_len+1] = '\0';
	int carry = 0;
	
	for(int i = 0 ; i < max_len ; i++){
		int digitalA , digitalB, sum;
		if(i<len_a) digitalA = a[len_a - i - 1] - '0';
		else digitalA = 0;
		if(i<len_b) digitalB = b[len_b - i - 1] - '0';
		else digitalB = 0;
		sum = digitalA + digitalB + carry;
		carry = sum / 2;
		result[max_len-i]= '0' + (sum % 2);
	} 
	if(carry == 1){
		result[0] = '1';
		return result;
	}
	else return result + 1;
}
int main(){
	char a[] ="111";
	char b[] ="111";
    char* c;
	c = add_binary(a,b);
	printf("%s",c);	 
	free(c);
	return 0;
}