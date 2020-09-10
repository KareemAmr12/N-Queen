#include "check.h"
#include "print.h"
#include "solve.h"
#define N 8
bool check() {
   int board[N][N];
   for(int i = 0; i<N; i++)
   for(int j = 0; j<N; j++)
   board[i][j] = 0; //set all elements to 0
   if ( solve(board, 0) == false ) { //starting from 0th column
      cout << "Solution does not exist";
      return false;
   }
   print(board);
   return true;
}



