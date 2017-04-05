/*
** my_swap.c for quit in /home/kevin.ferchaud/tests
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Oct  6 09:46:31 2016 ferchaud kevin
** Last update Mon Oct 17 10:24:08 2016 ferchaud kevin
*/

#include "my.h"

int	my_swap(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
  my_putchar(*a);
  my_putchar(*b);
  return (0);
}
