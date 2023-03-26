#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {4, 2, 3, 11, 7, 15};
    int b = 9;

    for (int i = a.size() - 1; i >= 0; --i) {
        int max = 0;
        for (int j = 0; j <= i; ++j) {
            if (a[j] > a[max]) {
                max = j;
            }

            int tmp = a[i];
            a[i] = a[max];
            a[max] = tmp;
        }
    }

    int l = 0, r = a.size() - 1;
    while (l < r) {
        int sum = a[l] + a[r];
        if (sum == b) {
            cout << a[l] << " + " << a[r];
            return 0;
        } else if (sum < b) {
            ++l;
        } else {
            --r;
        }
    }
    cout << "There are no numbers whose sum is " << b;

    return 0;
}
