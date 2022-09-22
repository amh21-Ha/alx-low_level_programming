#ifndef MAIN_H

#define MAIN_H

int _putchar(char c);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *);

char *rot13(char *);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);

int _isupper(int c);

int _isdigit(int c);

void print_number(int n);

void print_triangle(int size);

void print_square(int size);

void print_diagonal(int n);

void print_line(int n);

void more_numbers(void);

void print_most_numbers(void);

int mul(int a, int b);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);

#endif
