/*
** my_strncat.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Wed Oct 12 12:15:26 2016 ferchaud kevin
** Last update Mon Oct 17 10:35:59 2016 ferchaud kevin
*/

#include "my.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	cpt;
  int	cpt2;

  cpt = 0;
  cpt2 = 0;
  while (dest[cpt] != '\0')
    cpt++;
  while (cpt2 < nb && src[cpt2] != '\0')
    {
      dest[cpt + cpt2] = src[cpt2];
      cpt2++;
    }
  dest[cpt + cpt2] = '\0';
  return (dest);
}
