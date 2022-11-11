#include <iostream>
#include <string>
using namespace std;

int main () {
    double num = 10.0;
    //string numstr = to_string(num).substr(0, 4);
    string numstr = to_string(num);

    string path = "C:\\Users" + numstr;
    cout << path << endl;
    return 0;
}