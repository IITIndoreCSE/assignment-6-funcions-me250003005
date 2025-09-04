#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;  // numbers <= 1 are not prime
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;  // if divisible by any number other than 1 and itself
    }
    return true;
}

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;  // check if the number is the same when reversed
}

// Function to check if a number is both prime and palindrome
bool primePalindrome(int n) {
    return isPrime(n) && isPalindrome(n);  // check both conditions
}

int main() {
    int n;
    cin >> n;  // input the number
    
    // Output 1 if the number is prime and palindrome, otherwise 0
    cout << (primePalindrome(n) ? 1 : 0) << "\n";

    return 0;
}
