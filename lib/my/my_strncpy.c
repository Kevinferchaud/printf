/*
** my_strncpy.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 09:48:07 2016 ferchaud kevin
** Last update Mon Oct 17 11:09:24 2016 ferchaud kevin
*/

#include "my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	cpt;

  cpt = 0;
  while (cpt < n && *src != '\0')
    {
      *dest = *src;
      dest++;
      src++;
      cpt++;
    }
  if (cpt == n && *src != '\0')
    {
      dest[cpt] = '\0';
    }
  return (dest);
}
