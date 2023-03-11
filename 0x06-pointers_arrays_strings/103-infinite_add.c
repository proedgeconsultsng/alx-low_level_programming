#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1), len2 = strlen(n2);
    int carry = 0, i = len1 - 1, j = len2 - 1, k = 0;
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = i >= 0 ? n1[i--] - '0' : 0;
        int digit2 = j >= 0 ? n2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        if (k >= size_r) return 0;
        r[k++] = sum % 10 + '0';
    }
    if (k == 0) r[k++] = '0';
    r[k] = '\0';
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        char tmp = r[i];
        r[i] = r[j];
        r[j] = tmp;
    }
    return r;
}

