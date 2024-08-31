/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*#include <stdio.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
*/

//'\0' caracter null string.h - %s scanf para strings não precisa
//do &     "%[^\n]"
#include <stdio.h>

int main(){
    int vetor[3][2] = {{1, 2}, {3, 4}, {5,6}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }
    return 0;
}
