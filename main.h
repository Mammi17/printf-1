#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct ob - a structure
 * @cor: a character
 * @f: a function pointer
 */
typedef struct ob
{
	char *cor;
	int (*funct)(va_list);
} ob;
int op_st(va_list note);
int op_de(va_list note);
int op_t(va_list note);
int op_c(va_list note);
int op_cent(va_list note);
int (*ob_func(char a))(va_list note);
int _printf(const char *format, ...);
int display(char c);
#endif
