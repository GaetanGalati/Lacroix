#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;//La lettre entrer par l'utilisateur
    int taille=0, x=0, y=0;//La taille, et les deux variable X et Y pour les boucles

    printf("Entrez un caractere");
    scanf("%c",&lettre);

    printf("Entrez une taille ");
    scanf("%d",&taille);

//Si jamais la taille est un nombre n�gatif, il sera "converti" en nombre positif.
    if (taille < 0) {
        taille == taille * -1; //Si jamais la taille est un nombre n�gatif, il sera "converti" en nombre positif.
    }

        for (x=0; x<=(taille) ; x++){//La boucle "for" des lignes, elle donne + 1 aux lignes
            y ==1;
            for (y=0; y <=(taille); y++){//La boucle "for" des colones, elle donne +1 aux colones

            if ((x==y) || ((x+y)-1)==taille)
            printf("%c", lettre);
            else printf(" "); }
            printf("\n");
            /*Par �xempe quand x=1 et y=1 (�tat de base) le programme �crira la lettre,
				puis la boucle des colones (y) augementera:
				x=1 et y=2 le programme ecrira alors un espace puis quand x+y-1 = taille
				il �crira a nouveau la lettre*/

            }
        printf("\n");

        }





