#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define p printf
#define s scanf
#define g gotoxy

void gotoxy (int x, int y){
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
    //? first get input from user (6 times)
    //? second sorting (6 pass, 5 comparison)
    //? third binary searching ()
    //? fourth printing
    int number [2][3], temp, num, col, row = 1, i, pass;
    system("cls");
    g(2, 2);p("Please Enter a number: ");
    for (i = 1; i < 7;i ++){
        if (i <= 3){
            g(25, 2);s("%d", &number [1][i]);
        }
        else if (i > 3 || i  < 7){
            g(25, 2);s("%d", &number [2][i]);
        }
    }
    for (pass = 1; pass < 7; num ++){
        for (col = 1; col < 6; col ++){
            if (col <= 2){
                if (number [1][col] > number [1][col + 1]){
                    temp = number [1][col];
                    number[1][col] = number [1][col + 1];
                    number [1][col + 1] = temp;
                }
            }
            else if (col > 2 && col < 6){
                if (number [1][col] > number [2][col + 1]){
                    temp = number [1][col];
                    number[1][col] = number [2][col + 1];
                    number [2][col + 1] = temp;
                }
            }
        }    
    }
    g(2, 4);p("Sorted: ");
    for (i = 1; i < 7;i ++){
        if (row <= 3){
            g(2 * i, 4);p("%d", number [1][i]);
        }
        if (row > 3 || row < 7){
            g(2 * i, 4);p("%d ", number [2][i]);
        }
    }

}