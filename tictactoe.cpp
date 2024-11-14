#include <iostream>
using namespace std;
/*
int board[25] = {
    3,3,3,3,3,
    3,0,0,0,3,
    3,0,0,0,3,
    3,0,0,0,3,
    3,3,3,3,3

};
*/
enum {NOUGHTS , CROSSES , BORDER , EMPTY };
enum { HUMANWIN, COMPWIN, DRAW };
const int NOUGHTS = 1;
const int CROSSES = 2;
const int BORDER = 3;
const int EMPTY = 0;

const int ConvertTo25[9] = {
        6,7,8,
        11,12,13,
        16,17,18
};

void InitializeBoard(int *board){
    int i = 0;
    for (i = 0; i < 25; i++){
        board[i] = BORDER;
    }
    for (i = 0; i < 9; i++){
        board[ConvertTo25[i]] = EMPTY;
}
}
void PrintBoard(const int *board){
    int index = 0;
    printf("\n Board: \n");
    for (index = 0; index < 25; index++){
        
    if(index != 0 && index%5==0 ){
        printf("\n");
    }
    printf("%4d", board[index]);
    };
    printf("\n");
}
int main(){
int board[25];
InitializeBoard(&board[0]);
PrintBoard(&board[0]);
return 0;
}