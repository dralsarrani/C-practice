#include "rna_transcription.h"

char *to_rna(const char *dna){
    if (dna == NULL)
        return NULL;

    int len = 0;
    while (dna[len] != '\0'){
        len++;
    }

    char *rna = malloc(len + 1);

    for (int i=0; i<len; i++){
        
    switch (dna[i]){
            case 'A': rna[i] = 'U'; break;
            case 'G': rna[i] = 'C'; break;
            case 'C': rna[i] = 'G'; break;
            case 'T': rna[i] = 'A'; break;
            default: free(rna); return NULL;      
    }
    }

    rna[len] = '\0';
    return rna;

    
}