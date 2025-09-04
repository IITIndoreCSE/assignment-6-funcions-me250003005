#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    // Step 1: Calculate products of elements before the current index
    long long leftProduct = 1;
    for (int i = 0; i < size; ++i) {
        output[i] = leftProduct;
        leftProduct *= arr[i];
    }

    // Step 2: Calculate products of elements after the current index
    long long rightProduct = 1;
    for (int i = size - 1; i >= 0; --i) {
        output[i] *= rightProduct;
        rightProduct *= arr[i];
    }

    return output;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> res = productExceptIndex(arr);
    for (auto v : res) {
        cout << v << " ";
    }
    cout << "\n";

    return 0;
}
