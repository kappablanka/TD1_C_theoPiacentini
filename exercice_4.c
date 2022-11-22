#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char char1 = 'a';
    char char2 = 'a';
    char char3 = 'a';
    printf("Entrez 3 chars : ");
    scanf("%c %c %c", &char1, &char2, &char3);
    printf("vos 3 chars sont : %c %c %c ", char1, char2, char3);
    return 0;
}
