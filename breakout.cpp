#include "raylib.h"

// - Структуры. В с++ struct - это способ склеить несколько 
// переменных в один "тип". Мяч это позиция + скорость + радиус
struct Ball{           //встроенный в raylib тип с именем Ball
    Vector2 position; // поле: позиция - vector2 - готовый тип raylib с полями .x, .y. position = vector2 = position.x position.y
    Vector2 speed;   // поле: скорость
    float radius;   // поле радиус
};

//Ball ball; - создал переменную типа Ball
//ball.radius = 8.0f; - "." - залезть внутрь и взять это поле
//ball.position.x = 400; - цепочка точек - у ball берем position, у него берем x
//ball.speed.y = -250;

// иначе мяч был бы расписан так:
// float ballX, ballY; - позиция
// float ballSpeedX, ballSpeedY; - скорость
// float ballRadius; - радиус


//bricks[r][c].alive - лезем в массиы по номерам строки и колонки, достаем кирпич, берем у него alive
//b.alive - у нас уже есть кирпич в руках (в b), сразу берем alive
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

    InitWindow(screenWidth, screenHeight, "Breakout"); //InitWindow - функция raylib которая создает окно, "breakout" - заголовк окна, H/W - высота/ширина
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
const int rows = 5;
const int brickW = 90;
const int brickH = 25;
const int gap = 6;
const int offsetX = 20;
const int offsetY = 50;

Brick bricks[rows][cols]; // двумерный массив кирпичей
for (int r = 0; r < rows; r++) {        //r = ряд: 0, 1, 2, 3, 4
    for (int c = 0; c < cols; c++) {.  //c = колонка: 0, 1, 2, 3, 4
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
while (!WindowShouldClose()) {
    float dt = GetFrameTime(); // сколько секунд прошло с прошлого кадра.
                               // умножаем скорости на dt, чтобы движение не зависело 
                               // от частоты кадров.
    if (!gameOver && !won) {
        // Управление ракеткой
        if (IsKeyDown(KEY_LEFT)) paddle.rect.x -= paddle.speed * dt;
        if (IsKeyDown(KEY_RIGHT)) paddle.rect.x += paddle.speed * dt;

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
        }
    if (ball.position.y - ball.radius <= 0)
    {
        ball.speed.y *= -1; // разворот от потолка
    }
    // Мяч упал ниже экрана = проигрыш
    if (ball.position.y - ball.radius > screenHeight) {
        gameOver = true;
    }

    // Столкновение мяча с ракеткой
    if (CheckCollisionCircleRec(ball.position, ball.radius, paddle.rect)) {
        if (ball.speed.y > 0) { //только если мяч летит вниз
            ball.speed.y *= -1;
        }
    }
    // столкновение с кирпичами
    int aliveCount = 0;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            // & берем ссылку на кирпич, а не копию
            // Меняем b.alive - меняется настоящий кирпич в массиве
            Brick& b = bricks[r][c];
            if (!b.alive) continue;

            aliveCount++;
            if (CheckCollisionCircleRec(ball.position, ball.radius, b.rect)) {
                b.alive = false;
                ball.speed.y *= -1;
                score += 10;
                aliveCount--;
            }
        }
    }
    if (aliveCount == 0) won = true;
} else {
    // рестарт по пробелу
    if (IsKeyPressed(KEY_SPACE)) {
        ball.position = { screenWidth / 2.0f, screenHeight / 2.0f };
        ball.speed = { 250.0f, -250.0f };
        paddle.rect.x = screenWidth / 2.0f - 50;
        for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
        bricks[r][c].alive = true;
        score = 0;
        gameOver = false;
        won = false;
    }
}

// отрисовка
BeginDrawing();
ClearBackground(BLACK);

// кирпичи
for (int r =0; r < rows; r++) {
    for (int c =0; c < cols; c++) {
        if (bricks[r][c].alive) {
            DrawRectangleRec(bricks[r][c].rect, SKYBLUE);
            DrawRectangleLinesEx(bricks[r][c].rect, 1, DARKBLUE);
        }
    }
}
DrawRectangleRec(paddle.rect, RAYWHITE);
DrawCircleV(ball.position, ball.radius, RED);
DrawText(TextFormat("Score: %d", score), 10, 10, 20, RAYWHITE);
if (gameOver)
DrawText("GAME OVER - press SPACE", 230, 300, 24, RED);
if (won)
DrawText("YOU WIN - press SPACE", 250, 300, 24, GREEN);
EndDrawing();
}
CloseWindow();
return 0;
    
    }                           
