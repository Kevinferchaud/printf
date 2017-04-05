/*
** my_strlen.c for emacs in /home/kevin.ferchaud/tests
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Oct  6 12:13:47 2016 ferchaud kevin
** Last update Mon Oct 17 10:22:24 2016 ferchaud kevin
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	cpt;

  cpt = 0;
  while (str[cpt] != '\0')
    {
      cpt++;
    }
  return (cpt);
}
