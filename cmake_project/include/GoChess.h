#ifndef GOCHESS_H
#define GOCHESS_H

static const char * EnumChessTypeName[] = {"BLACK", "BLANK", "WHITE"};

enum ChessType {
    BLACK = -1,
    BLANK = 0,
    WHITE = +1
};

class GoChess
{
    public:
        GoChess();
        virtual ~GoChess();

        ChessType getChessType() const;

    protected:

    private:
        ChessType chessType;
};

#endif // GOCHESS_H
