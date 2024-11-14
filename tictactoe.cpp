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

const int NOUGHTS = 1;
const int CROSSES = 2;
const int BORDER = 3;
const int empty = 0;

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
        board[i] = BORDER;
}
}
int main(){


}