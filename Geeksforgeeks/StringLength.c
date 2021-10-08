#include <stdio.h>
int main() {
    char s[] = "Programming is";
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    return i;
}