#include<stdio.h>
int main() {
    char str[100], *pt;
    int i = 0;
    printf("Enter any string: ");
    gets(str);
    pt = str;
    while(*pt != '\0'){
        i++;
        pt++;
    }
    printf("The Length of String: %d", i);

    return 0;
}
