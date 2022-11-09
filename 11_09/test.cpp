#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <random>
using namespace std;

//生成[low ~ high]之间的随机整数
int getIntRandom(int low, int high) {
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	static default_random_engine e(seed);
	static uniform_int_distribution<int> u(low, high);
	return u(e);
}

int main() {
    int loop = 20;
	while (loop--) {
		vector<int> temp;
		for (int i = 1; i < 10; i++) {
			temp.push_back(i);
		}
        unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		shuffle(temp.begin(), temp.end(), default_random_engine(seed));
		for (auto i : temp) {
			cout << i << " ";
		}
		cout << ": " << getIntRandom(1, 20) << endl;
	} 
    cout << endl;
	return 0;
}