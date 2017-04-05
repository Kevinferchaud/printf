/*
** do_myop2.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf/lib/my
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Sat Nov 19 13:46:04 2016 ferchaud kevin
** Last update Sat Nov 19 14:56:09 2016 ferchaud kevin
*/

#include "my.h"
#include <stdlib.h>

int     my_strlong(long a)
{
  int   cpt;

  cpt = 0;
  while (a / 10 > 0)
    {
      a = a / 10;
      cpt++;
    }
  return (cpt);
}

void            do_int(int a)
{
  my_put_nbr(a);
}

void            do_char(char a)
{
  my_putchar(a);
}

void            do_string(char *a)
{
  if (a == 0)
    my_putstr("(null)");
  else
    my_putstr(a);
}

void		do_unsign(unsigned int a)
{
  my_put_nbruns(a);
}
