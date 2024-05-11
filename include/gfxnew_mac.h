#ifndef GFXNEW_H
#define GFXNEW_H

#include <X11/Xlib.h>
#include <X11/cursorfont.h> 


void gfx_open( int width, int height, const char *title );


void gfx_flush();


void gfx_color( int red, int green, int blue );

 
void gfx_clear();


void gfx_clear_color( int red, int green, int blue );

 
int gfx_event_waiting();

 
char gfx_wait();


int gfx_xpos();
int gfx_ypos();

 
int gfx_xsize();
int gfx_ysize();


void gfx_point( int x, int y );

 
void gfx_line( int x1, int y1, int x2, int y2 );

 
void gfx_circle( int xc, int yc, int r );


void gfx_text( int x, int y , const char *text );

void gfx_fill_circle( int xCtr, int yCtr, int r );


void gfx_ellipse( int xc, int yc, int r1, int r2 );
 

void gfx_arc( int xc, int yc, int w, int h, int a1, int a2 );


void gfx_fill_arc( int xc, int yc, int w, int h, int a1, int a2 );


void gfx_rectangle( int x, int y, int w, int h );


void gfx_fill_rectangle( int x, int y, int w, int h );


void gfx_polygon( XPoint *pointsarr, int num_pts );


void gfx_fill_polygon( XPoint *pointsarr, int num_pts );


void gfx_changefont( char * );


int gfx_screenwidth();
int gfx_screenheight();


int gfx_windowwidth();
int gfx_windowheight();


int gfx_textpixelwidth( char *text, char *fontname );
int gfx_textpixelheight( char *text, char *fontname );


void gfx_changecursor( int );

#endif