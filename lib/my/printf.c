/*
** printf.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Nov 14 11:23:53 2016 ferchaud kevin
** Last update Fri Mar 10 13:53:42 2017 ferchaud kevin
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int		not_in(char *atype, const char *form, int cpt, int cpt2)
{
  if (atype[cpt2 - 1] != form[cpt] && form[cpt] != '%')
    {
      my_putchar('%');
      my_putchar(form[cpt]);
      return (1);
    }
  return (0);
}

void		mytab(void (**tab)(va_list ap))
{
  tab[0] = (void *)do_int;
  tab[1] = (void *)do_char;
  tab[2] = (void *)do_string;
  tab[3] = (void *)do_point;
  tab[4] = (void *)do_heXd;
  tab[5] = (void *)do_binary;
  tab[6] = (void *)do_unsign;
  tab[7] = (void *)do_octal;
  tab[8] = (void *)do_hexd;
  tab[9] = (void *)do_charoct;
  tab[10] = (void *)my_putkey;
}

void		my_printf(const char *form, ...)
{
  va_list	ap;
  void          (*tab[11])(va_list ap);
  int		cpt2;
  int		cpt;
  char		*atype;

  cpt = -1;
  atype = my_strdup("dcspXbuoxSk");
  mytab(tab);
  va_start(ap, form);
  while (form[++cpt] != '\0')
    {
      cpt2 = -1;
      if (form[cpt] == '%')
	{
	  while (atype[++cpt2] != '\0' && atype[cpt2 - 1] != form[cpt + 1])
	    if ((cpt2 = do_modulo(form, cpt, cpt2)) != -1)
	      if (atype[cpt2] == form[cpt + 1])
		(*tab[cpt2])(va_arg(ap, void *));
	  not_in(atype, form, ++cpt, cpt2);
	}
      else
	my_putchar(form[cpt]);
    }
  va_end(ap);
}
