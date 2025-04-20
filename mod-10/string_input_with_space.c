 #include <stdio.h>
#include <string.h>
 int main(){
    char s[15];
    fgets(s, 12, stdin);
    printf("%s", s);
    return 0;
 };