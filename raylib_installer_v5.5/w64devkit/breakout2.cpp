#include "raylib.h"

//платформа игрока
struct Paddle {
    float x, y;
    float width, height;
    float speed;
};

//мяч 
struct Ball {
    float x, y;
    float radius;
    float speedX, speedY;
};

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Breakout: C++ Edition");

    //инициализация игрока
    Paddle paddle = { screenWidth / 2.0f - 50, screenHeight - 40, 100, 20, 500.0f };

    //инициализация мяча
    Ball ball = { screenWidth / 2.0f, screenHeight / 2.0f, 7, 300.0f, -300.0f };

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime(); //время между кадрами для плавной скорости

        //1. управление платформой
if (IsKeyDown(KEY_LEFT) && paddle.x > 0) paddle.x -= paddle.speed * deltaTime;
if (IsKeyDown(KEY_RIGHT) && paddle.x < screenWidth - paddle.width) paddle.x += paddle.speed *deltaTime;

//2. движение мяча
ball.x += ball.speedX * deltaTime;
ball.y += ball.speedY * deltaTime;

//3. отскоки от стен
if (ball.x + ball.radius >= screenWidth || ball.x - ball.radius <= 0) ball.speedX *= -1;
if (ball.y - ball.radius <= 0) ball.speedY *= -1;

//4. столкновение мяча с платформой
if (CheckCollisionCircleRec({ball.x, ball.y}, ball.radius, {paddle.x, paddle.y, paddle.width, paddle.height})) {
    //если мяч летит вниз (speedY > 0), отбивам его вверх
    if (ball.speedY > 0) {
        ball.speedY *= -1;
        //немного ускоряем мяч
        ball.speedY -= 10.0f;
        //выталкиваем мяч выше платформы чтоб не застрял
        ball.y = paddle.y - ball.radius;
    }
}
// если упал - ресет
if (ball.y + ball.radius >= screenHeight) {
    ball.x = screenWidth / 2.0f;
    ball.y = screenHeight / 2.0f;
    }
    BeginDrawing();
    ClearBackground(BLACK);

    //рисуем платформу
    DrawRectangle(paddle.x, paddle.y, paddle.width, paddle.height, SKYBLUE);

    //рисуем мяч
    DrawCircle(ball.x, ball.y, ball.radius, MAROON);

    DrawFPS(10, 10);
    EndDrawing();
        }
        CloseWindow();
        return 0;
}