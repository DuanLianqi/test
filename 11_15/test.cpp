#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

static default_random_engine generator{ random_device{}() };
int main() {
    vector<int> unsorted;
    for (int i = 0; i < 10; i++) {
        unsorted.push_back(i);
    }
    shuffle(unsorted.begin(), unsorted.end(), generator);
    for (auto i : unsorted) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < unsorted.size() - 1; i++) {
        for (int j = i + 1; j < unsorted.size(); j++) {
            if (unsorted[i] > unsorted[j]) {
                swap(unsorted[i], unsorted[j]);
            }
        }
    }

    for (auto i : unsorted) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}