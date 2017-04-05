/*
** my_putchar.c for emacs in /home/kevin.ferchaud/tests/lib
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Oct 13 12:20:23 2016 ferchaud kevin
** Last update Mon Oct 17 10:16:32 2016 ferchaud kevin
*/

#include "my.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}
