/*
** my_strstr.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 14:03:33 2016 ferchaud kevin
** Last update Mon Oct 17 10:23:49 2016 ferchaud kevin
*/

#include "my.h"

char	*my_strstr(char *str, char *to_find)
{
  int	cpt;
  int	cpt2;
  int	nbocc;

  cpt = 0;
  cpt2 = 0;
  while (str[cpt] != '\0' && to_find[cpt2] != '\0')
    {
      if (str[cpt] == to_find[cpt2])
	{
	  if (cpt2 == 0)
	    nbocc = cpt;
	  cpt2++;
	}
      else
	{
	  cpt = cpt - cpt2;
	  cpt2 = 0;
	}
      cpt++;
    }
  if (to_find[cpt] == '\0' && cpt2 != 0)
    return (&str[nbocc]);
  else
    return ('\0');
}
