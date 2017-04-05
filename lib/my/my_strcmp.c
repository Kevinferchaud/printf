/*
** my_strcmp.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 16:10:07 2016 ferchaud kevin
** Last update Mon Oct 17 10:19:57 2016 ferchaud kevin
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	cpt;

  cpt = 0;
  while (s1[cpt] != '\0' && s2[cpt] != '\0')
    {
      if (s1[cpt] < s2[cpt])
	return (-1);
      if (s1[cpt] > s2[cpt])
	return (1);
      cpt++;
    }
  if (s1[cpt] == '\0' && s2[cpt] == '\0')
    return (0);
  if (s1[cpt] == '\0' && s2[cpt] != '\0')
    return (-1);
  else
    return (1);
}
