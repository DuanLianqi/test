#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    int temp = 10;       //define a integer called temp
    int* ptrint = &temp; //this is a point to temp
    cout << *ptrint << endl;

    double db[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};  //define a double array 
    double* ptrdouble = db;            //this is a point to db[10]
    for (int i = 0; i < 10; i++) {
        cout << ptrdouble[i] << " ";
    }
    cout << '\n';

    const int sz = 10;
    double* ptrdouble2 = new double[sz];    //another way of double array;
    for (int i = 0; i < sz; i++) {
        ptrdouble2[i] = i + 0.9;
    }
    for (int i = 0; i < sz; i++) {
        cout << ptrdouble2[i] << " ";
    }
    cout << '\n';

    vector<int> vec(10, 11);
    int* vecptr = &vec[0];

    vector<int>* ptrr = &vec;


    //cout << ptrr[1][1] << endl;

    vector<int>* vecptr2 = new vector<int>[sz];

    vecptr2[0].push_back(1);
    vecptr2[1].push_back(3);

    cout << "vecptr2[0] address is: " << &vecptr2[0] << endl;
    cout << "vecptr2[1] address is: " << &vecptr2[1] << endl;

    cout << &vecptr2[1][0] << endl;

    vector<int> vectest;
    cout << sizeof(vectest) << endl;
    cout << "test" << endl;


    return 0;
}