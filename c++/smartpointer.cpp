#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Test {
	private:
	    int data;
	public:
	    Test(int data);
	    ~Test();
	    void print();
};

Test :: Test(int data) {
	this -> data = data;
    cout << "Test constructor (" << data << ")" << endl;
}

Test :: ~Test(){
    cout << "Test destructor (" << data << ")" << endl;
}

void Test :: print(){
	cout << "Test " << data << endl; 
}

unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>& vec, int num) {
    for (int i = 0; i < num; ++i) {
        int data;
        cout << "Enter data point [" << i + 1 << "] : ";
        cin >> data;
        vec.push_back(make_shared<Test>(data));
    }
}

void display(vector<shared_ptr<Test>>& vec) {
    for (auto& ptr : vec) {
        ptr->print();
    }
}

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter:  ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}
