#include "mlx.h"

int main()
{
    void *mlx;
    void *mlx_win;

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 500, 500, "Booba");
    mlx_loop(mlx);
}

//open empty windows with title booba