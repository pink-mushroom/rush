#include "ft_putchar.c"
#include<unistd.h>

//Cette premiere fonction row_gen permet de generer les ligne , elle prend comme arguments le numer de la ligne a generer "r_nb" , la largeur du schema "x" et la hauteur "y"
void row_gen(int r_nb, int x, int y)
{
    int i ;
    i = 1;//on initialise ici un entier i

    while (i <= x)//dans la boucle , l'entier i parcours les positions de 1 a x
    {
        if (r_nb == 1 || r_nb == y)//si on genere la premiere ou la derniere ligne le pattern commence par A , se termine par C et contient des B au milieu
            ft_putchar(i == 1 ? 'A' : (i == x ? 'C' : 'B'));
        else //sinon les autres lignes commencent et se terminent par B avec des espaces au milieu
            ft_putchar(i == 1 || i == x ? 'B' : ' ');
        i++;
    }
}

//rush est la fonction principale qui permet de generer le schema
void rush(int x,int y)
{
    int i;
    i = 1;
    while (i <= y)//dans la boucle l'entier i parcours les lignes
    {
        row_gen(i,x,y);
        ft_putchar('\n');
        i++;
    }
}
