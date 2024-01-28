#include<iostream>
using namespace std;

class time{
	private:
		int hour, minute, second;	
	public:
		time(int hour, int minute, int second){
			this -> hour = hour;
			this -> minute = minute;
			this -> second = second;
		}
		void setTime(int hour, int minute, int second){
			this -> hour = hour;
			this -> minute = minute;
			this -> second = second;
		}
		void setHour(int hour){
			this -> hour = hour;
		}
		void setMinute(int minute){
			this -> minute = minute;
		}
		void setSecond(int second){
			this -> second = second;			
		}
		void nextSecond(){
			++second;
			if(second == 60){
				minute++;
		        second = 0;
			}
			if(minute == 60){
				hour++;
				minute = 0;
			}
		}
		void previousSecond(){
			if(hour == 0 && minute == 0 && second == 0){
				hour = 23;
				minute = 59;
				second = 59;
			}
			if(second == 0){
				minute--;
		        second = 59;
			}
			--second;
			if(minute == 00){
				hour--;
				minute = 59;
			}
		}
		friend ostream& operator << (ostream& out, time t){
			out << t.hour;
			out << " : ";
			out << t.minute;
			out << " : ";
			out << t.second<<endl;
			return out;
		}
};

int main(){
	time t(12, 1, 1);
	cout << t;
	t.setTime(23, 59, 59);
	cout << t;
	t.nextSecond();
	cout << t;
	t.nextSecond();
	cout << t;
	t.setTime(0, 0, 0);
	t.previousSecond();
	cout << t;
	t.previousSecond();
	cout << t;
	return 0;
}