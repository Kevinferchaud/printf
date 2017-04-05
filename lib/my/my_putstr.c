/*
** my_putstr.c for emacs in /home/kevin.ferchaud/tests
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Oct  6 10:50:55 2016 ferchaud kevin
** Last update Mon Oct 17 11:25:52 2016 ferchaud kevin
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	cpt;

  cpt = 0;
  while (cpt < 9999)
    {
      if (str[cpt] == '\0')
	{
	  cpt = 9999;
	}
      else
	{
	  my_putchar(str[cpt]);
	  cpt++;
	}
    }
}
