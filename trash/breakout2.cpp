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
if (ball.x + ball.radius >= screenWidth) {
    ball.x = screenWidth - ball.radius;
    ball.speedX *= -1;
}
if (ball.x - ball.radius <= 0) {
    ball.x = ball.radius;
    ball.speedX *= -1;
}
//отскок от верха + выталкивание
if (ball.y - ball.radius <= 0) {
    ball.y = ball.radius;
    ball.speedY *= -1;
}

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
// отскок от боковых стенок (лево и право)
if (ball.x + ball.radius >= screenWidth || ball.x - ball.radius <= 0) {
    ball.speedX *= -1.0f;
}
//движение мяча
ball.x += ball.speedX;
ball.y += ball.speedY;

//отскок от верхней стенки
if (ball.y <= ball.radius)
{
    ball.speedY *= -1.0f; //инвертируем скорость по Y
}

// проигрыш (если упал ниже экрана)
if (ball.y + ball.radius >= GetScreenHeight()) {
    ball.x = GetScreenWidth() / 2.0f;
    ball.y = GetScreenHeight() / 2.0f;
    //можно обнулить скорость или задать начальную, чтоб мяч не улетал
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