/*
** my_put_nbruns.c for emacs in /home/kevin.ferchaud/PSU_2016_my_printf
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Sat Nov 19 13:58:31 2016 ferchaud kevin
** Last update Sat Nov 19 14:33:48 2016 ferchaud kevin
*/

#include "my.h"

unsigned int     alapuissanceu(unsigned int puissance, unsigned int valeur)
{
  unsigned int   cpt;
  unsigned int   recup;

  cpt = 2;
  recup = valeur;
  while (cpt < puissance)
    {
      valeur = valeur * recup;
      cpt++;
    }
  return (valeur);
}

unsigned int     lalongueuru(unsigned int  nb)
{
  unsigned int   lng;

  lng = 0;
  while (nb > 0)
    {
      nb = nb / 10;
      lng++;
    }
  return (lng);
}

unsigned int     my_put_nbruns(unsigned int  nb)
{
  unsigned int   longueur;
  unsigned int   div;
  unsigned int   valeur;

  longueur = lalongueuru(nb);
  div = 0;
  if (nb < 0)
    {
      my_putchar(45);
      nb = nb * (-1);
      longueur = lalongueuru(nb);
    }
  while (div < longueur-1)
    {
      valeur = nb % (alapuissanceu((longueur + 1 - div), 10));
      valeur = valeur / (alapuissanceu((longueur - div), 10));
      my_putchar(48 + valeur);
      div++;
    }
  valeur = nb % 10;
  my_putchar(48 + valeur);
}
