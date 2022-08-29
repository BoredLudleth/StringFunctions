#include <stdio.h>
#include <string.h>

#include "StringFunc.hpp"
#include "TestFunc.hpp"

int main() {
//<-------------------> TEST STRCHAR <------------------->//
    printf("test for my_strchr\n");
    my_strchr_test("hhljqf;wje", ';');
    my_strchr_test("hhljqf;wje", 'a');
//<-------------------> TEST STRRCHAR <------------------>//
    printf("\ntest for my_strrchr\n");
    my_strrchr_test("hhljqf;wje", 'e');
    my_strrchr_test("hhljqf;wje", '1'); 
    my_strrchr_test("1hhljqf;wje", '1');   
//<-------------------> TEST STRLEN <------------------->//
    printf("\ntest for my_strlen\n");
    my_strlen_test("hhljqf;wje");
    my_strlen_test("");
//<-------------------> TEST STRCPY <------------------->//
    printf("\ntest for my_strcpy \n");
    my_strcpy_test("qwerty");
//<-------------------> TEST STRNCPY <------------------->//
    printf("\ntest for my_strncpy\n");
    my_strncpy_test("qwertqwer", 3);
//<-------------------> TEST STRCAT <------------------->//
    printf("\ntest for my_strcat\n");
    my_strcat_test("wert");
//<-------------------> TEST STRNCAT <------------------->//
    printf("\ntest for my_strncat\n");
    my_strncat_test ("wert", 1);
//<-------------------> TEST FGETS <------------------->//
    FILE *mytests = fopen("maintest.txt", "r"); 
    printf("\ntest for my_fgets\n");
    my_fgets_test(3, mytests);
    fclose(mytests);
//<-------------------> TEST STRDUP <------------------->//
    printf("\ntest for my_strdup\n");
    my_strdup_test("zseefv"); 
//<-------------------> TEST STRCMP <------------------->//
    printf("\ntest for my_strcmp\n");
    my_strcmp_test("qwerty", "qwety");
    my_strcmp_test("qwerty", "qwerty");
//<-------------------> TEST STRNCMP <------------------->//
    printf("\ntest for my_strncmp\n");
    my_strncmp_test("qwerty", "qwety", 2);
    my_strncmp_test("qwerty", "qwety", 5);
//<-------------------> TEST STRSPN <------------------->//
    printf("\ntest for my_strspn\n");
    my_strspn_test("hhljqf;wje", "bblhjb");
//<-------------------> TEST STRCSPN <------------------->//
    printf("\ntest for my_strcspn\n");
    my_strcspn_test("hhljqf;wje", "bblhjb");
//<-------------------> TEST STRPBRK <------------------->//
    printf("\ntest for my_strpbrk\n");
    my_strpbrk_test("hhljqf;wje", "bblhjb");   
//<-------------------> TEST STRSTR <------------------->//
    printf("\ntest for my_strstr\n");
    my_strstr_test("hhljqf;wje", "bblhjb");
    
    return 0;
}