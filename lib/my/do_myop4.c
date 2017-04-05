/*
** do_myop4.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Sat Nov 19 14:04:18 2016 ferchaud kevin
** Last update Sat Nov 19 15:37:17 2016 ferchaud kevin
*/

#include "my.h"
#include <stdlib.h>

int	do_octal(int a)
{
  char          *hexa;
  char          *stock;
  int           cpt;

  cpt = 0;
  if ((stock = malloc((a + 1) * sizeof(char))) == NULL)
    return (84);
  if (a == 0)
    {
      my_put_nbr(0);
      return (0);
    }
  hexa = my_strdup("01234567");
  while (a > 0)
    {
      stock[cpt++] = hexa[a%8];
      a /= 8;
    }
  stock[cpt] = '\0';
  my_revstr(stock);
  my_putstr(stock);
  return (0);
}

void		aff_stock(char *stock)
{
  my_revstr(stock);
  if (my_strlen(stock) == 1)
    my_putstr("\\00");
  if (my_strlen(stock) == 2)
    my_putstr("\\0");
  if (my_strlen(stock) == 3)
    my_putstr("\\");
  my_putstr(stock);
}

void		do_mywhilech(int b, char *stock, int cpt2, char *hexa)
{
  while (b > 0)
    {
      stock[cpt2++] = hexa[b%8];
      b /= 8;
    }
}

int		do_charoct(char *a)
{
  int		cpt;
  int		cpt2;
  char          *hexa;
  char          *stock;
  int		b;

  cpt = -1;
  hexa = my_strdup("01234567");
  while (a[++cpt] != '\0')
    {
      if (a[cpt] < 32 || a[cpt] >= 127)
	{
	  b = a[cpt];
	  if ((stock = malloc((b + 1) * sizeof(char))) == NULL)
	    return (84);
	  cpt2 = 0;
	  do_mywhilech(b, stock, cpt2, hexa);
	  stock[cpt] = '\0';
	  aff_stock(stock);
	}
      else
	my_putchar(a[cpt]);
    }
}
