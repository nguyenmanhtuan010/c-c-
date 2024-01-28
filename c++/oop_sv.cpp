#include<iostream>
using namespace std;

class Sinh_Vien{
	private:
		string ma,ten,lop,email;
	public:
		static int i;
		Sinh_Vien(){
			string ma = " ", ten = " ", lop = " ", email =" ";
		}
		friend istream& operator >> (istream& in, Sinh_Vien &s){
			++i;
			fflush(stdin);
			cout << "ma "<< i <<" : ";
			getline(in,s.ma);
			cout << "ten "<< i <<" : ";
			getline(in,s.ten);
			cout << "lop "<< i <<" : ";
			getline(in,s.lop);
			cout << "email "<< i <<" : ";
			getline(in,s.email);			
			return in;
		}
		friend ostream& operator << (ostream& out, Sinh_Vien s){
		 	out << s.ma;
			out << s.ten;                                              	
			out << s.lop;
			out << s.email;
			return out;
    	}
};

int Sinh_Vien :: i = 0;

int main(){
	int n;
	cout << "nhap so luong sinh vien: ";
	cin >> n;
	Sinh_Vien sv[n];
	for(int i = 0 ; i < n ; i++){
		cin >> sv[i];
	}

	for(int i = 0 ; i < n ; i++){
		cout << sv[i] << endl;
	}
   return 0;	
}