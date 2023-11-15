#include "raylib.h"

int main()
{

    int screenWidth = 800;
    int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "CA1");

    SetTargetFPS(60);

    while (!WindowShouldClose())

    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
