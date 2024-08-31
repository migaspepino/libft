# Libft

Version: 15

Based on [vvarodi](https://github.com/vvarodi/libft_42)'s and [appinha](https://github.com/appinha/42cursus-00-Libft)'s README.md

---

## Index

| Main | Bonus |
|--|--|
| [ft_atoi.c](#ft_atoi)              | [ft_lstadd_back.c](#ft_lstadd_back)
| [ft_bzero.c](#ft_bzero)            | [ft_lstadd_front.c](#ft_lstadd_front)
| [ft_calloc.c](#ft_calloc)          | [ft_lstclear.c](#ft_lstclear)
| [ft_isalnum.c](#ft_isalnum)        | [ft_lstdelone.c](#ft_lstdelone)
| [ft_isalpha.c](#ft_isalpha)        | [ft_lstiter.c](#ft_lstiter)
| [ft_isascii.c](#ft_isascii)        | [ft_lstlast.c](#ft_lstlast)
| [ft_isdigit.c](#ft_isdigit)        | [ft_lstmap.c](#ft_lstmap)
| [ft_isprint.c](#ft_isprint)        | [ft_lstnew.c](#ft_lstnew)
| [ft_isspace.c](#ft_isspace)        | [ft_lstpenultimate.c](#ft_lstpenultimate)
| [ft_itoa.c](#ft_itoa)              | [ft_lstsize.c](#ft_lstsize)
| [ft_memccpy.c](#ft_memccpy)        |
| [ft_memchr.c](#ft_memchr)          |
| [ft_memcmp.c](#ft_memcmp)          |
| [ft_memcpy.c](#ft_memcpy)          |
| [ft_memmove.c](#ft_memmove)        |
| [ft_memset.c](#ft_memset)          |
| [ft_putchar_fd.c](#ft_putchar_fd)  |
| [ft_putendl_fd.c](#ft_putendl_fd)  |
| [ft_putnbr_fd.c](#ft_putnbr_fd)    |
| [ft_putstr_fd.c](#ft_putstr_fd)    |
| [ft_split.c](#ft_split)            |
| [ft_strchr.c](#ft_strchr)          |
| [ft_strdup.c](#ft_strdup)          |
| [ft_strjoin.c](#ft_strjoin)        |
| [ft_strlcat.c](#ft_strlcat)        |
| [ft_strlcpy.c](#ft_strlcpy)        |
| [ft_strlen.c](#ft_strlen)          |
| [ft_strmapi.c](#ft_strmapi)        |
| [ft_strncmp.c](#ft_strncmp)        |
| [ft_strnstr.c](#ft_strnstr)        |
| [ft_strrchr.c](#ft_strrchr)        |
| [ft_strtrim.c](#ft_strtrim)        |
| [ft_substr.c](#ft_substr)          |
| [ft_tolower.c](#ft_tolower)        |
| [ft_toupper.c](#ft_toupper)        |

| Extra | |
|--|--|
| [ft_striteri.c](#ft_striteri)      |
| [ft_strpbrk.c](#ft_strpbrk)        |
| [ft_substrpbrk.c](#ft_substrpbrk)  |
| [ft_printf.c](#ft_printf)          |
| [get_next_line.c](#get_next_line)  |

## Small description

### Functions from `<ctype.h>`

* [`ft_isalnum`](libft/ft_isalnum.c) - alphanumeric character test.
* [`ft_isalpha`](libft/ft_isalpha.c) - alphabetic character test.
* [`ft_isascii`](libft/ft_isascii.c) - test for ASCII character.
* [`ft_isdigit`](libft/ft_isdigit.c) - decimal-digit character test.
* [`ft_isprint`](libft/ft_isprint.c) - printing character test (space character inclusive).
* [`ft_isspace`](libft/ft_isspace.c) - white-space character test.
* [`ft_tolower`](libft/ft_tolower.c) - upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c) - lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c) - convert ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c) - memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/ft_bzero.c) - write zeroes to a byte string.
* [`ft_memccpy`](libft/ft_memccpy.c) - copy string until character found.
* [`ft_memchr`](libft/ft_memchr.c) - locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c) - compare byte string.
* [`ft_memcpy`](libft/ft_memcpy.c) - copy memory area.
* [`ft_memmove`](libft/ft_memmove.c) - copy byte string.
* [`ft_memset`](libft/ft_memset.c) - write a byte to a byte string.

### Functions from `<string.h>` library

* [`ft_strchr`](libft/ft_strchr.c) - locate character in string (first occurrence).
* [`ft_strdup`](libft/ft_strdup.c) - save a copy of a string (with malloc).
* [`ft_strlcat`](libft/ft_strlcat.c) - size-bounded string concatenation.
* [`ft_strlcpy`](libft/ft_strlcpy.c) - size-bounded string copying.
* [`ft_strlen`](libft/ft_strlen.c) - find length of string.
* [`ft_strncmp`](libft/ft_strncmp.c) - compare strings (size-bounded).
* [`ft_strnstr`](libft/ft_strnstr.c) - locate a substring in a string (size-bounded).
* [`ft_strrchr`](libft/ft_strrchr.c) - locate character in string (last occurence).
* [`ft_strstr`](libft/ft_strstr.c) * - locate a substring in a string.
* [`ft_strcmp`](libft/ft_strcmp.c) * - compare strings.
* [`ft_strnrcmp`](libft/ft_strnrcmp.c) - reversely compare strings (size-bounded).
* [`ft_strcpy`](libft/ft_strcpy.c) * - copy strings.
* [`ft_strncpy`](libft/ft_strncpy.c) * - copy strings (size-bounded).
* [`ft_strndup`](libft/ft_strndup.c) * - save a copy of a string (with malloc, size-bounded).
* [`ft_strcat`](libft/ft_strcat.c) * - concatenate strings (s2 into s1).
* [`ft_strncat`](libft/ft_strncat.c) * - concatenate strings (s2 into s1, size-bounded).

### Non-standard functions

* [`ft_itoa`](libft/ft_itoa.c) - convert integer to ASCII string.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c) - output a character to given file.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c) - output string to given file with newline.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c) - output integer to given file.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c) - output string to given file.
* [`ft_split`](libft/ft_split.c) - split string, with specified character as delimiter, into an array of strings.
* [`ft_delete_split_arr`](libft/ft_split.c) * - free splitted string.
* [`ft_strjoin`](libft/ft_strjoin.c) - concatenate two strings into a new string (with malloc).
* [`ft_strmapi`](libft/ft_strmapi.c) - create new string from modifying string with specified function.
* [`ft_strtrim`](libft/ft_strtrim.c) - trim beginning and end of string with the specified characters.
* [`ft_substr`](libft/ft_substr.c) - extract substring from string.

### Linked list functions

* [`ft_lstadd_back`](libft/ft_lstadd_back.c) - add new element at end of list.
* [`ft_lstadd_front`](libft/ft_lstadd_front.c) - add new element at beginning of list.
* [`ft_lstclear`](libft/ft_lstclear.c) - delete sequence of elements of list from a starting point.
* [`ft_lstdelone`](libft/ft_lstdelone.c) - delete element from list.
* [`ft_lstiter`](libft/ft_lstiter.c) - apply function to content of all list's elements.
* [`ft_lstlast`](libft/ft_lstlast.c) - find last element of list.
* [`ft_lstmap`](libft/ft_lstmap.c) - apply function to content of all list's elements into new list.
* [`ft_lstnew`](libft/ft_lstnew.c) - create new list.
* [`ft_lstpenultimate`](libft/ft_lstpenultimate) - get penultimate element of the list.
* [`ft_lstsize`](libft/ft_lstsize.c) - count elements of a list.

## Full description

### Functions from `<ctype.h>`:

### [ft_isalnum](libft/ft_isalnum.c)

`int    ft_isalnum(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for an alphanumeric character; it is equivalent to ([ft_isalpha](#ft_isalpha) or [ft_isdigit](#ft_isdigit))| The character to test | 0 if the character tests false and 1 if the character tests true

### [ft_isalpha](libft/ft_isalpha.c)

`int    ft_isalpha(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a alpabetic character, it is equivalent to ([ft_isupper](#ft_isupper)(c) or [ft_islower](#ft_islower)(c)) | The character to test | 0 if the character tests false and 1 if the character tests true

### [ft_isascii](libft/ft_isascii.c)

`int    ft_isascii(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for an ASCII character, which is any character between 0 and octal 0177 inclusive | The character to test | 0 if the character tests false and 1 if the character tests true

### [ft_isdigit](libft/ft_isdigit.c)

`int    ft_isdigit(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Check for a digit (0 through 9) | The character to test | 0 if the character tests false and 1 if the character tests true

### [ft_isprint](libft/ft_isprint.c)

`int    ft_isprint(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Checks for any printable character including space| The character to test | 0 if the character tests false and 1 if the character tests true

### [ft_isspace](libft/ft_isspace.c)

`int    ft_isspace(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
 Checks for white-space characters. These are: space, form-feed ('\f'), newline ('\n'),  carriage  return('\r'), horizontal tab ('\t'), and vertical tab ('\v').| The character to test | 0 if the character tests false and 1 if the character tests true
 
### [ft_tolower](libft/ft_tolower.c)

`int    ft_tolower(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is an uppercase, convert to lower| The character to convert | If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.

### [ft_toupper](libft/ft_toupper.c)

`int    ft_toupper(int c)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
If the character passed as an argument is a lowercase, convert to upper| The character to convert | If c is a lowercase letter, returns its uppercase equivalent. Otherwise,  it  returns  c.

### Functions from `<stdlib.h>`:

### [ft_atoi](libft/ft_atoi.c)

`int    ft_atoi(const char *str)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Convert a string to a integer | The string to be converted to int | The converted value

### [ft_calloc](libft/ft_calloc.c)

`void    *ft_calloc(size_t count, size_t size)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Allocates enough space for count objects that are size bytes of memory each, and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero | Number of elements to be allocated | Size of elements | A pointer to the allocated memory, or NULL if the request fails

### [ft_itoa](libft/ft_itoa.c) (extra)

`char    ft_itoa(int n)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled | The integer to convert | The string representing the integer. NULL if the allocation fails.

### Functions from `<string.h>`:

### [ft_strchr](libft/ft_strchr.c)

`char    *ft_strchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the first occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the first occurrence of the character c in the string or NULL if the character is not found

### [ft_strdup](libft/ft_strdup.c)

`char    *ft_strdup(const char *s))`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Duplicate string s1. Memory  for  the new string is obtained with malloc, and can  be  freed with free | The string to duplicate| A pointer   to  the  duplicated  string.  NULL  if  insufficient  memory  was available

### [ft_strlcat](libft/ft_strlcat.c)

`size_t    ft_strlcat(char *dst, const char *src, size_t size)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Concatenate the string src to the end of dst. It will concatenate at most size - strlen(dst) - 1 bytes, NUL-terminating the result | Destination array | String to be appended to dst | Maximum number of characters to be appended | The initial length of dst plus the length of src

### [ft_strlcpy](libft/ft_strlcpy.c)

`size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result| Destination array | String to be copied | Number of characters to be copied from src | Total length of the string to create (length of src)

### [ft_strlen](libft/ft_strlen.c)

`size_t    ft_strlen(const char *s)`

Description | Param. #1 | Return Values
:-----------: | :-----------: | :-----------:
Calculates the length of the string pointed to by s, excluding the terminating null byte ('\0') | The string to calculate | Number of characters in the string pointed to by s

### [ft_strncmp](libft/ft_strncmp.c)

`int    strncmp(const char *s1, const char *s2, size_t n);`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a ‘\0’ character are not compared. | String 1 | String 2 | size to compare | The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. The comparison is done using unsigned characters, so that ‘\200’ is greater than ‘\0’.

### [ft_strnstr](libft/ft_strnstr.c)

`char    *ft_strnstr(const char *haystack, const char *needle, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Locate substring, where not more than 'len' characters are searched. Finds the first occurrence of the substring 'needle' in  the  string 'haystack'. The terminating null bytes ('\0') are not compared. | String to be scanned | The small string to be searched in 'haystack' string|The maximum amount of characters to be searched |A pointer to the first character of the first occurrence of little is returned. NULL if the substring is not found. If 'needle' is an empty string, 'haystack' is returned

### [ft_strrchr](libft/ft_strrchr.c)

`char    *ft_strrchr(const char *s, int c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Locates the last occurrence of 'c' in the string pointed to by 's'. The terminating null character is considered to be part of the string, therefore if 'c' is '\0', locates the terminating '\0'| Pointer to string | Character to be located | A pointer to the last occurrence of the character c in the string or NULL if the character is not found

### [ft_strstr](libft/ft_strstr.c)

 `char *strstr(const char *haystack, const char *needle)` 

Description |  Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Locates the first occurrence of the null-terminated string `needle` in the string `haystack`. The terminating null characters are not compared. | The string to search | The string to find | A pointer to the beginning of the located substring, or NULL if the substring is not found |
 
### [ft_strcmp](libft/ft_strcmp.c)

`int strcmp(const char *s1, const char *s2)`

Description |  Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Compares the null-terminated strings `s1` and `s2`. It compares character by character until a difference is found or the end of the strings is reached. | The first string to compare | The second string to compare | An integer greater than, equal to, or less than 0, according to whether `s1` is greater than, equal to, or less than `s2` |
 
### [ft_strnrcmp](libft/ft_strnrcmp.c)

`int strnrcmp(const char *s1, const char *s2, size_t n)` 

Description | Param. #1 | Param. #2 | Param. #3 | Return Value 
:-----------: | :-----------: | :-----------: | :-----------: | :-----------: 
Compares up to `n` characters of the strings `s1` and `s2`, starting from the end of the strings. | The first string to compare | The second string to compare | The number of characters to compare | An integer greater than, equal to, or less than 0, according to whether `s1` is greater than, equal to, or less than `s2`

### [ft_strcpy](libft/ft_strcpy.c) 

`char *strcpy(char *dst, const char *src)` 

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: 
 Copies the null-terminated string `src` to `dst` (including the null terminator). | The destination buffer | The source string | A pointer to the destination string `dst`

### [ft_strncpy](libft/ft_strncpy.c)

`char *strncpy(char *dst, const char *src, size_t n)` 

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------: 
Copies up to `n` characters from the string `src` to `dst`. If `src` is less than `n` characters long, the remainder of `dst` is padded with null bytes. | The destination buffer | The source string | The number of characters to copy | A pointer to the destination string `dst`

### [ft_strndup](libft/ft_strndup.c) 

`char *strndup(const char *s, size_t n)` 

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: 
Allocates memory and duplicates up to `n` characters from the string `s`, null-terminating the result. | The string to duplicate | The number of characters to duplicate | A pointer to the newly allocated string, or NULL if the allocation fails 

### [ft_strcat](libft/ft_strcat.c) 

`char *strcat(char *dst, const char *src)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Appends the null-terminated string `src` to the end of the null-terminated string `dst`. The terminating null byte of `dst` is overwritten by the first character of `src`, and a new null byte is added at the end of the concatenated string. | The destination buffer | The source string | A pointer to the resulting string `dst` 

### [ft_strncat](libft/ft_strncat.c) 

`char *strncat(char *dst, const char *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Appends up to `n` characters from the string `src` to the end of the null-terminated string `dst`, null-terminating the result. | The destination buffer | The source string | The number of characters to append | A pointer to the resulting string `dst`

### Functions from `<strings.h>`:

### [ft_bzero](libft/ft_bzero.c)

`void    *ft_bzero(void *s,  size_t n)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
 Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes | None
 
### [ft_memccpy](libft/ft_memccpy.c)

`void    *ft_memccpy(void *dst, const void *src, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Param. #4 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area  src  to memory  area  dst, stopping when the character c is found, or after n characters are copied, whichever comes first. If copying takes place between objects that overlap, the behavior is undefined.| Memory area dst | Memory area src | A character to search | Number of bytes that memccpy() copied | A pointer to the next character in dst after c, or NULL if c was not found in the first n bytes

### [ft_memchr](libft/ft_memchr.c)

`void    *ft_memchr(const void *s, int c, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Scans the initial n bytes of s for the first instance of c | Memory area s| A character to search | The number of bytes | A pointer to the matching byte or NULL if the character does not occur in the given memory area

### [ft_memcmp](libft/ft_memcmp.c)

`void    *ft_memcmp(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Compares byte string s1 against byte string s2 | Memory area s1| Memory area s2 | The number of bytes | < 0 if s1 is less than s2, > 0 if s1 is graeter than s2, = 0 if s1 is equal to s2

### [ft_memcpy](libft/ft_memcpy.c)

`void    *ft_memcpy(void *dst, const void *src, size_t n)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies n bytes from memory area src to memory of dst. The memory  areas  must  not  overlap.  Use [ft_memmove](#ft_memmove) if the memory areas do overlap.| Memory area dst | Memory area src | The number of bytes | A pointer to the memory area dst

### [ft_memmove](libft/ft_memmove.c)

`void    *ft_memmove(void *dst, const void *src, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Copies len bytes from the memory of src to dst. Memories may overlap. First, the bytes in src are copied into a temporary array and then to dst.| Memory area dst | Memory ares arc | The number of bytes | A pointer to the memory area dst

### [ft_memset](libft/ft_memset.c)

`void    *ft_memset(void *s, int c, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Fill with "len" bytes of "c" the memory of "s"| The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s

### Functions from `<stdio.h>`:

### [ft_printf](libft/ft_printf.c)

`int printf(const char *format, ...)`

Description | Param. #1 | Return Value 
:-----------: | :-----------: | :-----------: 
Formats and prints the data to the standard output according to the format string `format`. The `...` denotes a variable number of arguments to be formatted and printed. | The format string | The number of characters printed (excluding the null byte) 

See: https://en.cppreference.com/w/c/io/fprintf

### [ft_putchar_fd](libft/ft_putchar_fd.c)

`void putchar_fd(char c, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Writes the character `c` to the file descriptor `fd`. | The character to write | The file descriptor | None 

### [ft_putendl_fd](libft/ft_putendl_fd.c)

`void putendl_fd(char *s, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Writes the string `s` to the file descriptor `fd` followed by a newline character. If `s` is NULL, nothing is written. | The string to write | The file descriptor | None 

### [ft_putnbr_fd](libft/ft_putnbr_fd.c)

`void putnbr_fd(int n, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Writes the integer `n` to the file descriptor `fd`. | The integer to write | The file descriptor | None 

### [ft_putstr_fd](libft/ft_putstr_fd.c)

`void putstr_fd(char *s, int fd)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Writes the string `s` to the file descriptor `fd`. If `s` is NULL, nothing is written. | The string to write | The file descriptor | None

### Bonus (linked-list):

### [ft_lstadd_back](libft/ft_lstadd_back.c) - add new element at end of list.

`void	ft_lstadd_back(t_list **lst, t_list *new);`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | 
| Adds the node ’new’ at the end of the list. | **lst:**  The address of a pointer to the first link of a list. |**new:**  The address of a pointer to the node to be added to the list.| None

### [ft_lstadd_front](libft/ft_lstadd_front.c) - add new element at beginning of list.

`void	ft_lstadd_front(t_list **lst, t_list *new);`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | 
| Adds the node ’new’ at the beginning of the list. | **lst:**  The address of a pointer to the first link of a list. |**new:**  The address of a pointer to the node to be added to the list.| None

### [ft_lstclear](libft/ft_lstclear.c) - delete sequence of elements of list from a starting point.

`void ft_lstclear(t_list **lst, void (*del)(void *));`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | 
| Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL. | **lst:**  The address of a pointer to a node. | **del:**  The address of the function used to delete the content. | None

### [ft_lstdelone](libft/ft_lstdelone.c) - delete element from list.

`void ft_lstdelone(t_list *lst, void (*del)(void  *));`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | 
| Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed. | **lst:**  The node to free. | **del:**  The address of the function used to delete the content. | None

### [ft_lstiter](libft/ft_lstiter.c) - apply function to content of all list's elements.

`void ft_lstiter(t_list *lst, void (*f)(void *));`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | 
| Iterates the list ’lst’ and applies the function ’f’ on the content of each node.| **lst:**  The address of a pointer to a node. | **f:**  The address of the function used to iterate on the list. | None

### [ft_lstlast](libft/ft_lstlast.c) - Returns the last node of the list.

`t_list *ft_lstlast(t_list *lst);`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
| Returns the last node of the list. | **lst:**  The beginning of the list. | Last node of the list

### [ft_lstmap](libft/ft_lstmap.c) - apply function to content of all list's elements into new list.

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed. | **lst:** The address of a pointer to a node. | **f:**  The address of the function used to iterate on the list. | **del:**  The address of the function used to delete the content of a node if needed. | The new list. NULL if the allocation fails

### [ft_lstnew](libft/ft_lstnew.c) - create new list.

`t_list	*ft_lstnew(void *content);`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
| Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. | **content:**  The content to create the node with. | The new node

### [ft_lstpenultimate](libft/ft_lstpenultimate.c) - Returns the penultimate node of the list

`t_list *ft_lstpenultimate(t_list **lst)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Returns the node before the last node of the list. If the list has fewer than two nodes, it returns `NULL`. | The address of a pointer to the first node of the list. | The penultimate node of the list or `NULL` if the list is too short.

### [ft_lstsize](libft/ft_lstsize.c) - Counts the number of nodes in a list.

`int ft_lstsize(t_list *lst);`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
| Counts the number of nodes in a list. | **lst:**  The beginning of the list. | The length of the list

### Non-standard Functions (Custom or Additional Implementation):

`char    **ft_split(char const *s, char c)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns  an array of strings obtained by splitting s using the character 'c' as a delimiter. The array must be ended by a NULL pointer|The string to be split |The delimiter character| The array of new strings result of the split. NULL if the allocation fails

### [ft_delete_split_arr](libft/ft_delete_split_arr.c)

`char **ft_delete_split_arr(char **arr)`

Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Frees each string in the array `arr` and then frees the array itself. The function returns `NULL`. | The array of strings to be freed | Always returns `NULL` 

### [ft_strjoin](libft/ft_strjoin.c)

`char    *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a new string, result of the concatenation of s1 and s2 |The prefix string |The suffix string | The new string. NULL if the allocation fails

### [ft_strmapi](libft/ft_strmapi.c)

`char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function f to each character of the string passed as argument to create a new string (with malloc) resulting from successive applications of f |The string on which to iterate| The function to apply to each character| The string created from the successive applications of f. Returns NULL if the allocation fails

### [ft_strtrim](libft/ft_strtrim.c)

`char    *ft_strjoin(char const *s1, char const *s2)`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string|The string to be trimmed |The reference set of character to trim | The trimmed string. NULL if the allocation fails

### [ft_substr](libft/ft_substr.c)

`char   *ft_substr(char const *s, unsigned int start, size_t len)`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string| The maximum length of the substring | The substring. NULL if the allocation fails

### [ft_striteri](libft/ft_striteri.c) - Applies a function to each character in a string with its index

`void ft_striteri(char *s, void (*f)(unsigned int, char*));`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Applies the function ’f’ to each character of the string ’s’, passing the index and the character as arguments. | **s:** The string to iterate over. | **f:** The function to apply to each character of the string. | None 

### [ft_strpbrk](libft/ft_strpbrk.c) - Locates the first occurrence of any character in a set of characters

`char *ft_strpbrk(const char *s, char *accept);`

Description | Param. #1 | Param. #2 | Return Value
:-----------: | :-----------: | :-----------: | :-----------:
Searches the string ’s’ for the first occurrence of any character from the string ’accept’. | **s:** The string to search within. | **accept:** The set of characters to search for. | The pointer to the first occurrence of any character from ’accept’ or `NULL` if no match is found. 

### [ft_substrpbrk](libft/ft_substrpbrk.c) - Locates the first occurrence of any character in a set of characters within a substring
`char *ft_substrpbrk(char *s, size_t len, char *accept);`

Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
Searches the substring of ’s’ up to length ’len’ for the first occurrence of any character from ’accept’. | **s:** The string to search within. | **len:** The length of the substring to consider. | **accept:** The set of characters to search for. | The pointer to the first occurrence of any character from ’accept’ within the substring or `NULL` if no match is found.

### [get_next_line](libft/get_next_line.c) - Reads a line from a file descriptor

`char *get_next_line(int fd);`
Description | Param. #1 | Return Value
:-----------: | :-----------: | :-----------:
Reads from the file descriptor ’fd’ and returns the next line of text. Each call to this function will return the subsequent line of the file. If the end of file is reached or if an error occurs, it returns `NULL`. The returned line includes the newline character if it is present in the file; otherwise, it returns the text up to the end of the file. | **fd:** The file descriptor from which to read. | The next line read from the file or `NULL` if the end of file is reached or an error occurs.
