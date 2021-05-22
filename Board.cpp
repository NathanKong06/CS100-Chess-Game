#include "Board.h"
#include "Piece.h"
#include <sstream>

Board::Board() : ChessObject('w', "board") {}

void Board::setPosition(const std::vector<std::vector<Piece*>>& pos) {
    this->pos = pos;
}

bool Board::isInCheck() const {
    return false;
}

std::string Board::generateFEN() const {
    return "";
}

std::vector<int> Board::findVPos(const std::string &pos) const {
    std::vector<int> posit(2);
    std::string num = pos.substr(1,2);
    std::istringstream g(num);
    int n = 0;
    g >> n;
    posit[0] = n;
    std::string post = pos.substr(0,1);
    if(post == "a"|| post == "A"){
        posit[1] = 0;
    }
    else if(post == "b" || post == "B"){
        posit[1] = 1;
    }
    else if(post == "c" || post == "C"){
        posit[1] = 2;
    }
    else if(post == "d" || post == "D"){
        posit[1] = 3;
    }
    else if(post == "e" || post == "E"){
        posit[1] = 4;
    }
    else if(post == "f" || post == "F"){
        posit[1] = 5;
    }
    else if(post == "g" || post == "G"){
        posit[1] = 6;
    }
    else if(post == "h" || post == "H"){
        posit[1] = 7;
    }
    return posit;
}

Piece* Board::getPieceAt(const std::string &position) const {
    std::vector<int> vPos = findVPos(position);
    return pos.at(vPos.at(0)).at(vPos.at(1));
}

void Board::printBoard() const {
    std::cout << "   =====================================" << std::endl;
    int num = 9;
        for(int i = 0; i < pos.size(); i++){     
            std::cout << num-1 << "  ";
            num = num-1;
            std::cout << "|   ";
            for(int j = 0; j < pos.at(i).size(); j++){
                if (pos.at(i).at(j)) {
                    std::cout << pos.at(i).at(j)->getLabel() << "   ";
                }
            }
            std::cout << "|" << std::endl <<"   |                                   |"<< std::endl;
        }
        std::cout << "   ====================================="<< std::endl;
        std::cout << "       A   B   C   D   E   F   G   H" << std::endl;
}
