#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc < 3)
    {
        printf("Wrong usage, at least 2 parameters expected:");
    }
    else
    {
        int sum = 0;
        short int flagArgCorrectes = 1;

        for (int i = 1; i < argc; i++)
        {
            int entier_i = atoi(argv[i]);
            if (entier_i == 0)
            {
                flagArgCorrectes = 0;
                printf("error with int %d", i);
            }
            else
            {
                sum += entier_i;
            }
        }
        if (flagArgCorrectes)
        {
            printf("le résultat est %d", sum);
        }
    }
    return 0;
}
