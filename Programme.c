#include <stdio.h>

int main()
{
    int nb;
    int i;
    printf("Rentrez un nombre : ");
    scanf("%d",&nb);
    for (i = 0; i < nb; i++)
        printf("Salut mec!\n");
    printf("Il a dit %d fois, bonjour !", nb);
    return 0; 
}
