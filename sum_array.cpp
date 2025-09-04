#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    int sum = 0;  // Initialize sum to 0
    for (int num : arr) {  // Iterate over each element in the array
        sum += num;  // Add the element to sum
    }
    return sum;  // Return the total sum
}

int main() {
    int n;
    cin >> n;  // Read the size of the array
    vector<int> arr(n);  // Create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element of the array
    }

    cout << sumArray(arr) << "\n";  // Output the sum of the array
    return 0;
}
