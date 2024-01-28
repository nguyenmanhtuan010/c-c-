#include <iostream>
using namespace std;

class Mystr {
private:
    string s;
public:
    Mystr();
    Mystr(string str);
    bool operator==(Mystr a);
    bool operator!=(Mystr a);
    bool operator<(Mystr a);
    bool operator>(Mystr a);
    Mystr operator-();
    Mystr operator+(string a);
    Mystr operator++();
    Mystr operator+=(string a);
    Mystr operator*(int n);
    friend ostream& operator<<(ostream& out,Mystr a);
};


Mystr::Mystr() {}
Mystr::Mystr(string str) : s(str) {}

bool Mystr::operator==(Mystr a){
    return s == a.s;
}

bool Mystr::operator!=(Mystr a){
    return s != a.s;
}

bool Mystr::operator<(Mystr a){
    return s < a.s;
}

bool Mystr::operator>(Mystr a){
    return s > a.s;
}

Mystr Mystr::operator-() {
    Mystr result(s);
    for (char& i : result.s) {
        if ('A' <= i && i <= 'Z') {
            i += 32;
        }
    }
    return result;
}

Mystr Mystr::operator++() {
    Mystr result(s);
    for (char& i : result.s) {
        if ('a' <= i && i <= 'z') {
            i -= 32;
        }
    }
    return result;
}

Mystr Mystr::operator+(string a){
    Mystr result;
    result.s = s + a;
    return result;
}

Mystr Mystr::operator+=(string a){
    return s += a;
}

Mystr Mystr::operator*(int n){
    Mystr result;
    for (int i = 0; i < n; ++i) {
        result.s += s;
    }
    return result;
}

ostream& operator<<(ostream& out, Mystr a) {
    out << a.s;
    return out;
}

int main() {
    Mystr a {"frank"};
    Mystr b {"frank"};
    Mystr c {"george"};
    cout << (a==b) << endl; // true
    cout << (a!=b) << endl; // false
	cout << (a==c) << endl; // false
	cout << (a!=c) << endl; // true
	cout << (a<c) << endl; // true
	cout << (a>c) << endl; // false
	Mystr s1 {"FRANK"};
	s1 = -s1;
	cout << s1 << endl; // frank
	s1 = s1 + "*****";
	cout << s1 << endl;
	s1 += "-----"; // frank*****-----
    cout << s1 << endl;
	Mystr s2{"12345"};
	s2 = s2 * 3;
	cout << s2 << endl;
	Mystr result;
	result = ++s1;
	cout << result << endl; // FRANK
    return 0;
}
