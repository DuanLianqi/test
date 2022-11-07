#include <iostream>
#include <set>
#include <random>
#include <ctime>
using namespace std;

class test {
public:
    int x;
    int y;
    test(int xx, int yy): x(xx), y(yy) {}
    //find和count均支持，const关键字必不可少
    bool operator<(const test& rhs) const{
        if (this->x < rhs.x || (this->x == rhs.x && this->y < rhs.y))
            return true;
        return false;
    }
};


//仅支持find，不支持count
// bool cmp(const test& lhs, const test& rhs) {
//     if (lhs.x < rhs.x || (lhs.x == rhs.x && lhs.y < rhs.y))
//         return true;
//     return false;
// }

// class myCompare {
// public:
//     bool operator()(const test& lhs, const test& rhs) {
//         if (lhs.x < rhs.x || (lhs.x == rhs.x && lhs.y < rhs.y))
//             return true;
//         return false;
//     }
// };

int main() {
    //For custom types
    uniform_int_distribution<int> u(0, 999);
    default_random_engine e;

    set<test> tset;

    int xx = 10, yy = 10;
    for (int i = 0; i < 10000000; i++) {
        int x = u(e), y = u(e);
        // if (i == 9999) {
        //     xx = x;
        //     yy = y;
        // }
        tset.insert(test(x, y));
    }

    test target2(xx, yy);

    clock_t begin, finish;

    begin = clock();
    if (tset.find(target2) != tset.end()) {
        cout << "find target in tset." << endl;
    } else {
        cout << "can't find target in tset." << endl;
    }
    finish = clock();
    cout << "the duration of find() is : " << double(finish - begin) << "ms" << endl;

    begin = clock();
    if (tset.count(target2)) {
        cout << "find target in tset." << endl;
    } else {
        cout << "can't find target in tset." << endl;
    }
    finish = clock();
    cout << "the duration of count() is : " << double(finish - begin) << "ms" << endl;

}
   