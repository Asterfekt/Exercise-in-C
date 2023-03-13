#include "stdio.h"
#define size 20
// Najdłuższy wspólny podłańcuch

int main()
{
    int a = 0;
    char word1[size];
    char word2[size];
    scanf("%s", word1);
    scanf("%s", word2);

    for (int i = 0; i < size; i++)
    {
        if ((word1[i] || word2[i]) == 0)
        {
            i = size;
        }

        for (int k = 0; k < size; k++)
        {
            if (word1[i] == word2[k])
            {
                a++;
                k = size;
            }
        }
    }

    printf("%d", a);

    return 0;
}