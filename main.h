#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>
typedef struct print
{
char *type;
int (*func)(va_list);
}
print_t;
=======
/**
 * struct print - structure for printing various types
 * @type: type to print
 * @func: function to print
 */
typedef struct print
{
	char *type;
	int (*func)(va_list);
} print_t;

>>>>>>> 8f4835823173cbdec5bef67225a43506966a7c54
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
<<<<<<< HEAD
#endif
=======

#endif 
>>>>>>> 8f4835823173cbdec5bef67225a43506966a7c54
