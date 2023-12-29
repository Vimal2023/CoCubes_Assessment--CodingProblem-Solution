// Problem Statement

// You are required to implement the following function:

// int MatchString(char str1[], int lent, char str2[], int len2, int k1, int k2);

// The function accepts two strings 'str1' and 'str2' of length 'len1' and 'len2' respectively and two integers 'k1' and 'k2 as its arguments. Implement the function to co each index of 'str1' and 'str2' leaving out the first 'k1' characters from 'str1' and 'k2' characters from 'str2' respectively till the end of each string and return an intege the following rules in the given priority:

// 1. If all the remaining characters match, then return the length of the match

// 2. Return 0, if remaining characters to be matched for either of the string is 0 or both the strings are null (or None in case of python)

// 3. Return -1, in case of mismatch in characters or count of remaining characters or one of the string, is null (or None in case of python)

// Assumption:

// 'str1' and 'str2' contain lower case alphabets only

// Index starts from 0

// 0 <=k1 <= len1

// 0 <= k2 <= len2

// Example:

// Input:

// k1: 4

// k2: 7

// str1: succeed

// str2: crossbreed

// Output:

// 3

// Explanation:

// Leaving first the 4 characters in 'succeed', string left is 'eed', similarly after leaving first the 7 characters in 'crossbreed', string left is 'eed' Since all the remaining characters match and the length of the match is 3, hence the output is 3.


#include <iostream>
#include <cstring>
using namespace std;

int MatchString(char str1[], int len1, char str2[], int len2, int k1, int k2) {
    if (k1 >= len1 || k2 >= len2) {
        return -1;
    }

    int i = k1, j = k2, count = 0;

    while (i < len1 && j < len2) {
        if (str1[i] != str2[j]) {
            if (count > 0) {
                return count;
            } else {
                return -1;
            }
        }

        count++;
        i++;
        j++;
    }

    return count;
}

int main() {
    char str1[] = "succeed";
    char str2[] = "crossbreed";
    int k1 = 4;
    int k2 = 5;

    int result = MatchString(str1, strlen(str1), str2, strlen(str2), k1, k2);
    cout << result << endl;

    return 0;
}
