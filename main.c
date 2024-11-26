#include<stdio.h>
#include"potenze.h"


int main(void){
    char operazione;
    int risultato, valore;
    printf("[Q]uadrato\n");
    printf("[C]ubo\n");
    scanf("%c", &operazione);
    printf("inserisci il valore da elaborare\n");
    scanf("%d" &valore);
     switch(operazione){
        case 'q':
        risultato = quadsrato(valore);
        printf("%d * %d *%d = %d\n",valore, valore, risultato);
        break;
        case 'c' :
        risultato = cubo(valore);
        prinf("%d * %d = %d\n",valore, valore, risultato);
        break;
        default;
        printf("Operazione non riconosciuta\n");
     }


    return 0;
}