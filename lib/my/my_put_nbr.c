/*
** my_put_nbr.c for emacs in /home/kevin.ferchaud/CPool_Day03
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Wed Oct  5 16:20:50 2016 ferchaud kevin
** Last update Mon Oct 17 11:24:55 2016 ferchaud kevin
*/

#include "my.h"

int	alapuissance(int puissance, int	valeur)
{
  int	cpt;
  int	recup;

  cpt = 2;
  recup = valeur;
  while (cpt < puissance)
    {
      valeur = valeur * recup;
      cpt++;
    }
  return (valeur);
}

int	lalongueur(int	nb)
{
  int	lng;

  lng = 0;
  while (nb > 0)
    {
      nb = nb / 10;
      lng++;
    }
  return (lng);
}

int	my_put_nbr(int	nb)
{
  int	longueur;
  int	div;
  int	valeur;

  longueur = lalongueur(nb);
  div = 0;
  if (nb < 0)
    {
      my_putchar(45);
      nb = nb * (-1);
      longueur = lalongueur(nb);
    }
  if (raccourcir(longueur, nb) == 1)
    {
      div++;
    }
  while (div < longueur-1)
    {
      valeur = nb % (alapuissance((longueur + 1 - div), 10));
      valeur = valeur / (alapuissance((longueur - div), 10));
      my_putchar(48 + valeur);
      div++;
    }
  valeur = nb % 10;
  my_putchar(48 + valeur);
}

int	raccourcir(int	longueur, int	nombre)
{
  if (longueur == 10)
    {
      nombre = nombre / 1000000000;
      my_putchar(48 + nombre);
      return (1);
    }
  return (0);
}
