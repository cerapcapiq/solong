#include <mlx.h>
#include <stdio.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

/*
int	key_hook(int keycode, t_vars *vars)
{
    //mlx_destroy_window(vars->mlx, vars->win);

    //{
        
    //else printf("booba\n");
	return (0);
}
*/

int	key_hook(int keycode, t_vars *vars)
{
    
    if (keycode == 2)
   printf("booba\n");

	else if   (keycode == 124)
    printf("keycode\n");
    return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 640, 480, "Hello world!");
	mlx_key_hook(vars.win, key_hook, &vars);
    mlx_hook(vars.win, 2, (1L << 0), key_hook, &vars);
	mlx_loop(vars.mlx);
}