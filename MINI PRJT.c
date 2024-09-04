#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int max_livres=20 ;
char TITRES[max_livres][30];
char AUTEUR[max_livres][30];
float PRIX[max_livres];
int QUNTT[max_livres];
int nbrLivres = 0;
void ajouterLivre() {
    if (nombreLivres < max_livres) {
        printf("Titre du livre : ");
        scanf(" %s",TITRES[nbrLivres]);
        printf("Auteur du livre : ");
        scanf(" %s",AUTEUR[nbrLivres]);
        printf("Prix du livre : ");
        scanf("%f", &PRIX[nbrLivres]);
        printf("Quantité en stock : ");
        scanf("%d", &QUNTT[nbrLivres]);
        nombreLivres++;
        printf("VOUS AVEZ AJOUTER UN LIVRE");
    } else 
        printf("Stock plein, impossible d'ajouter un livre);
    
}
void afficherLivres() {
    printf("les livres disponibles sont :");
    for (int i = 0; i < nbrLivres; i++) {
        printf("Titre : %s, Auteur : %s, Prix : %.2f, Quantité : %d\n", 
               TITRES[i], AUTEUR[i], PRIX[i], QUNTT[i]);
    }
}
void MettreAjrQuantite() {
    char titre[30];
    printf("Entrez le titre du livre à mettre à jour : ");
    scanf(" %s", titre);
    for (int i = 0; i < nbrLivres; i++) {
        if (strcmp(TITRES[i], titre) == 0) {
            printf("Quantité actuelle : %d\n", QUNTT[i]);
            printf("Entrez une nouvelle quantité : ");
            scanf("%d", &QUNTT[i]);
            printf("Quantité mise à jour avec succès");
            return;
        }
    }
    printf("Livre non trouvé.");
}