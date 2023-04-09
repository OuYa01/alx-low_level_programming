# this directory its about static libraries in 'c'
## My static librarie
### libmy.a
1.  **_putchar.o** = function writes character
2.  **0-isupper.o** = checks for uppercase character, `int _isupper(int c);`
3.  **0-memset.o** = fills memory with a constant byte, `char *_memset(char *s, char b, unsigned int n);`
    -   `s` : string where the constant byte will be set
    -   `b` : value you want to set
    -   `n` : the number of bytes you want to set
4.  **0-strcat.o** = concatenates two strings, `char *_strcat(char *dest, char *src);`
    -   `dest` : where the concatenated string will be stored
    -   `src` : the source string that will be appended to the destination string
5.  **1-strncat.o** = concatenates two strings but with a length limit, `char *_strncat(char *dest, char *src, int n);`
    -   `dest` : where the concatenated string will be stored
    -   `src` : the source string that will be appended to the destination string
    -   `n` : maximum number of bytes to be used from `src`
6.  **1-memcpy.o** = copies `n` bytes from `src` to `dest`, `char *_memcpy(char *dest, char *src, unsigned int n);`
    -   `dest` : destination memory block
    -   `src` : source memory block
    -   `n` : number of bytes to be copied
7.  **1-isdigit.o** = checks for a digit (0 through 9), `int _isdigit(int c);`
8.  **2-strchr.o** = locates a character in a string, `char *_strchr(char *s, char c);`
    -   `s` : string to be searched
    -   `c` : character to be located
9.  **2-strlen.o** = calculates the length of a string, `int _strlen(char *s);`
    -   `s` : string to be calculated
10.  **2-strncpy.o** = copies `n` bytes of `src` to `dest`, `char *_strncpy(char *dest, char *src, int n);`

-   `dest` : destination memory block
-   `src` : source memory block
-   `n` : maximum number of bytes to be copied

11.  **3-islower.o** = checks for lowercase character, `int _islower(int c);`
12.  **3-puts.o** = prints a string, `void _puts(char *s);`

-   `s` : string to be printed

13.  **3-strcmp.o** = compares two strings, `int _strcmp(char *s1, char *s2);`

-   `s1` : first string to be compared
-   `s2` : second string to be compared

14.  **3-strspn.o** = gets the length of a prefix substring, `unsigned int _strspn(char *s, char *accept);`

-   `s` : string to be searched
-   `accept` : string containing the characters to match

15.  **4-isalpha.o** = checks for an alphabetic character, `int _isalpha(int c);`

-   `c`: character to be checked

16.  **4-strpbrk.o** = searches a string for any of a set of bytes, `char *_strpbrk(char *s, char *accept);`

-   `s`: string to be searched
-   `accept`: string containing the characters to match

17.  **5-strstr.o** = locates a substring, `char *_strstr(char *haystack, char *needle);`

-   `haystack`: string to be searched
-   `needle`: substring to be located

18.  **6-abs.o** = computes the absolute value of an integer, `int _abs(int n);`

-   `n`: integer to compute the absolute value of

19.  **9-strcpy.o** = copies a string, `char *_strcpy(char *dest, char *src);`

-   `dest`: buffer to copy the string to
-   `src`: string to be copied
