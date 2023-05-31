#include <string.h>
#include <stdlib.h>

#define MAX_UNKODIERT 3000
#define MAX_KODIERT 1000
#define MAX_GENOM 1000

int main(void)
{
    char* genom;
    char* suchGen;
    char* genKodiert;
    genom = malloc(3000*sizeof(unsigned char));
    suchGen = malloc(3000*sizeof(unsigned char));
    genKodiert = malloc(1000*sizeof(unsigned char));

    FILE *fp;
    fp = fopen("genom.dat", "rb");
        
    printf("Geben Sie die DNA-Sequenz des Gens ein: ");
    
    getDNASequence(suchGen);
    int anzahlBasen = strlen(suchGen);
    int index_genKodiert = 0;
    
    for (int i = 0; i < anzahlBasen; i += 3, index_genKodiert++)
    {
        char tmp[3] = {suchGen[i], suchGen[i + 1], suchGen[i + 2]};
        genKodiert[index_genKodiert] = encode(tmp);
    }

    int lenGenKodiertInt = strlen(genKodiert);
    
    fread(genom, sizeof(int), MAX_GENOM, fp);
    
    int gefunden = 0;
    if (gefunden == 0){
        for (int i = 0; i < MAX_GENOM && !gefunden; i++)
        {
            // Verstehe leider nicht warum die String-Such-Funktion AGTCTA nicht findet, die eigene Suchfunktion aber schon. 
            // In VS-Code passt eigentlich alles, ist schwer zu debuggen wenn man nicht weiá wie die genom.dat aussieht. 
            // if (genKodiert[0] == 56 && genKodiert[1] == 13){
            //     gefunden = 0;
            //     break;
            // }
            if (genom[i] == genKodiert[0])
            {
                for (int k = 0; k < lenGenKodiertInt; k++)
                {
                    if (genom[i] != genKodiert[k])
                    {
                        break;
                    }
                    else
                    {
                        i++;
                        if (k == lenGenKodiertInt-1)
                        {
                            // Wenn es das letzte kodierte Codon ist, das auch bereinstimmt,
                            // dann ist das Gen gefunden
                            gefunden = 1;
                        }
                    }
                }
            }
        }
    }
    if (gefunden == 1)
    {
        printf("-Gen gefunden!");
    }
    else
    {
        printf("-Gen nicht gefunden!");
    }
    getch();
    return 0;
}