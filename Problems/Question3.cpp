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
