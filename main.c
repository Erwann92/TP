/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//Réaliser un programme qui :
// saisit un nombre n (on suppose qu'il sera positif)
// affiche le nombre saisi
// affiche un décompte de la valeur n jusqu'à 0
//Le programme doit être conforme à l'exemple d'exécution ci-dessous :
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int p=0;
    
    printf("Donner un un nombre positif : ");
    scanf("%d", &n);
    printf("Vous avez saisi : %d\n", n);
    printf("Décompte : ");
   
    while(n >= 0)
    {
        printf("%d ", n);
        n--;
    }
    return 0;
}

