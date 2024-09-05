#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char TITRES[20][30];
char AUTEUR[20][30];
float PRIX[20];
int QUNTT[20];
int nbrLivres = 0;
void ajouterLivre() {
    if (nbrLivres < 20) {
        printf("Titre du livre :");
      ///ou bien on peut utiliser puts(TITRES);
        scanf(" %[^\n]",TITRES[nbrLivres]);///scanf("%s",TITRES)OU BIEN %[^\n] 
        ///gets(TITRES);
        ///printf("%s\n",TITRES);
        printf("Auteur du livre :");
        scanf(" %[^\n]",AUTEUR[nbrLivres]);
        printf("Prix du livre :");
        scanf("%f",&PRIX[nbrLivres]);
        printf("Quantité en stock :");
        scanf("%d",&QUNTT[nbrLivres]);
        nbrLivres++;
        printf("VOUS AVEZ AJOUTER UN LIVRE");
    } else 
        printf("Stock plein, impossible d'ajouter un livre"); 
}
void afficherLivres() {
    printf("les livres disponibles sont :");
    for (int i = 0; i < nbrLivres; i++) {
        printf("Titre :%s, Auteur :%s, Prix :%2f, Quantité :%d\n", 
               TITRES[i], AUTEUR[i], PRIX[i], QUNTT[i]);
    }
}
void Chercherunlivre()
{
char titre[30];
    printf("Entrez le titre du livre à mettre à jour :");
    scanf(" %s",titre);
}
void MettreAjrQuantite() {
    for (int i = 0; i < nbrLivres; i++) {
        if (strcmp(TITRES[i], titre) == 0) {
            printf("Quantité actuelle : %d\n", QUNTT[i]);
            printf("Entrez une nouvelle quantité : ");
            scanf("%d", &QUNTT[i]);
            printf("Quantité mise à jour avec succès");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}void AffNbrTotaleDeLlivres()
{
    int nbrtotal=0;
    for(int i=0 ; i<nbrLivres;i++)
    {
        nbrtotal+=QUNTT[i];
    }
    printf("le nbr  totale de ce livre en stock:%d",nbrtotal);
}
int main(){
    int choix;
    do
    {
      printf("menu du bibliotheque :\n");
      printf("1-Ajouter un livre au stock\n");
      printf("2-Mettre à jour la quantité d'un livre ET Rechercher un livre par son titre\n");
      printf("3-Ajouter un livre au stock\n");
      printf("4-Afficher le nombre total de livres en stock\n");
      printf("quelle est votre choix ??");
      scanf("%d",&choix);
    switch (choix)
    {
    case 1 :
        ajouterLivre();
        break;
    case 2 :
        MettreAjrQuantite();
        break;
        case 3:
        MettreAjrQuantite();
        break;
    case 4 :
    AffNbrTotaleDeLlivres();
    break;
    default:
    printf("votre choix n exixte pas ");
        break;
    }
    } while (choix!=0);
    return 0;
}