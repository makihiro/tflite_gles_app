/* ------------------------------------------------ *
 * The MIT License (MIT)
 * Copyright (c) 2019 terryky1220@gmail.com
 * ------------------------------------------------ */
 #ifndef _UTIL_RENDER_2D_H_
 #define _UTIL_RENDER_2D_H_
 
int init_2d_renderer (int w, int h);

int draw_2d_fillrect (int x, int y, int w, int h, float *color);
int draw_2d_texture (int texid, int x, int y, int w, int h, int upsidedown);
int draw_2d_colormap (int texid, int x, int y, int w, int h, float alpha, int upsidedown);

int draw_2d_rect (int x, int y, int w, int h, float *color, float line_width);
int draw_2d_line (int x0, int y0, int x1, int y1, float *color, float line_width);

 #endif /* _UTIL_RENDER_2D_H_ */
 