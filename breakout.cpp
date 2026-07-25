#include "raylib.h"
// - Структуры. В с++ struct - это способ склеить несколько 
// переменных в один "тип". Мяч это позиция + скорость + радиус
struct Ball{
    Vector2 position; // vector2 - встроенный в raylib тип с полями .x и .y
    Vector2 speed;
    float radius;
};

struct Paddle {
    Rectangle rect; // Rectangle - тип raylib .x .y .width .height
    float speed;
};

struct Brick {
    Rectangle rect;
    bool alive; // жив кирпич или уже выбит
};

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Breakout");
    SetTargetFPS(60); // 60 кадров в секунду

    // Инициализация мяча
    Ball ball;
    ball.position = { screenWidth / 2.0f, screenHeight / 2.0f };
    ball.speed = { 250.0f, -250.0f }; // пикселей в секунду
    ball.radius = 8.0f;

    // Ракетка
    Paddle paddle;
    paddle.rect = { screenWidth / 2.0f - 50, screenHeight - 40, 100, 15 };
    paddle.speed = 450.0f;
// кирпичи: сетка 8 колонок х 5 рядов
const int cols = 8;
const int row = 5;
const int brickW = 90;
const int brickH = 25;
const int gap = 6;
const int offsetX = 20;
const int offsetY = 50;

Brick bricks[rows][cols]; // двумерный массив кирпичей
for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
        bricks[r][c].rect = {
            (float)(offsetX + c * (brickW + gap)),
            (float)(offsetY + r * (brickH + gap)),
            (float)brickW,
            (float)brickH
        };
        bricks[r][c].alive = true;
    }
}

int score = 0;
bool gameOver = false;
bool won = false;

// Главный цикл. Крутится каждый кадр, пока окно открыто.
while (!WindowShouldClose() {
    float dt = GetFrameTime(); // сколько секунд прошло с прошлого кадра.
                               // умножаем скорости на dt, чтобы движение не зависело 
                               // от частоты кадров.
    if (!gameOver && !won) {
        // Управление ракеткой
        if (IsKeyDown(KEY_LEFT)) paddle.rect.x -= paddle.speed * dt;
        if (IsKeyDown(KEY_RIGHT)) paddle.rect += paddle.speed * dt;

        //  не даём ракетке уехать за экран
        if (paddle.rect.x < 0) paddle.rect.x = 0;
        if (paddle.rect.x + paddle.rect.width > screenWidth)
        paddle.rect.x = screenWidth - paddle.rect.width;

        // движение мяча
        ball.position.x += ball.speed.x * dt;
        ball.position.y += ball.speed.y * dt;

        // отскок от стен
        if (ball.position.x - ball.radius <= 0 || 
        ball.position.x + ball.radius >= screenWidth) {
            ball.speed.x *= -1; // разворот по горизонтали
        })
    }                           
})
}