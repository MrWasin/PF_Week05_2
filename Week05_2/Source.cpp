#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int count = 0;
    char str[50], * p;
    p = str;
    scanf("%s", str);

    while (*p != '\0') {
        count++;
        p++;
    }

    for (int j = count - 1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    return 0;
}