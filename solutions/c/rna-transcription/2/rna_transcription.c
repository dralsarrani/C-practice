#include "rna_transcription.h"

char *to_rna(const char *dna){
    if (!dna) return NULL;

    int len = 0;
    while (dna[len] != '\0') len++;

    char *rna = malloc(len + 1);
    if (!rna) return NULL;

    static const char map[256] = {
        ['A'] = 'U',
        ['C'] = 'G',
        ['G'] = 'C',
        ['T'] = 'A'
    };

    for (int i=0; i<len; i++){
        char c = map[(unsigned char)dna[i]]; 
        if(c == 0){
            free(rna);
            return NULL;
        }
        rna[i] = c;
    }

    rna[len] = '\0';
    return rna; 
}