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
    }

    printf("Cutting List:\n"); 
    for (int i = 0; i < num_pieces; i++) {
        int count = remaining_length / pieces[i].length;
        if (count > 0) {
            printf("%d @ %d = %d\n", count , pieces[i].length, count * pieces[i].value); 
            total_value += * pieces[i].value;
            remaining_length -= count * pieces[i].length;
        }
    }

    printf("Remainder: %d\n", remaining_length);
    printf("Value: %d\n", total_value);
} 