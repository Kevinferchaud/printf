/*
** do_myop3.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf/lib/my
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Sat Nov 19 13:47:58 2016 ferchaud kevin
** Last update Wed Apr  5 14:57:51 2017 ferchaud kevin
*/

#include "my.h"
#include <stdlib.h>

int             my_intlen(int a)
{
  int           cpt;

  cpt = 1;
  while ((a = a / 10) > 0)
    cpt++;
  return (cpt);
}

int             my_intlenunsign(unsigned int a)
{
  int           cpt;

  cpt = 1;
  while ((a = a / 10) > 0)
    cpt++;
  return (cpt);
}

int            do_heXd(int a)
{
  char          *hexa;
  char          *stock;
  int           cpt;

  cpt = 0;
  if ((stock = malloc((my_intlen(a) + 1) * sizeof(char))) == NULL)
    return (84);
  if (a == 0)
    {
      my_put_nbr(0);
      return (0);
    }
  hexa = my_strdup("0123456789ABCDEF");
  while (a > 0)
    {
      stock[cpt++] = hexa[a%16];
      a /= 16;
    }
  stock[cpt] = '\0';
  my_revstr(stock);
  my_putstr(stock);
  return (0);
}

int            do_hexd(int a)
{
  char          *hexa;
  char          *stock;
  int           cpt;

  cpt = 0;
  if ((stock = malloc((my_intlen(a) + 1) * sizeof(char))) == NULL)
    return (84);
  if (a == 0)
    {
      my_put_nbr(0);
      return (0);
    }
  hexa = my_strdup("0123456789abcdef");
  while (a > 0)
    {
      stock[cpt++] = hexa[a%16];
      a /= 16;
    }
  stock[cpt] = '\0';
  my_revstr(stock);
  my_putstr(stock);
  return (0);
}

int     do_binary(unsigned int a)
{
  char          *hexa;
  char          *stock;
  int           cpt;

  cpt = 0;
  if ((stock = malloc((my_intlenunsign(a) + 1) * sizeof(char))) == NULL)
    return (84);
  if (a == 0)
    return (0);
  hexa = my_strdup("01");
  while (a > 0)
    {
      stock[cpt++] = hexa[a%2];
      a /= 2;
    }
  stock[cpt] = '\0';
  my_revstr(stock);
  my_putstr(stock);
  return (0);
}
