#include <stdio.h>
#include <windows.h>
#define p printf
#define s scanf
#define g gotoxy

void gotoxt (int x, int y){
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
    int number [6], i, temp, num;
    system("cls");
    g(2, 2);p("Please Enter a number: ");
    for (i = 1; i < 7;i ++){
        s("%d", number [i]);
    }
    for (num = 1; i < num + 1; num ++){
        for (i = 1; i < 6; i ++){
            if (number [i] > number [i + 1]){
                temp = number [i];
                number[i] = number [i + 1];
                number [i + 1] = temp;
            }
        }    
    }


}