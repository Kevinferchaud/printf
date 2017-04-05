/*
** my_strncmp.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 16:28:23 2016 ferchaud kevin
** Last update Mon Oct 17 10:22:54 2016 ferchaud kevin
*/

#include "my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	cpt;

  cpt = 0;
  while (cpt < n && *s1 != '\0' && *s2 != '\0')
    {
      if (s1[cpt] < s2[cpt])
	return (-1);
      if (s1[cpt] > s2[cpt])
	return (1);
      cpt++;
    }
  return (0);
}
