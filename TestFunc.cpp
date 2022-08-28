#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "StringFunc.hpp"
#include "TestFunc.hpp"

void my_strchr_test (const char* cs, char c) {
    if (my_strchr(cs, c) == strchr(cs, c))
        printf("Test my_strchr - True\n");
    else
        printf("Test my_strchr - False " 
               "Problem with %s and %c\n", cs, c);
}

void my_strrchr_test (const char* cs, char c) {
    if (my_strrchr(cs, c) == strrchr(cs, c))
        printf("Test my_strrchr - True\n");
    else
        printf("Test my_strrchr - False "
               "Problem with %s and %c\n", cs, c);
}

void my_strlen_test(const char *cs) {
    if (my_strlen(cs) == strlen(cs))
        printf("Test my_strlen - True\n"); 
    else
        printf("Test my_strlen - False "
               "Problem with %s\n", cs);
}   


void my_strcpy_test(const char* ct) {
    char str1[10] = {0};
    char str2[10] = {0};

    if (strcmp(my_strcpy(str1, "qwertqwer"), strcpy(str2, "qwertqwer")) == 0)
        printf("Test my_strncpy - True\n"); 
    else
        printf("Test my_strncpy - False "
               "Problem with %s\n", ct);
}

void my_strncpy_test(const char* ct, int n) {
    char str1[10] = {0};
    char str2[10] = {0};

    if (strcmp(my_strncpy(str1, "qwertqwer", 3), strncpy(str2, "qwe", 3)) == 0)
        printf("Test my_strncpy - True\n"); 
    else
        printf("Test my_strncpy - False "
               "Problem with %s %d\n", ct, n);
}

void my_strcat_test(const char* ct) {
    char s1[20] = "qwerty";
    char s2[20] = "qwerty";

    if (strcmp(my_strcat(s1, ct), strcat(s2, ct)) == 0)
        printf("Test my_strcat - True\n");
    else
        printf("Test my_strcat - False "
               "Problem with %s\n", ct);  
}

void my_strncat_test(const char* ct, int n) {
    char s1[20] = "qwerty";
    char s2[20] = "qwerty";

    if (strcmp(my_strncat(s1, ct, n), strncat(s2, ct, n)) == 0)
        printf("Test my_strncat - True\n"); 
    else
        printf("Test my_strncat - False "
               "Problem with %s %d\n", ct, n); 
}

void my_fgets_test(int size, FILE *stream) {
    char str1[100] = {0};
    char str2[100] = {0};
    
    my_fgets(str1, size, stream);
    while (getc(stream) != '\n');
    fgets(str2, size, stream);
    if (strcmp(str1, str2) == 0)
        printf("Test my_fgets- True\n"); 
    else
        printf("Test my_fgets - False\n");
}

void my_strdup_test(const char *s) {
    if (strcmp(strdup(s), my_strdup(s)) == 0)
        printf("Test my_strdup - True\n"); 
    else
        printf("Test my_strdup - False "
               "Problem with %s\n", s); 

}

void my_strcmp_test(const char* cs, const char* st) {
    if (my_strcmp(cs, st) == strcmp(cs, st))
        printf("Test my_strcmp - True\n");        
    else    
        printf("Test my_strcmp - False "
               "Problem with %s %s\n", cs, st);  
}

void my_strncmp_test(const char* cs, const char* st, int n) {
    if (my_strncmp(cs, st, n) == strncmp(cs, st, n))
        printf("Test my_strncmp - True\n");        
    else    
        printf("Test my_strncmp - False "
               "Problem with %s %s %d\n", cs, st, n);  
}

void my_strspn_test(const char* cs, const char* ct) {
    if (my_strspn(cs, ct) == strspn(cs, ct))
        printf("Test my_strspn - True\n"); 
    else
        printf("Test my_strspn  - False " 
               "Problem with %s %s\n", cs, ct); 
}

void my_strcspn_test(const char* cs, const char* ct) {
    if (my_strcspn(cs, ct) == strcspn(cs, ct))
        printf("Test my_strcspn - True\n"); 
    else
        printf("Test my_strcspn - False "
               "Problem with %s %s\n", cs, ct);    
}

void my_strpbrk_test(const char* cs, const char* ct) {
        if (my_strpbrk(cs, ct) == strpbrk(cs, ct))
        printf("Test my_strpbrk - True\n"); 
    else
        printf("Test my_strpbrk - False "
               "Problem with %s %s\n", cs, ct);
}

void my_strstr_test(const char* cs, const char* ct) {
    if (my_strstr(cs, ct) == strstr(cs, ct))
        printf("Test my_strpbrk - True\n");  
    else
        printf("Test my_strpbrk - False "
               "Problem with %s %s\n", cs, ct);
}