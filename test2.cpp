// Example for Windows
    #include <windows.h>
    #include <iostream>

    void gotoxy(int x, int y) {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

    int main() {
        gotoxy(10, 5); // Place cursor at column 10, row 5
        std::cout << "Hello at specific location!";
        return 0;
    }