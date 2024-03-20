#include <stdio.h>
#include <windows.h>
#define p printf
#define s scanf
#define g gotoxy
//! the problem is gotoxy
void gotoxy (int x, int y){
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
    system ("cls");
    int number [3][4], temp, num, col, row = 1, i, pass;
    char ans;
    system("cls");
    do {
        g(2, 2);p("Please Enter a number: ");
        for (row = 1; row <3; row ++){
            for (col = 1; col < 4; col ++){
                if (i == 1){
                    g(25, 2);s("%d", &number[row][col]);
                } else {
                     g(25, 2);s("%d", &number[row][col]);
                }
               
            }
        }

        for (row = 1; row < 3; row ++){
            for (col = 1; col < 4; col ++){
                if (number [row][col] > number [row][col + 1]){
                    temp = number [row][col];
                    number [row][col] = number[row][col + 1];
                    number [row][col + 1] = temp;
                }
            }
        }

        for (row = 1; row <3; row ++){
            for (i = 1; i <4; i ++){
                p("%d", number[row][i]);
            }
            p("\n");
        }
        g(2, 7);p("Try again? ");
        g(15, 7);s("%s", &ans);
        g(25, 2);p("                   ");
        g(2, 7);p("                     ");
        g(2, 3);p("                      ");
        g(2, 4);p("                           ");
    } while (ans == 'y' || ans == 'Y');
} 