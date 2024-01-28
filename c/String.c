#include <stdio.h> 

int strlength(char s[])
{
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}

void strlowercase(char s[]){
	while(*s != '\0'){
		if(*s >='A' && *s <= 'Z'){
			*s += 32;
		}
		s++;
	}
}

char* strstr(char s1[], char s2[]){
	if(*s2=='\0') return s1;
	while(*s1 != '\0'){
		char *s1Temp = s1;
		char *s2Temp = s2;
		while(*s2Temp != '\0' && *s1Temp == *s2Temp ){
			s1Temp++; s2Temp++;
		}
		if(*s2Temp == '\0') return s1; 
	    s1++;
	}
	return NULL;
}

void struppercase(char s[]){
	while(*s != '\0'){
		if(*s >= 'a' && *s <='z'){
			*s -= 32;
		}
		s++;
	}
}

void strcopy(char s1[], char s2[])
{
   	int i = 0;
   	while( *s1 != '\0'){
   		   *s2 = *s1;
   		   *s1++; *s2++;
	}
}

void strconcat(char s1[], char s2[]){
	while(*s1 != '\0'){
		s1++;
	}
	while(*s2 !='\0'){
		*s1 = *s2;
		s1++;
		s2++;
	}
    *s1 = '\0';
}

int strcompare(char s1[], char s2[]){
	if(strlength(s1) != strlength(s2)) return 0;
	while(*s1 != 0 && *s2 != 0){
		if(*s1 != *s2) return 0;
		s1++; s2++;
	}
	return 1;
}

int main() 
{ 
	int i = 0;
    char s1[100];
    char s2[100];
    printf("nhap ky tu s1: ");
    gets(s1);
    printf("nhap ky tu s2: ");
    gets(s2);
    char *p;
    p= strstr(s1,s2);
    printf("%s",p);
}
