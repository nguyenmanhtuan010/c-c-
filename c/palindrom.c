#include<stdio.h>

int strlength(char s[]){
	int i = 0;
	while(*s != '\0'){
		i++;
		s++;
	}
	return i;
}

void strconcat(char s1[], char s2[]){
	while(*s1 != '\0'){
		s1++;
	}
	while(*s2 != '\0'){
		*s1 = *s2;
		s1++; s2++;
	}
	*s1 = '\0';
}

int isValid(char temp){
	return (temp >= 'a' && temp <= 'z') || (temp >= '0' && temp <= '9');
}

void strlowercase(char *s){
	while(*s != '\0'){
		if(*s >= 'A' && *s <= 'Z'){
			*s += 32;
	    }
		s++;
	}
}

int isPalindrom(char str[], char templeft[], char tempright[]){
	int left = 0;
	int right = strlength(str)- 1;
	while(left < right){
		// kiem tra tu trai sang phai neu khong phai ky tu tu a - z or 0 - 9 thi bo qua tang vi tri left += 1;
	    while(left < right && !isValid(str[left])) left++;
	    // kiem tra tu phai sang trai neu khong phai ky tu tu a - z or 0 - 9 thi bo qua giam vi tri right -= 1;
		while(left < right && !isValid(str[right])) right--;
	    // kiem tra ky tu tai left va right tuong ung co giong nhau khong;
		if(str[left] != str[right]) return 0; 
		left++;
		right--;
	}
	return 1;
}

int main(){
	char str[] = "A man, a plan, a canal: Panama";
	char str1[strlength(str)];
	char str2[strlength(str)];
	strlowercase(str);
	if(isPalindrom(str,str1,str2)) printf("is palindrome\n");
	else printf("not palindrome\n");
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);
	strconcat(str1,str2);
	printf("%s",str1);
	return 0;
}
