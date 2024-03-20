#include <stdio.h>
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
    int num[7], num2d [3][4], col, row, temp, i = 1;
    char ans;
    do {
        system("cls");
        //?input value
        g(2, 2);p("please enter a number: ");
        for (row = 1; row < 3; row ++){
            for (col = 1; col < 4; col ++){
                g(25, 2);s("%d", &num2d [row][col]);
            }
        }
        //? let the 2d array be equal 1d array
        for (row = 1; row < 3; row ++){
            for (col = 1; col < 4; col ++) {
                num[i++] = num2d [row][col];
            }
        }
        //? sorting the 1d array
        for (row = 1; row < 7; row ++){
            for (col = 1; col < 6; col ++){
                if (num [col] > num [col + 1]){
                    temp = num [col];
                    num [col] = num [col + 1];
                    num [col + 1] = temp;
                }
            }
        }
        //? printing the sorted array
        for (row = 1; row < 7; row ++){
            g(2, 3);p("Sorted value:");
            if (row > 0 && row < 4){
                g(2 * row, 4);p("%d", num[row]);
            }
            if (row > 3 && row < 7){
                g(2 * (row - 3), 5);p("%d", num[row]);    
            }
        }
        
        g(2, 6);p("Try again? ");
        g(25, 6);s("%s", &ans);
        g(2, 5);p("                      ");
        g(25, 5);p("                     ");
        g(25, 2);p("                   ");
        g(1, 3);p("                   ");
    } while (ans == 'y' || ans == 'Y');
    system("cls");
    exit(0);
}