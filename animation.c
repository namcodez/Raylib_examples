#include "raylib.h"

// to compile
// gcc main.c -lraylib

int main(void) {

  // Initializing the constants
  const int screen_width = 512;
  const int screen_height = 512;

  float gravity_x = GetRandomValue(-1, 1);
  float gravity_y = 0.8f;

  Rectangle rec = {5, 28, 84, 64};

  InitWindow(screen_width, screen_height, "Animation");
  SetTargetFPS(120);

  while (!WindowShouldClose()) {

    rec.x += gravity_x;
    rec.y += gravity_y;

    if (rec.x + rec.width > screen_width ||
        rec.y + rec.height > screen_height) {

      gravity_x = -GetRandomValue(-1, 1);
      gravity_y = -1.0f;

    }

    else if (rec.y + rec.height > screen_height) {
      gravity_x = -1;
    }

    else if (rec.x + rec.width + rec.width < 0 || rec.y + rec.height <= 0) {

      gravity_x = GetRandomValue(-1, 1);
      gravity_y = 1.2f;
    }

    // Some if else statement

    ClearBackground(WHITE);

    BeginDrawing();
    DrawRectangleRec(rec, RED);
    EndDrawing();
  }
  CloseWindow();

  return 0;
}
