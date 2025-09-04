#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    int size = arr.size();
    
    if (size < 2) {
        return -1;  // Cannot find second largest if there are fewer than 2 elements
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;  // Update second largest before updating largest
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }

    // If secondLargest is still INT_MIN, it means there was no valid second largest
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << secondLargest(arr) << "\n";
    return 0;
}
