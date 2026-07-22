/*
@author: Paloma Mazzei
@date: 07/21/2026
@purpose: This program will build a tic-tac-toe game in C++ using all of the techniques I have learned this semester.  
*/

#include <iostream> //include the iostream library for input and output operations
using namespace std; //use the standard namespace to avoid prefixing standard library names with "std::"


int main(){

    // Display information for the players:
    cout << "This is the table and positions: \n";
    cout << " 00 || 01 || 02 \n";
    cout << "---- ---- ----\n"; 
    cout << " 10 || 11 || 12 \n";
    cout << "---- ---- ----\n";
    cout << " 20 || 21 || 22 " << endl;
    cout << "" << endl;
    cout << "Player 01 is \"X\".\n";
    cout << "Player 02 is \"O\"." << endl;
    cout << "" << endl;
    cout << "LET'S PLAY TIC TAC TOE!\n";
    cout << "" << endl;

    // create two players and assign them "X" or "O"
    string player01 = "X";
    string player02 = "O";

    // create a 2D array:
    const int COLUMNS = 3;
    const int ROWS = 3;
    string table[ROWS][COLUMNS];    //Array with 3 rows and 3 columns

    //this is going to help in the display view:
    table[0][0] = " ";
    table[0][1] = " ";
    table[0][2] = " ";
    table[1][0] = " ";
    table[1][1] = " ";
    table[1][2] = " ";
    table[2][0] = " ";
    table[2][1] = " ";
    table[2][2] = " ";

   // create a variable to hold the chosen position by players:
    int position;


    // create a variable that is going to control the loop:
    bool endGame;
    
    // create a loop for the game, which is going to stop when the game ends:
    
    while (endGame == false){
        
        //prompt player 01 for first position: 
        cout << "Player 01: choose your position: \n";
        cin >> position;

        //if the input is one of the position options:
        if (!(position == 00 || position == 01 || position == 02 ||
            position == 10 || position == 11 || position == 12 ||
            position == 20 || position == 21 || position == 22)){
                cout << "Wrong position, please try again.\n";
            } else {
                
            int positionRow = position/10;      //separate the first number : number of row
            int positionCol = position%10;      //separate the second number : number of columns
            

            //if the chosen position is already taken:
            if (table [positionRow][positionCol] == "X" or table [positionRow][positionCol] == "O"){
                cout << "The chosen position is already taken, please try again.\n";
            } else {

                //assign "X" to the chosen position:
                table [positionRow][positionCol] = "X";
                
                //display whole table:
                for (int i=0; i<ROWS;i++){
                    for (int j=0; j<COLUMNS;j++){
                    cout << "| " << table[i][j] << " |";
                    }
                    cout << endl;                    
                }

                endGame = false;
                //if there are 3-in-a-row:
                if (table[0][0] == "X" && table [0][1] == "X" && table [0][2] == "X" ||         //row 0
                    table[1][0] == "X" && table [1][1] == "X" && table [1][2] == "X" ||         //row 1
                    table[2][0] == "X" && table [2][1] == "X" && table [2][2] == "X" ||         //row 2
                    table[0][0] == "X" && table [1][0] == "X" && table [2][0] == "X" ||         //column 0
                    table[0][1] == "X" && table [1][1] == "X" && table [2][1] == "X" ||         //column 1
                    table[0][2] == "X" && table [1][2] == "X" && table [2][2] == "X" ||         //column 2
                    table[0][0] == "X" && table [1][1] == "X" && table [2][2] == "X" ||         //main diagonal
                    table[0][2] == "X" && table [1][1] == "X" && table [2][0] == "X" ) {        //anti diagonal
                    cout << "Congratulations! Player 01 won! \n";
                    endGame = true;
                } else {
                
                    //if the table is full of data:
                    if ((table[0][0] == "X" ||  table[0][0] == "O") &&
                        (table[0][1] == "X" ||  table[0][1] == "O") &&
                        (table[0][2] == "X" ||  table[0][2] == "O") &&
                        (table[1][0] == "X" ||  table[1][0] == "O") &&
                        (table[1][1] == "X" ||  table[1][1] == "O") &&
                        (table[1][2] == "X" ||  table[1][2] == "O") &&
                        (table[2][0] == "X" ||  table[2][0] == "O") &&
                        (table[2][1] == "X" ||  table[2][1] == "O") &&
                        (table[2][2] == "X" ||  table[2][2] == "O") ) {
                        cout << "Tie. Game over. \n";
                        endGame = true;
                    } else {


                    // Second player turn :

                    // create a variable that is going to control the loop:
                    bool endTurn = false;

                    // create a loop to control the second player turns:
                    while (endTurn == false){

                        //prompt player 02 for first position: 
                        cout << "Player 02: choose your position: \n";
                        cin >> position;

                        //if the input is one of the position options:
                        if (!(position == 00 || position == 01 || position == 02 ||
                            position == 10 || position == 11 || position == 12 ||
                            position == 20 || position == 21 || position == 22)){
                                cout << "Wrong position, please try again.\n";
                                endTurn = false;
                            } else {
                                
                            int positionRow = position/10;      //separate the first number
                            int positionCol = position%10;      //separate the second number
                            

                            //if the chosen position is already taken:
                            if (table [positionRow][positionCol] == "X" or table [positionRow][positionCol] == "O"){
                                cout << "The chosen position is already taken, please try again.\n";
                                endTurn = false;
                            } else {

                                //assign "O" to the chosen position:
                                table [positionRow][positionCol] = "O";
                                
                                //display whole table:
                                for (int i=0; i<ROWS;i++){
                                    for (int j=0; j<COLUMNS;j++){
                                    cout << "| " << table[i][j] << " |";
                                    }
                                    cout << endl;                                    
                                }

                                endGame = false;
                                //if there are 3-in-a-row:
                                if (table[0][0] == "O" && table [0][1] == "O" && table [0][2] == "O" ||         //row 0
                                    table[1][0] == "O" && table [1][1] == "O" && table [1][2] == "O" ||         //row 1
                                    table[2][0] == "O" && table [2][1] == "O" && table [2][2] == "O" ||         //row 2
                                    table[0][0] == "O" && table [1][0] == "O" && table [2][0] == "O" ||         //column 0
                                    table[0][1] == "O" && table [1][1] == "O" && table [2][1] == "O" ||         //column 1
                                    table[0][2] == "O" && table [1][2] == "O" && table [2][2] == "O" ||         //column 2
                                    table[0][0] == "O" && table [1][1] == "O" && table [2][2] == "O" ||         //main diagonal
                                    table[0][2] == "O" && table [1][1] == "O" && table [2][0] == "O" ) {        //anti diagonal
                                    cout << "Congratulations! Player 02 won! \n";
                                    endGame = true;
                                } else {
                                endTurn = true;
                                }
                            }
                        }                       
                    }
    
                }   
            }   
        }   
    }

}
}
