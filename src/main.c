#include <raylib.h>
#include <stdio.h>

#define MAXCLICKS 9999

int main(void) {
    const int scrnwidth = 900;
    const int scrnheight = 500;
    int points = 0;
    char pointstxt[50];

    InitWindow(scrnwidth, scrnheight, "KlawKlik");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_SPACE)) points += 1;

        sprintf(pointstxt, "you have %d points", points);

        BeginDrawing();

            ClearBackground(RAYWHITE);
            
            DrawText(pointstxt, 10, 10, 20, DARKGREEN);

            DrawText("SHOP:", 10, 50, 20, DARKGREEN);
            DrawText("Autoclicker: 601 points click Y to buy", 10, 60, 20, DARKGREEN);
            if (IsKeyPressed(KEY_Y)) {
                if (points > 600) {
                    points += 1; 
                }


    }

    EndDrawing();
}
CloseWindow();
return 0;

}
