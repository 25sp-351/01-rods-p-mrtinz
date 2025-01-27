#include <stdio.h>
#include <stdlib.h>

#define MAX_PIECES 100

typedef struct {
    int length; 
    int value; 
} Piece; 

int main (int argc, char * argv[]){
    if (argc != 2) {
        printf ("Usage: %s <rod_length>\n", argv[0]);
        return 1; 
    }

    int rod_length = atoi(argv[1]);
    if (rod_length <= 0) {
        printf ("Rod length must be a positive integer\n");
        return 1; 
    }

    Piece pieces[MAX_PIECES]; 
    int num_pieces = 0; 
    int remaining_length = rod_length; 
    int total_value = 0; 

    while (scanf("%d, %d", &pieces[num_pieces].length, &pieces[num_pieces].value) == 2){
        num_pieces++; 
        if (num_pieces >= MAX_PIECES) {
            printf("Too many pieces, max allowed is %d\n", MAX_PIECES);
            return 1; 
        }
    }

    printf("Cutting List:\n"); 
    
    for (int i = 0; i < num_pieces; i++) {
        
        if (pieces[i].length > rod_length) {
            continue;
        }
    }

    printf("Remainder: %d\n", remaining_length);
    printf("Value: %d\n", total_value);
} 