#ifndef FT_FDF_H
#define FT_FDF_H

# include <math.h>
# include <limits.h>

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>

# define BUFFER_SIZE 1
# define FD_MAX 1000

typedef	struct	s_get
{
	int			fd;
	int			ret;
}				t_get;

typedef struct s_fdf
{
    int width;
    int height;
    int **map2d;
	//int *map_x_size;
	
	int zoom;
	int color;
	int shift_x;
	int shift_y;
	float r_x;
	float r_y;
	int zoom_base;

	void *mlx_ptr;
	void *win_ptr;
}               t_fdf;

//UTILS
char			**ft_strsplit(char const *str, char c); //✅
int		        ft_atoi(const char *s);                 //✅
void	        ft_putstr_fd(char const *s, int fd);    //✅
size_t          ft_strlen(const char *s1);              //✅
char	        *ft_strdup(const char *s1); //✅
char	        *ft_strchr(const char *str, int c);//✅
size_t	        ft_strlen(const char *s1);              //✅

// GNL ----------
int		        get_next_line(int fd, char **line);     //✅
void	        ft_memdel(void **ap);                   //✅
void            *ft_memset(void *b, int c, size_t len); //✅
void	        ft_strdel(char **as);                   //✅
char	        *ft_strsub(char const *s, unsigned int start, size_t len);  //✅
char            *ft_strnew(size_t size);                //✅
void	        ft_bzero(void *s, int n);               //✅
char	        *ft_strjoin(char const *s1, char const *s2); //✅
char	        *ft_substr(char const *s, unsigned int str, size_t len); //✅

int		        ft_end(char **line, char **save, int fd, int bytes);
int		        ft_line(char **line, char **save, int fd, int i);
int		        ft_next_step(char **line, char **save, int fd, int bytes);
char	        *ft_malloc(size_t size);

// PARSING : =
void            ft_parsing_argv(int argc, char *file);     //✅
void	        ft_error(char *msg);                    //✅
void            ft_stock_map(t_fdf *fdf, char *file);   //✅ 
int             ft_stock_height(char *file);               //✅
int             ft_stock_width(char *file, t_fdf *fdf);             //✅
int		        ft_wdcounter(char *str, char c);  //✅
void            ft_stock_map2d(int *map2d, char *line);    //✅
void            ft_free_tab(t_fdf *fdf, int height);    //✅
// PARSING : =

// DRAW ----------------------------------------
float   ft_max(float a, float b);
float   mod(float i);
void    algo_draw(float x, float y, float x1, float y1, t_fdf *fdf);
void    draw(t_fdf *fdf);
void	ft_error(char *msg);
//-------- ATTENTION TEST --------//
void print_map(t_fdf *fdf);
//----------------------------------------------------------------------
//----------------------------------------------------------------------
#endif
