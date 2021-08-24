#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> board;
int N;

void displayBoard() {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafeUp(int i, int j) {
    while(i >= 0) {
        if(board[i][j] == 'Q')
            return false;
        i--;
    }
    
    return true;
}

bool isSafeLeft(int i, int j) {
    while(i >= 0 && j >= 0) {
        if(board[i][j] == 'Q')
            return false;
        i--; j--;
    }
    return true;
}

bool isSafeRight(int i, int j) {
    while(i >= 0 && j < N) {
        if(board[i][j] == 'Q')
            return false;
        i--; j++;
    }
    return true;
}

bool isSafe(int i, int j) {
    return isSafeUp(i, j) && isSafeLeft(i, j) && isSafeRight(i, j);
}

// backtracking
bool solveNQueen(int i) {
    // base condition
    if(i == N)
        return true;
        
    for(int j=0; j<N; j++) {
        if(isSafe(i, j)) {
            
            board[i][j] = 'Q'; // do
            
            if(solveNQueen(i + 1)) { // call
                return true;
            }
            
            board[i][j] = '_'; // undo
        }
    }
    
    return false;
}

int main() {
	cin >> N;
	
	board = vector<vector<char>>(N, vector<char>(N, '_'));
	
// 	displayBoard();
	
	if(solveNQueen(0)) {
	    displayBoard();
	} else {
	    cout << "Unable to solve this problem";
	}
	
	return 0;
}
