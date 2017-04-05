/*
** my_strcat.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Wed Oct 12 11:34:10 2016 ferchaud kevin
** Last update Mon Oct 17 10:37:49 2016 ferchaud kevin
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	cpt;
  int	cpt2;

  cpt = 0;
  cpt2 = 0;
  while (dest[cpt] != '\0')
    cpt++;
  while (src[cpt2] != '\0')
    {
      dest[cpt + cpt2] = src[cpt2];
      cpt2++;
    }
  dest[cpt + cpt2] = '\0';
  return (dest);
}
