#include <raylib.h>
#include <iostream>

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 450;

class Ball
{
public:
    float x, y;
    int speedX, speedY;
    int radius;

    void Draw()
    {
        DrawCircle(x, y, radius, WHITE);
    }

    void Update()
    {
        x += speedX;
        y += speedY;
    }
};

Ball ball;
main()
{
    cout << "Starting the game" << endl;
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Pong");
    SetTargetFPS(60);

    ball.radius = 20;
    ball.x = SCREEN_WIDTH / 2;
    ball.y = SCREEN_HEIGHT / 2;

    ball.speedX = 7;
    ball.speedY = 7;

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        // Updating
        ball.Update();

        // Drawing
        DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, WHITE);
        ball.Draw();
        DrawRectangle(10, SCREEN_HEIGHT / 2 - 60, 25, 120, WHITE);
        DrawRectangle(SCREEN_WIDTH - 25 - 10, SCREEN_HEIGHT / 2 - 60, 25, 120, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}