#include <stdio.h>
#include "raylib.h"

int main(void){


    const int screenWidth = 800;
    const int screenHeight = 400;
    InitWindow(screenWidth, screenHeight, "Test");

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}