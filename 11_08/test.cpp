#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int getRandom(int low, int high) {
	static default_random_engine e(time(0));
	static uniform_int_distribution<int> u(low, high);
	return u(e);
}

int getEdgeNum(int nodeNum) {
	int edgeNum;
	int low = nodeNum - 1;
	int high = nodeNum * (nodeNum - 1) / 2;

	bool flag = true;
	while (flag) {
		int temp = getRandom(low, high);
		if (static_cast<double>(temp / nodeNum) < 1.5 && static_cast<double>(temp / nodeNum) > 1.2) {
			edgeNum = temp;
			flag = false;
		}
	}
	return edgeNum;
}

int main() {
    int nodeNum = 50;
    int low = nodeNum - 1;
	int high = nodeNum * (nodeNum - 1) / 2;

    int loop = 10;
    while (loop--) {
        int temp = getRandom(low, high);
        cout << static_cast<double>(temp) / nodeNum << endl;
    }
    return 0;
}