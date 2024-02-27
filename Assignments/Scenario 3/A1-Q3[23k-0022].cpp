#include<iostream>
#include<cmath>
using namespace std;

class Chessman{
	private: 
		string type;
		string shade;
		char symbol;
	public:
		Chessman()
		{
			this->type = "Pawn";
			this->shade="White";
			this->symbol = 'p';
		}
		
		Chessman(string newName, string newShade, char newSymbol)
		{
			this->type = newName;
			this->shade=newShade;
			this->symbol =newSymbol;
		}
		
		string getType()
		{
			return type;
		}
		
		string getShade()
		{
			return shade;
		}
		
		char getSymbol()
		{
			return symbol;
		}
		
		void setType(string type)
		{
			this->type = type;
		}
		
		void setShade(string shade)
		{
			this->shade = shade;
		}
		
		void setSymbol(char symbol)
		{
			this->symbol = symbol;
		}
};

class Chessboard{
	public:
	Chessman board[8][8];
	
	Chessboard()
	{
		board[0][0]=Chessman("Rook","white",'r');
		board[0][1]=Chessman("Knight","white",'n');
		board[0][2]=Chessman("Bishop","white",'b');
		board[0][3]=Chessman("Queen","white",'q');
		board[0][4]=Chessman("King","white",'k');
		board[0][5]=Chessman("Bishop","white",'b');
		board[0][6]=Chessman("Knight","white",'n');
		board[0][7]=Chessman("Rook","white",'r');
		
		for(int i =0; i<8;i++)
		{
			board[1][i]=Chessman("Pawn","white",'p');
		}
		
		for(int i = 2; i<6; i++)
		{
			for(int j =0; j<8; j++)
			{
				board[i][j]=Chessman(" "," ",'.');
			}
		}
		for(int i =0; i<8;i++)
		{
			board[6][i]=Chessman("Pawn","black",'P');
		}
		board[7][0]=Chessman("Rook","black",'R');
		board[7][1]=Chessman("Knight","black",'N');
		board[7][2]=Chessman("Bishop","black",'B');
		board[7][3]=Chessman("Queen","black",'Q');
		board[7][4]=Chessman("King","black",'K');
		board[7][5]=Chessman("Bishop","black",'B');
		board[7][6]=Chessman("Knight","black",'N');
		board[7][7]=Chessman("Rook","black",'R');
	}	
	
	bool movePiece(string source, string destination)
	{
		int source_c = source[0]-'a';
		int source_r = source[1]-'0'-1;
		int destination_c = destination[0]-'a';
		int destination_r = destination[1]-'0'-1;
		
		if(board[destination_r][destination_c].getSymbol()=='.'||board[destination_r][destination_c].getShade()!=board[source_r][source_c].getShade())
		{
			if (board[source_r][source_c].getSymbol() == 'n' || board[source_r][source_c].getSymbol() == 'N') {
                
                if ((abs(source_r - destination_r) == 2) && (abs(source_c - destination_c) == 1)) {
                    
                    board[destination_r][destination_c] = board[source_r][source_c];
                    board[source_r][source_c] = Chessman();
                    return true;
                } else {
                    cout << "Invalid move for " << board[source_r][source_c].getSymbol() << endl;
                    return false;
                }

                
            } else if (board[source_r][source_c].getSymbol() == 'p' || board[destination_r][destination_c].getSymbol() == 'P') {
                
                if (((destination_r - source_r == 1) && (destination_c - source_c == 0)) || ((destination_r - source_r == 2) && (destination_c - source_c == 0) && source_r == 1)) {
                
                    board[destination_r][destination_c] = board[source_r][source_c];
                    board[source_r][source_c] = Chessman();
                    return true;
                
                } else if ((abs(destination_r - source_r) == 1) && (abs(source_c - destination_c) == 1)) {
                
                    board[destination_r][destination_c] = board[source_r][source_c];
                    board[source_r][source_c] = Chessman();
                    return true;
                } else {
                    cout << "Invalid move for " << board[destination_r][destination_c].getSymbol() << endl;
                    return false;
                }
            }
        }
        return false;
    }

		
	
	void display() {
        cout << " " << "   ";
        for (char ch = 'a'; ch <= 'h'; ch++) cout << ch << "   ";
        cout << endl ;

        int num = 8;
        for (int i = 7; i >= 0; i--) {
            cout << num << "   ";

            for (int j = 0; j < 8; j++) {
                cout << board[i][j].getSymbol() << "   ";
            }
            cout << num-- << endl;
        }

        cout << " " << "   ";
        for (char ch = 'a'; ch <= 'h'; ch++) cout << ch << "   ";
        cout << endl;
    }
};

int main()
{
	cout<<"Name: Arwa Feroze"<<endl<<"ID: 23k-0022"<<endl;

    cout<<"John Doe"<<"\t\t"<<"ID: 123456"<<endl;
	Chessboard myBoard;
	myBoard.display();
	cout<<"----------------------------------"<<endl;
	if(myBoard.movePiece("a1","a3"))
	{
		cout<<"Valid Move"<<endl;
	}
	else
	{
		cout<<"Invalid Move"<<endl;
	}
	
	myBoard.display();

	cout<<"----------------------------------"<<endl;
	if(myBoard.movePiece("b1","c3"))
	{
		cout<<"Valid Move"<<endl;
	}
	else
	{
		cout<<"Invalid Move"<<endl;
	}
	
	myBoard.display();
}
