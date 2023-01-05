#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

#define SIZE 1024
#define S_LONG 2
#define S_SHORT 1

#define SP_INIT {0, 0, 0, 0}
/**
 * struct ob - a structure
 * @cor: a character
 * @f: a function pointer
 */

typedef struct specificateur
{
	int pre : 1;
	int th : 1;
	int ze : 1;
	int fl : 1;
} spe;

typedef struct ob
{
	char *cor;
	int (*funct)(va_list, spe *);
} ob;

typedef struct flags
{
	int plus;
	int spase;
	int hach;
	int moins;
	int zero;
} drap;

int op_st(va_list note, spe *p);
int op_de(va_list note, spe *p);
int op_t(va_list note, spe *p);
int op_c(va_list note, spe *p);
int op_cent(va_list note, spe *p);
int op_un(va_list note, spe *p);
int op_oc(va_list note, spe *p);
int op_bi(va_list note, spe *p);
int op_hexal(va_list note, spe *p);
int op_hexaup(va_list note, spe *p);
int op_inv(va_list note, spe *p);
int op_rot(va_list note, spe *p);
int op_noprint(va_list note, spe *p);
char *op_vert(unsigned long int a, int b);
int op_ad(va_list note, spe *p);
int flag(char t, drap *g);
int precision(const char *format, int *j, va_list note);
int op_cent(va_list note, spe *p);
/*int (*ob_func(char a))(va_list note, spe *p);*/
int _printf(const char *format, ...);
int display(char c);
int obtenir(char a, va_list note, spe *p);
int size(const char *format, int *j);
int width(const char *format, int *j, va_list note);
#endif
