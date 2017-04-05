/*
** my_revstr.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 10:13:02 2016 ferchaud kevin
** Last update Mon Oct 24 16:03:39 2016 ferchaud kevin
*/

#include "my.h"

char	*my_revstr(char *str)
{
  int	cpt;
  int	cpt2;
  char	stock;

  cpt = 0;
  cpt2 = my_strlen(str) - 1;
  while (cpt < my_strlen(str) / 2)
    {
      stock = str[cpt];
      str[cpt] = str[cpt2];
      str[cpt2] = stock;
      cpt++;
      cpt2--;
    }
  return (str);
}
