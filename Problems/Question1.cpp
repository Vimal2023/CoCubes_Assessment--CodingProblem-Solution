// Problem Statement ::

// Implement the following function:

// int Calculate(int n_{2} int m);

// The function accepts two integers 'n' and ^{\prime}m^{\prime} You have to find and return the result according to following conditions:

// If n>m return (n^{*}m)-(n-m) i.e. difference of n^{*} m and n-m.

// If n<=m, return (m\%n)-(m+n) i.e. difference of m%n and m+n.

// Assumption:

// n is not equal to 0.

// Each computation lies within integral range.

// Example:

// Input:

// n: 28

// m: 2

// Output:

// 30

// Explanation:

// Since n>m so (n^{*}m)-(n-m)=(28^{*}2)-(28-2)=30, thus output is 30.



#include <iostream>
using namespace std;

int Calculate(int n, int m) {
    if (n > m) {
        return (n * m) - (n - m);
    } else {
        return (m % n) - (m + n);
    }
}

int main() {
    int n = 28;
    int m = 2;
    cout << Calculate(n, m) << endl;
    return 0;
}

