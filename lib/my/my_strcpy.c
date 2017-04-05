/*
** my_strcpy.c for emacs in /home/kevin.ferchaud/CPool_Day06
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Oct 10 09:11:22 2016 ferchaud kevin
** Last update Mon Oct 17 10:34:19 2016 ferchaud kevin
*/

#include "my.h"

char	*my_strcpy(char *dest, char *src)
{
  while (*src != '\0')
    {
      *dest = *src;
      src++;
      dest++;
    }
  return (dest);
}
