#include "raylib.h"

int main() {
    InitWindow(800, 450, "My Breakout - C++ Power");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Elon! This is C++.", 190, 200, 20, LIGHTGRAY);
        EndDrawing();

    }
    CloseWindow();
    return 0;
}