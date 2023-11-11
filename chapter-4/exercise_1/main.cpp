#include <iostream>

int main(void){
  typedef enum chessboard{king, queen, bishop, knight, rook, pawn, empty}chessboard_array[8][8];
  std::cout<<"The size of chessboard in bytes is : "<<sizeof(chessboard_array)<<std::endl;
  return 0;
}
