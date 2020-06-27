#include <iostream>
#include <vector>
using namespace std;


class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[0].size(); j++)
			{
				if (i == 0 && j == 0)
				{
					//nothing
				}
				else if (i == 0)
				{
					board[i][j] += board[i][j - 1];
				}
				else if (j == 0)
				{
					board[i][j] += board[i - 1][j];
				}
				else
				{
					if (board[i][j - 1] > board[i - 1][j])
					{
						board[i][j] += board[i][j - 1];
					}
					else
					{
						board[i][j] += board[i - 1][j];
					}
				}
			}
		}
		return board[board.size() - 1][board[0].size() - 1];
	}
};

int main1()
{

	return 0;
}