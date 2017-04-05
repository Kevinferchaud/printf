/*
** do_myop.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Tue Nov 15 10:10:15 2016 ferchaud kevin
** Last update Sat Nov 19 17:25:06 2016 ferchaud kevin
*/

#include "my.h"
#include <stdlib.h>

void            do_point(int a)
{
  if (a < 0)
    a = 2147483648 + a;
  my_putstr("0x");
  do_hexd(a);
}

int		do_modulo(const char *form, int cpt, int cpt2)
{
  if (form[cpt + 1] == '%')
    {
      my_putchar('%');
      return (10);
    }
  else
    return (cpt2);
}

