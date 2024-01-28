#include <iostream>
using namespace std;

int* apply_all(int arr1[], int size1, int arr2[], int size2) 
{
    int* new_arr = new int[size1 * size2];
    int cnt = 0;
    for (int i = 0; i < size2; ++i) {
        for (int j = 0; j < size1; ++j) {
            new_arr[cnt++] = arr1[j] * arr2[i];
        }
    }
    return new_arr;
}

void print(int arr[], int size) 
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int size1 = 5;
    int size2 = 3;
    int arr1[size1] = {1, 2, 3, 4, 5};
    int arr2[size2] = {10, 20, 30};
    cout << "arr 1: " ;
    print(arr1,size1);
    cout << "arr 2: " ;
    print(arr2,size2);
    int* result = apply_all(arr1, size1, arr2, size2);
    cout << "new_arr: " ;
    print(result, size1 * size2);
    delete[] result;
    return 0;
}
