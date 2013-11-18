#include <stdio.h>

	int main(){
     int length = 13;

    char string[length];
    scanf("%s", string);
    int change;
    int i, k;

    char exam[13] = "23456789TJQKA";

    for (i = 0; i < length; i++)
    {
        for (k = i; k < length; k++)
        {
            while (string[k] == exam[i])
            {
                change=string[k];
                string[k]=string[i];
                string[i]=change;
                break;
            }
        }
    }
    printf("%s\n", string);
    return 0;
}
