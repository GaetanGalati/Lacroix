#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
    char lettre2;
     int Longueur=0;
     int largeur=0;
     int p=1;
     int m=1;

    printf("Entrez la lettre 1\n");
     scanf("%c",&lettre);
    fflush(stdin);
    printf("Entrez la lettre2\n");
     scanf("%c",&lettre2);

     printf("Entrez la Longueur\n");
     scanf("\n%d",&Longueur);

     printf("Entrez la largeur\n");
     scanf("\n%d",&largeur);



     for (p=1;p<=largeur;p++)
        {
            for(m=1;m<=Longueur;m++)
               {
                   if(p==1||p==Longueur || m==1 || m==largeur) {
                       printf("%c",lettre);
                       }
                       else
                        {
                            printf("%c",lettre2);
                        }
                }
      printf("\n");

        }
      return 0;
      }



