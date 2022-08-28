#include <stdio.h>
#include <stdlib.h>
#include "StringFunc.hpp"

int my_puts(const char *s) {
    if (s == NULL) {
        printf("Error, can't output NULL string\n");
        return EOF;
    }

    int i = 0;

    for ( ; s[i] != '\0'; i++) {
        putchar(s[i]);
    }

    return i;
}

const char* my_strchr(const char* cs, char c) {
    for (int i = 0; cs[i] != '\0'; i++) {
        if (cs[i] == c)
            return (cs + i);
    }

    return NULL;
}

const char* my_strrchr(const char* cs, char c) {
    size_t len_cs = my_strlen(cs);

    for (size_t i = len_cs; i > 0; i--) {
        if (cs[i] == c)
            return (cs + i);
    }

    return NULL;
}

size_t my_strlen(const char *cs) {
    size_t i = 0;

    for ( ; cs[i] != '\0'; i++);

    return i;    
}

char* my_strcpy(char* s, const char* ct) {
    int i = 0;

    for (; ct[i] !='\0'; i++) {
        s[i] = ct[i];
    }
    s[i] = '\0';

    return s;
}

char* my_strncpy(char* s, const char* ct, int n) {
    int i = 0;

    for (; ct[i] !='\0' && i < n; i++) {
        s[i] = ct[i];
    }
    s[i] = '\0';

    return s;
}

char* my_strcat(char* s, const char* ct) {

    size_t len_s = my_strlen(s);
    int i = 0;

    for ( ; ct[i] != '\0'; i++) {
        s[i + len_s] = ct[i];
    }
    s[i + len_s] = '\0';

    return s;
}

char* my_strncat(char* s, const char* ct, int n) {
    size_t len_s = my_strlen(s);
    int i = 0;

    for ( ; ct[i] != '\0' && i < n; i++) {
        s[i + len_s] = ct[i];
    }
    s[i + len_s] = '\0';

    return s;
}

char* my_fgets(char *s, int size, FILE *stream) {
    if (stream == NULL) {
        printf("Error, can't find File\n");
        return NULL;
    }

    int i = 0;

    for(int ch = 0; (ch = getc(stream)) != EOF && (ch != '\n') && (i < size - 1); i++) {
        s[i] = (char)ch;
    }
    s[i] = '\0';

    return s;
}

char* my_strdup(const char *s) {
    char* s_copy = (char*) calloc(my_strlen(s) + 1, sizeof(char));

    my_strcpy(s_copy, s);

    return s_copy;
}

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream) {
    if (stream == NULL) {
        printf("Error, can't find File\n");
        return -1;
    }
    if (*lineptr == NULL) {
        *lineptr = (char*) calloc(*n, sizeof(char));
    }

    int ch = 0;
    size_t i = 0;

    for ( ; (ch = getchar()) !=EOF && ch != '\n';) {
        if (i < *n) {
            *lineptr[i] = (char) ch;
        } else {
            *lineptr = (char*) realloc(*lineptr, ((*n)++));
        }
    }

    return i;
}

char my_strcmp(const char* cs, const char* st) {
    int i = 0;

    for ( ; cs[i] == st[i] && cs[i] != '\0'; i++);

    return cs[i] - st[i]; 
}

char my_strncmp(const char* cs, const char* st, int n) {
    int i = 0;

    for ( ; cs[i] == st[i] && cs[i] != '\0' && i < n; i++);

    return cs[i] - st[i];  
}

size_t my_strspn(const char* cs, const char* ct) {
    int i = 0;

    for ( ; my_strchr(ct, cs[i]) != NULL; i++);

    return i;
}

size_t my_strcspn(const char* cs, const char* ct) {
    int i = 0;

    for( ; my_strchr(ct, cs[i]) == NULL; i++);

    return i;
}

const char* my_strpbrk(const char* cs, const char* ct) {
    size_t len_cs = my_strlen(cs);

    for (size_t i = 0; i < len_cs; i++) {
        if (my_strrchr(ct, cs[i]) != NULL)
            return (cs + i);
    }

    return NULL;
}

const char* my_strstr(const char* cs, const char* ct) {
    size_t len_cs = my_strlen(cs);
    size_t len_ct = my_strlen(ct);
    size_t answer = 0;
    size_t j = 0;

    for (size_t i = 0; i <= (len_cs + 1); i++) {
        answer = i;
        for (j = 0; i <= (len_cs + 1) && j <= (len_ct - 1); i++, j++) {
            if (cs[i] != ct[j]) 
                break;
        }
        if (j == len_ct) {
            return (cs + answer);
        }
    }
    
    return NULL;
}
