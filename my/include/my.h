/*
** EPITECH PROJECT, 2020
** library
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

////////////////////////////////////////////////////////////
/// Header
///
////////////////////////////////////////////////////////////
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "../../my_assert/include/my_assert.h"

////////////////////////////////////////////////////////////
/// Proto
///
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
/// \brief Return opposite
///
/// \param nbr
///
/// \return number
////////////////////////////////////////////////////////////
extern int my_abs(int nbr);

////////////////////////////////////////////////////////////
/// \brief Convert string to int
///
/// \param string - String to convert
///
/// \return number
////////////////////////////////////////////////////////////
extern int my_atoi(const char *restrict string);

////////////////////////////////////////////////////////////
/// \brief add NULL at the end of string
///
/// \param string
///
/// \param size
///
/// \return void
////////////////////////////////////////////////////////////
extern void my_bzero(void *string, size_t size)
    __THROW __attribute__ ((__noreturn__));

////////////////////////////////////////////////////////////
/// \brief Check if a char is a number
///
/// \param c - char to check
///
/// \return true or false
////////////////////////////////////////////////////////////
extern bool my_isalpha(char c);

////////////////////////////////////////////////////////////
/// \brief Check if a string is a number
///
/// \param string - String to check
///
/// \return true or false
////////////////////////////////////////////////////////////
extern bool my_isnum(const char *restrict string);

////////////////////////////////////////////////////////////
/// \brief Check if a string is a number
///
/// \param size - size to alloc
///
/// \param is_arr - true if it's an array
///
/// \return variable malloc'd
////////////////////////////////////////////////////////////
extern void *my_memalloc(const size_t size, const bool is_arr);

////////////////////////////////////////////////////////////
/// \brief Copy mem of variable
///
/// \param dest
///
/// \param src
///
/// \param len
///
/// \return variable copy
////////////////////////////////////////////////////////////
extern void *my_memcpy(void *restrict dest, const void *restrict src,
            size_t len);

////////////////////////////////////////////////////////////
/// \brief calc power of number
///
/// \param nb - Number
///
/// \param p - power
///
/// \return number
////////////////////////////////////////////////////////////
extern int my_pow(int nb, int p);

////////////////////////////////////////////////////////////
/// \brief Concatenat two strings
///
/// \param dest
///
/// \param src
///
/// \return string Concatenated
////////////////////////////////////////////////////////////
extern char *my_strcat(char *restrict dest, const char *restrict src);

////////////////////////////////////////////////////////////
/// \brief Copy pointer of string into another
///
/// \param dest
///
/// \param src
///
/// \return string copied
////////////////////////////////////////////////////////////
extern char *my_strcpy(char *restrict dest, const char *restrict src);

////////////////////////////////////////////////////////////
/// \brief Malloc a string and Copy it's pointer into another
///
/// \param dest
///
/// \param src
///
/// \return string alloc'd and copied
////////////////////////////////////////////////////////////
extern char *my_strdup(const char *restrict src);

////////////////////////////////////////////////////////////
/// \brief Alloc a string and copy content of src on it
///
/// \param src to copy
///
/// \return string malloc'd
////////////////////////////////////////////////////////////
extern char *my_strdup(const char *restrict src);

////////////////////////////////////////////////////////////
/// \brief Count length of a string
///
/// \param string
///
/// \return length
////////////////////////////////////////////////////////////
extern int my_strlen(const char *restrict string);

////////////////////////////////////////////////////////////
/// \brief Put a string in an array
///
/// \param string - string to put in an array
///
/// \return array
////////////////////////////////////////////////////////////
extern char **my_strtoarr(const char *restrict string);

////////////////////////////////////////////////////////////
/// \brief Swap two elements
///
/// \param a - first element
///
/// \param b - second element
///
/// \return void
////////////////////////////////////////////////////////////
extern void my_swap(const int *a, const int *b)
    __THROW __attribute__ ((__noreturn__));

#endif /* !MY_H_ */