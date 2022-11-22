#include <stdlib.h>
#include <stdio.h>

#define PSCANF(textMessage, formatReponse, adresseDonnee) \
    {                                                     \
        printf(textMessage);                              \
        scanf(formatReponse, adresseDonnee);              \
    }

int main(int argc, char const *argv[])
{
    char monChar = 'a';
    PSCANF("entrez un char : ", "%c", &monChar);
    printf("votre char est : %c", monChar);

    return 0;
}
