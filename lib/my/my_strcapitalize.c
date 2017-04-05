/*
** my_strcapitalize.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 17:50:13 2016 ferchaud kevin
** Last update Mon Oct 17 10:34:05 2016 ferchaud kevin
*/

#include "my.h"

char	*my_strcapitalize(char *str)
{
  int	cpt;

  cpt = 1;
  while (str[cpt] != '\0')
    {
      if (str[cpt - 1] == ' ' && str[cpt] != '\0')
	if ('a' <= str[cpt] && 'z' >= str[cpt])
	  str[cpt] = str[cpt] - 32;
      if (str[cpt - 1] == '+' && str[cpt] != '\0')
	if ('a' <= str[cpt] && 'z' >= str[cpt])
	  str[cpt] = str[cpt] - 32;
      if (str[cpt - 1] == '-' && str[cpt] != '\0')
	if ('a' <= str[cpt] && 'z' >= str[cpt])
	  str[cpt] = str[cpt] - 32;
      cpt++;
    }
  return (str);
}
