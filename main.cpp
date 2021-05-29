#include "Board.h"

int main() {
    Board board;
     std::vector<std::vector<char>> sp = {
        { '0', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
        { 'P', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
        { '0', '0', '0', '0', '0', '0', '0', '0' },
        { '0', '0', '0', '0', '0', '0', '0', '0' },
        { '0', '0', '0', '0', '0', '0', '0', '0' },
        { '0', '0', '0', '0', '0', '0', '0', '0' },
        { '0', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
        { 'R', 'N', 'B', '0', 'K', 'B', 'N', 'R' }
    };
    board.setPosition(sp);
    board.setColor('w');

    Piece* p = board.getPieceAt("a7");
    std::vector<std::string> m = p->getLegalMoves();
    for(int i = 0; i < m.size(); i++){
        std::cout << m[i] << std::endl;
    }
    if(board.updateBoard("a7", "b8n")){
        std::cout << board.printBoard();
    }
    else{
	std::cout << "fail"<< std::endl;
    }
    
    return 0;
}
