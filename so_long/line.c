#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <mlx.h>
#include <X11/keysym.h>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 300

#define MLX_ERROR 1

#define RED_PIXEL 0xFF0000
#define GREEN_PIXEL 0xFF00
#define WHITE_PIXEL 0xFFFFFF

int draw_line(void *mlx, void *win, int beginX, int beginY, int endX, int endY, int color);

draw_line(mlx, win, 10, 10, 20, 10, 0xFFFFFF); 


int main()
{
    void *mlx = mlx_init();
    void *win = mlx_new_window(mlx, 640, 360, "Tutorial Window - Draw Line");

    draw_line(mlx, win, 640, 360, 0, 0, 0xFFFFFF);

    mlx_loop(mlx);
}