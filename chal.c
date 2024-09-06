#include <stdio.h>

int main() {
    int i, j, estUnique, T[5] = {1, 3, 4, 4, 6}, copie[5];
    int tailleUnique = 0; // Indique la taille du tableau copie (initialement vide)

    printf("Tableau original :\n");
    for(i = 0; i < 5; i++) {
        printf("T[%d] = %d\n", i, T[i]);
    }

    // Boucle pour ajouter les éléments uniques au tableau copie
    for(i = 0; i < 5; i++) {
        estUnique = 1;  // On suppose que l'élément est unique au début

        // Vérifier si l'élément T[i] est déjà présent dans le tableau copie
        for(j = 0; j < tailleUnique; j++) {
            if(T[i] == copie[j]) {
                estUnique = 0;  // Si on trouve un doublon, on change estUnique
                break;  // On arrête la boucle intérieure dès qu'on trouve un doublon
            }
        }

        // Si l'élément est unique, on l'ajoute à copie
        if(estUnique) {
            copie[tailleUnique] = T[i];
            tailleUnique++;  // On augmente la taille du tableau copie
        }
    }

    // Affichage du tableau sans doublons
    printf("\nTableau sans doublons :\n");
    for(i = 0; i < tailleUnique; i++) {
        printf("copie[%d] = %d\n", i, copie[i]);
    }

    return 0;
}
