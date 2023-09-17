/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Réaliser un programme qui :
• saisit un nombre n jusqu'à ce qu'il soit entre 1 et 100 inclus
• appelle une fonction décompte
La fonction décompte doit recevoir la valeur de n comme paramètre et afficher le décompte.
Le programme doit être conforme aux exemples d'exécution ci-dessous :
Entrer un nombre entre 1 et 100 : 13
Decompte : 13 12 11 10 9 8 7 6 5 4 3 2 1 0
Entrer un nombre entre 1 et 100 : 102
Entrer un nombre entre 1 et 100 : -8
Entrer un nombre entre 1 et 100 : 0
Entrer un nombre entre 1 et 100 : 100
Decompte : 100 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78
 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 5
1 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25
24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 */

#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, decompte;

    printf("Donner un nombre positif compris entre 1 et 100 :\n");
    scanf("%d", &n);
    printf("Décompte : ");
   
    if(n >= 0 &&  n <= 100)
    {
       while(n>=0)
        {    printf("%d ", n);
            n--;
        } 
    }
    return 0;
}
