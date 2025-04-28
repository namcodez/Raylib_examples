#include "raylib.h"

int main(void){

  //Initializing the main_windows

  InitWindow(800, 600, "SHOOTER");
  SetTargetFPS(90);

  float velocity = 5;

  Rectangle main_char = {300,600 - 120,90,40};



  while(!WindowShouldClose()){

    ClearBackground(WHITE);

    //Movement of main_char
    if(IsKeyDown(KEY_LEFT)){
      main_char.x -= velocity;
    }

    else if(IsKeyDown(KEY_RIGHT)){
      main_char.x += velocity;
    }

    //to make boundaries
    // that is so main_char doesnt run out of the screen
    if(main_char.x + main_char.width >= 800  ){
      main_char.x = 0;
    }

    else if(main_char.x + main_char.width <= 0){
      main_char.x = 650;
    }

    BeginDrawing();
    DrawRectangle(main_char.x, main_char.y, main_char.width, main_char.height,RED);
    EndDrawing();

  }
  CloseWindow();

  return 0;
}
