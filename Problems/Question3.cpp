// Implement the following function:

// int CountPoints(int* circlel, int circle2);

// The function accepts two arrays 'circle1' and 'circle2' of size 3. Each array is defined as (a, b, r), where (a, b) is the center point of the circle and r is its radius, these circles lie on the positive xy-plane. Implement the function to find and return the number of integral points that lie on or inside the common region of two circles. Circle: (a-x₁)2 + (b - y₁)² = r²

// Assumption: circle1[0] = a, circle1[1] = b and circle1[2] = r, similarly for circle2.

// Note:

// Return 0 if no common point is found.

// Arrays are not null.

// 94245-40098

// Example:

// Input:

// abr

// circlel: 453

// circle2: 672

// Output: 6

#include <iostream>
#include <cmath>
using namespace std;

int CountPoints(int* circle1, int* circle2) {
    int a1 = circle1[0], b1 = circle1[1], r1 = circle1[2];
    int a2 = circle2[0], b2 = circle2[1], r2 = circle2[2];

    int count = 0;

    // Find the region of intersection between the two circles
    for (int x = min(a1 - r1, a2 - r2); x <= max(a1 + r1, a2 + r2); x++) {
        for (int y = min(b1 - r1, b2 - r2); y <= max(b1 + r1, b2 + r2); y++) {
            // Check if the point (x, y) lies inside both circles
            if ((x - a1) * (x - a1) + (y - b1) * (y - b1) <= r1 * r1 &&
                (x - a2) * (x - a2) + (y - b2) * (y - b2) <= r2 * r2) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int circle1[] = {4, 5, 3}; // Example values, replace these with actual input
    int circle2[] = {6, 7, 2}; // Example values, replace these with actual input

    int result = CountPoints(circle1, circle2);
    cout << result << endl;

    return 0;
}

