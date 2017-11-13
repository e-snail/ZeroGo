#include "GoChess.h"


GoChess::GoChess() : chessType(BLANK)
{
}

GoChess::~GoChess()
{

}

ChessType GoChess::getChessType() const {
    return chessType;
}
