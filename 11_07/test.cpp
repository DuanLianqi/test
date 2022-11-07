#include <iostream>
#include <set>
#include <random>
#include <ctime>
using namespace std;

int main() {
    //For built-in types
    uniform_real_distribution<double> u1(0, 100);
    default_random_engine e1;
    double target = 9.9;
    set<double> dbset;

    double duration = 0;
    clock_t begin, finish;

    for (int i = 0; i < 1000000; i++) {
        double temp = u1(e1);
        dbset.insert(temp);
    }
    //the size of dbset is : 1000000
    cout << "the size of dbset is : " << dbset.size() << endl;

    begin = clock();
    if (dbset.find(target) != dbset.end()) {
        cout << "find target in dbset." << endl;
    } else {
        cout << "can't find target in dbset." << endl;
    }
    finish = clock();
    //the duration of find() is : 1ms
    cout << "the duration of find() is : " << double(finish - begin) << "ms" << endl;

    begin = clock();
    if (dbset.count(target)) {
        cout << "find target in dbset." << endl;
    } else {
        cout << "can't find target in dbset." << endl;
    }
    finish = clock();
    //the duration of find() is : 1ms
    cout << "the duration of count() is : " << double(finish - begin) << "ms" << endl;
    
    return 0;
}