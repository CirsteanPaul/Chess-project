#include "BasicTest.h"

#include <iostream>
#include <set>

int BasicTest::test(Board& board, int depth, int maxDepth)
{
	//boardul cand isi ia undoMove pierde capturedPieceul daca se captureaza la urm mutare o piesa
	std::vector<Move> moves;
	int ans = 0;
	int see = 0;
    int lalala = 0;
	if(depth == 3)
    {
        lalala ++;
    }
	if (board.whoMove == Color::white)
		moves = board.getAllMoves(Color::white);
	else
		moves = board.getAllMoves(Color::black);
	// moves pe black nu da mutari
	//pionii in makeAttack ataca si campul din fata DONE
	int contor = 0;
	for (const auto& move : moves)
	{
		if (depth == 0)
			see = 0;
		if (!board.makeMove(move))
		{
			auto from = move.from.poz;
			auto to = move.to.poz;
			continue;
		}
		if (depth >= maxDepth)
		{
			if (depth == 0) std::cout << char(move.from.poz.second + 'a') << 8 - move.from.poz.first <<
				char(move.to.poz.second + 'a') << 8 - move.to.poz.first << ": " <<  1 << '\n';
				ans++, see ++;
			board.undoMove(move);

			continue;
		}

        board.moveList.push_back(move);
		Board newBoard = board;
		newBoard.whoMove = (newBoard.whoMove == Color::white ? Color::black : Color::white);
		ans +=see = test(newBoard, depth + 1, maxDepth);
			
		board.undoMove(move);
        board.moveList.pop_back();
		if (depth == 0) std::cout <<char(move.from.poz.second+'a') <<8 - move.from.poz.first<<
			char(move.to.poz.second + 'a') << 8 -move.to.poz.first <<": " <<see << '\n';
	}
	return ans;
}












































