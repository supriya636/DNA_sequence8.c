#include <stdio.h>

int main()
{
    char dna[100];
    int i, count = 0;

    printf("Enter DNA sequence: ");
    scanf("%s", dna);

    for(i=0; dna[i]!='\0'; i++)
    {
        if(dna[i]=='G' || dna[i]=='C')
            count++;
    }

    printf("GC Content Count = %d\n", count);

    return 0;
}