#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

#define SIZE 1024
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

typedef struct flags
{
	int plus;
	int spase;
	int hach;
	int moins;
	int zero;
} drap;
int op_st(va_list note);
int op_de(va_list note);
int op_t(va_list note);
int op_c(va_list note);
int op_cent(va_list note);
int op_un(va_list note);
int op_oc(va_list note);
int op_bi(va_list note);
int op_hexal(va_list note);
int op_hexaup(va_list note);
int op_inv(va_list note);
int op_rot(va_list note);
int op_noprint(va_list note);
char *op_vert(unsigned long int a, int b);
int op_ad(va_list note);
int op_flag(char t, drap *g);
int op_precision(const char *format, int j, va_list note);
int op_cent(va_list note);
int (*ob_func(char a))(va_list note);
int _printf(const char *format, ...);
int display(char c);
#endif
