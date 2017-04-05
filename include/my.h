/*
** my.h for emacs in /home/kevin.ferchaud/CPool_Day09/include
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Oct 13 19:53:33 2016 ferchaud kevin
** Last update Fri Mar 10 14:02:56 2017 ferchaud kevin
*/

void	my_putkey(char *);

int	write(int handle, void *buffer, int nbyte);

void	my_putchar(char c);

int	my_isneg(int nb);

int	my_put_nbr(int nb);

int	my_swap(int *a, int *b);

int	my_putstr(char *str);

int	my_strlen(char *str);

int	my_getnbr(char *str);

void	my_sort_int_tab(int *tab, int size);

int	my_power_rec(int nb, int power);

int	my_square_root(int nb);

int	my_is_prime(int nombre);

char	*my_strcpy(char *dest, char *src);

char	*my_revstr(char *str);

char	*my_strstr(char *str, char *to_find);

int	my_strcmp(char *s1, char *s2);

int	my_strncmp(char *s1, char *s2, int n);

char	*my_strupcase(char *str);

char	*my_strlowcase(char *str);

char	*my_strcapitalize(char *str);

int	my_str_isalpha(char *str);

int	my_str_isnum(char *str);

int	my_str_islower(char *str);

int	my_str_isupper(char *str);

int	my_str_isprintable(char *str);

int	my_showstr(char *str);

int	my_showmem(char *str, int size);

char	*my_strcat(char *dest, char *src);

char	*my_strncat(char *dest, char *src, int nb);

int	alapuissance(int p, int v);

int	lalongueur(int nb);

int	my_find_prime_sup(int nb);

int	raccourcir(int y, int u);

char	*sum_params(int argc, char **agv);

int	testlimite(int v, int t, char str);

int	my_putnbr_base(int a, char *aa);

char	*my_strdup(char *src);

char	*my_strncpy(char *dest, char *src, int n);

int	my_show_wordtab(char **tab);

char	*my_strcapitalize(char *str);

char	*my_strncat(char *a, char *b, int n);

int	read(int aaa, char *bbb, int h);

int	close(int ggggggggggg);

void	do_int(int a);

void	do_long(long a);

void	do_float(float a);

void	do_char(char a);

void	do_string(char *a);

void	do_point(int a);

void	do_short(short a);

int	do_hexd(int a);

int	do_heXd(int a);

int	do_binary(unsigned a);

void	do_prints(char *a);

int	do_modulo();

void	my_printf(const char *a, ...);

void	do_unsign(unsigned int a);

int	do_octal(int a);

int            do_charoct(char *a);

unsigned int	my_put_nbruns(unsigned int a);
