#include <stdio.h>
#include <string.h>
int main() {
    char s[100] = "x125x967897"; // calloc/malloc
    char *st = {};
    printf("%d\n",  strchr(st, 'p') - st);
    
    return 0;
}