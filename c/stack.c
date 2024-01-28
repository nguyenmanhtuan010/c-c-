#include<stdio.h>

int strlength(char s[]){
	int i = 0;
    while(*s != '\0'){
    	i++;
    	s++;
	}
	return i;	
}

int isvalid(char first,char last){
	return (first == '[' && last == ']') || (first == '(' && last == ')') || (first == '{' && last == '}');
}

int ktrc(char str[]){
	int top = -1;
	char stack[strlength(str)];
	for(int i = 0 ; i  < strlength(str) ; i ++){
		char ch = *(str+i);
		if(ch=='[' || ch == '(' || ch == '{'){
			stack[++top] = ch;
		}
		else if(ch == ']' || ch == ')' || ch == '}'){
            if(!isvalid(stack[top],ch)) return 0;			
			top--;
		}
		
	}
	return top == -1;
}

int main(){
	char str[] = "[()";
    printf("%d",strlength(str));
    if(ktrc(str)) printf("1");
    else printf("0");
	return 0;
}