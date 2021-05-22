#include "Piece.h"

Piece::Piece(Board* b, char c, const std::string& l) : ChessObject(c, l), chessBoard(b) {}

Pawn::Pawn(Board* b, char c, const std::string& l) : Piece(b, c, l) {}

bool Pawn::playMove(const std::string& move) {
    return true;
}

std::vector<std::string>* Pawn::getLegalMoves() {
    return new std::vector<std::string>();
}

Knight::Knight(Board* b, char c, const std::string& l) : Piece(b, c, l) {}

bool Knight::playMove(const std::string& move) {
    return true;
}

std::vector<std::string>* Knight::getLegalMoves() {
    return new std::vector<std::string>();
}

Bishop::Bishop(Board* b, char c, const std::string& l) : Piece(b, c, l) {}

bool Bishop::playMove(const std::string& move) {
    return true;
}

std::vector<std::string>* Bishop::getLegalMoves() {
    return new std::vector<std::string>();
}

Rook::Rook(Board* b, char c, const std::string& l) : Piece(b, c, l) {}

bool Rook::playMove(const std::string& move) {
    return true;
}

std::vector<std::string>* Rook::getLegalMoves() {
    return new std::vector<std::string>();
}

Queen::Queen(Board* b, char c, const std::string& l) : Piece(b, c, l) {}

bool Queen::playMove(const std::string& move) {
    return true;
}

std::vector<std::string>* Queen::getLegalMoves() {
    return new std::vector<std::string>();
}

King::King(Board* b, char c, const std::string& l) : Piece(b, c, l) {}

bool King::playMove(const std::string& move) {
    return true;
}

std::vector<std::string>* King::getLegalMoves() {
    return new std::vector<std::string>();
}
