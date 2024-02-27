**Scenario 3**<br>
Assume we’re writing a very bare bones program to figure out how we can apply OOP to Chess. Let’s
consider the following classes that will be interacting with each other to play the game.<br>
The ChessPiece class is used for all chess pieces (pawn, rook, knight, etc.). Each piece has attributes such as name(King, Queen, etc.), color (black or white) and a unique symbol (K/k-for king, Q/q-for queen, N/n-
for knight, etc.) to represent it on the board. Other requirements are as follows:<br>
• Default Constructor: Whenever this constructor is called, it will create a white pawn.<br>
• Parameterized Constructor: Creates a ChessPiece of the type specified by the parameters.<br>
• Appropriate getters and setters for your member variables.<br><br>
The ChessBoard class represents the chessboard itself. It contains a 2D array of ChessPiece to represent
the 8x8 grid. Each element of the array holds a pointer to a ChessPiece object or is set to null if there is no
piece at that position. The class has methods like display() to print the current state of the board, and aother
method, movePiece(), which is responsible for moving a piece from one position to another.<br><br>
More details about the functions is given below:<br>
• Default Constructor for the ChessBoard class should initialize the 2D array of chess pieces to an initial
game state (also shown below).<br>
• The display() method should generate an output like this:
![image](https://github.com/arwa007/OOPSpring24/assets/142319755/0541175e-6741-47c7-a02e-81be34dd94c4)

<br>
White pieces can be represented by small alphabet while black pieces can be capital alphabets.<br>
Note: R: Rook, N: Knight, B: Bishop, Q: Queen, K: King, P: Pawn<br><br>
• The bool movePiece(string source, string destination) method is used to move the chess piece from
a source to destination. It returns true or false based on whether the move is valid or not. For simplicity’s
sake, let only consider the movements for knight and pawns on the first turn.<br>
Example: Function is called as: movePiece(“b8”, “a6”), so this means we are moving the knight from
b8 to a6, which is a valid first move, so your function should return true. Similarly, if the function is
called as: movePiece(“b8”, “d7”), it should return false, as d7 is already occupied by a pawn.<br>
Notes:<br>
The knight moves in an "L" shape on the chessboard. It can move two squares in one direction (either
horizontally or vertically) and then one square in a perpendicular direction. Alternatively, it can move two
squares in a perpendicular direction and then one square in the original direction.<br>
Meanwhile, during the first move only, a pawn has two possible moves: it can move forward by one or two
steps, only if there is nothing in its path.

**OUTPUT**
<img width="960" alt="image" src="https://github.com/arwa007/OOPSpring24/assets/142319755/97cc330f-c900-48bd-a30a-cbf048f61ff4">



