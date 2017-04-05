/*
** main.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Nov 17 17:36:13 2016 ferchaud kevin
** Last update Wed Apr  5 14:58:53 2017 ferchaud kevin
*/

#include <stdio.h>
#include "my.h"
#include <string.h>
#include <sys/ioctl.h>
#include <ncurses/curses.h>
#include <term.h>
#include <termios.h>

int	main()
{
  my_printf("my_printf : %s\n", "Ceci est un test");
  return (0);
}
