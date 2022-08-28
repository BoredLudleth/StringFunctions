/*!
\mainpage Library of string functions
\author BoredLudleth
\version 1.0
\date August 2022
*/

/*!
\file
\brief File contains string functions
*/

//======================================================================================================================================

/*!
\brief my_puts writes the string s and a trailing newline to stdout.
\param[in] s String, which you write
\return Return a nonnegative number on success, or EOF on error.
*/

int my_puts(const char *s);

//======================================================================================================================================

/*!
\brief my_strchr find first left entry
\param[in] cs String1
\param[in] c Symbol, which you try find
\return Returns pointer on first entry, else returns NULL
*/

const char* my_strchr(const char* cs, char c);

//======================================================================================================================================

/*!
\brief my_strrchr find first right entry
\param[in] cs String1
\param[in] c Symbol, which you try find
\return Returns pointer on first entry, else returns NULL
*/

const char* my_strrchr(const char* cs, char c);

//======================================================================================================================================

/*!
\brief my_strlen measures the length of a string
\details If string is empty, length will be 0
\return Function returns length of a string
*/

size_t my_strlen(const char *cs); 

//======================================================================================================================================

/*!
\brief my_strcpy copy one string
\details If string is empty, it's copy it
\param[out] s String became a copy ct
\param[in]  ct Is copied
\return Copied String
*/

char* my_strcpy(char* s, const char* ct);

//======================================================================================================================================

/*!
\brief my_strncpy copy n symbols of one string
\details If length of ct is less than n, it copy length of ct symbols
\param[out] s String became a copy ct
\param[in]  ct Is copied
\param[in]  n Number of copied symbols
\return Copied String
*/

char* my_strncpy(char* s, const char* ct, int n);

//======================================================================================================================================

/*!
\brief my_strcat paste ct, after s
\param[out] s String, where paste ct
\param[in]  ct Is pasted
\return Updated string
*/

char* my_strcat(char* s, const char* ct);

//======================================================================================================================================

/*!
\brief my_strncat paste n symbols of one string
\details If length of ct is less than n, it paste length of ct symbols
\param[out] s String, where paste ct
\param[in]  ct Is pasted
\param[in]  n Number of pasted symbols
\return Updated string
*/

char* my_strncat(char* s, const char* ct, int n);

//======================================================================================================================================

/*!
\brief my_fgets reads from file
\param[out] s String
\param[in]  size Number of written symbols
\param[in]  stream File
\return Reads string from file
*/

char* my_fgets(char *s, int size, FILE *stream);

//======================================================================================================================================

/*!
\brief my_strdup makes a copy of s
\param[out] s String
\return Returns pointer on s_copy
*/

char* my_strdup(const char *s);

//======================================================================================================================================

/*!
\brief my_getline read line from file
\param[out] lineptr Pointer on buffer, where is line
\param[in]  n Part of memory
\param[in]  stream File, where we read
*/

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);

//======================================================================================================================================

/*!
\brief my_strcmp - compare cs and st
\param[in] cs String1
\param[in] ct String2
*/

char my_strcmp(const char* cs, const char* st);

//======================================================================================================================================

/*!
\brief my_strncmp compare FIRST n symbols cs and st
\param[in] cs String1
\param[in] ct String2
\param[in] n Number of compared symbols
*/

char my_strncmp(const char* cs, const char* st, int n);

//======================================================================================================================================

/*!
\brief The strspn() calculates the length (in bytes) of the initial segment of s which consists entirely of bytes in accept.
\param[in] cs String1
\param[in] ct String2
\return Returns how many first symbols of the initial segment of s which consists entirely of bytes in accept.
*/

size_t my_strspn(const char* cs, const char* ct);

//======================================================================================================================================

/*!
\brief The strcspn() function calculates the length of the initial segment of s which consists entirely of bytes not in reject.
\param[in] cs String1
\param[in] ct String2
\return Returns how many first symbols of the initial segment of s which not consists entirely of bytes in accept.
*/

size_t my_strcspn(const char* cs, const char* ct);

//======================================================================================================================================

/*!
\brief The strpbrk() function locates the first occurrence in the string cs of any of the bytes in the string ct.
\param[in] cs String1
\param[in] ct String2
\return The strpbrk() function returns a pointer to the byte in cs that matches one of the bytes in ct, or NULL if no such byte is found..
*/

const char* my_strpbrk(const char* cs, const char* ct);

//======================================================================================================================================

/*!
\brief The strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes ('\0') are not compared.
\param[in] cs String1
\param[in] ct String2
\return The strpbrk() function returns a pointer to the first occurrence of the substring or NULL
*/

const char* my_strstr(const char* cs, const char* ct);
