#include<iostream>
using namespace std;

bool isalnum(char c);
bool isalpha(char c);
bool isdigital(char c);
bool isxdigital(char c);
bool isblank(char c); 
bool issapce(char c);
bool islower(char c);
bool isupper(char c);
void tolower(char &c);
void toupper(char &c);
int length(string s);
void swap(string &s1, string &s2);
void pushback(string &s1, string &s2);

int main(){
	string s1 = "liver";
	string s2 = "city";
	swap(s1,s2);
	pushback(s1,s2);
	cout << "s1 : " << s1 << endl << "s2 : "<< s2;
	return 0;
}

bool isalnum(char c){
	if(':' <= c && c <= '@' ||'{' <= c && c <= '~' ||'[' <= c && c <= '`' )  return false;
	else if( 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z' || '0' <= c && c <= '9') return true;
	
}

bool isalpha(char c){
	if( 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z') return true;
	return false;
}

bool isdigital(char c){
	if( '0' <= c && c <= '9') return true;
	return false;
}

bool isxdigital(char c){
	if( '0' <= c && c <= '9' || 'A' <= c && c <= 'F' || 'a' <= c && c <= 'f') return true;
	return false;
}

bool isblank(char c){
	if(c == '\t' || c == ' ') return true;
	return false;
}

bool issapce(char c){
	if(c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') return true;
	return false;
}

bool islower(char c){
	if('a' <= c &&  c <= 'z') return true;
	return false;
}

bool isupper(char c){
	if('A' <= c && c <= 'Z') return true;
	return false;
}

void tolower(char &c){
	if('A' <=  c &&  c <= 'Z')  c =  c + 32;
}

void toupper(char &c){
	if('a' <= c && c <= 'c') c = c - 32;
}
 
int length(string s){
	int i = 0;
	char *p = &s[0];
	while(*p != '\0'){
		i++;
		p++;
	}
	return i;
}

void swap(string &s1,string &s2){
    string s = s1;
	s1 = s2;
	s2 = s;	
}

void pushback(string &s1,string &s2){
	s1 = s1 + s2;
}