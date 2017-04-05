/*
** my_putkey.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf/lib/my
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Fri Mar 10 14:01:28 2017 ferchaud kevin
** Last update Fri Mar 10 14:19:11 2017 ferchaud kevin
*/

#include "my.h"

void	my_putkey(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == 27)
	my_putstr("^E");
      else
	if (str[i] == ' ')
	  my_putstr("(space)");
	else
	  my_putchar(str[i]);
      i++;
    }
}
