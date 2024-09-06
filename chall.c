#include <stdio.h>
int main() {
    int i, j, nondoub, T[5] = {2, 4, 5, 2, 2}, copie[5];
    int taillecopie = 0;
    printf("le 1er tableau :\n");
    for(i = 0; i < 5; i++) {
        printf("T[%d] = %d\n", i, T[i]);
    }
    for(i = 0; i < 5; i++) {
        nondoub = 1;
        for(j = 0; j < taillecopie; j++) {
            if(T[i] == copie[j]) {
               nondoub = 0;  
                break; 
            }
        }
        if(nondoub) {
            copie[taillecopie] = T[i];
           taillecopie++;  
        }
    }
    printf("le tabeau finale :\n");
    for(i = 0; i < taillecopie; i++) {
        printf("copie[%d] = %d\n", i, copie[i]);
    }
    return 0;
}
