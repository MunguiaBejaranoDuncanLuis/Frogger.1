#include "frog.h"
#include "gfxnew_mac.h"
#include <iostream>

using namespace std;

Frog::Frog(double xCenter, double yCenter, int length, int yGrid, double xLeft, double xRight, char orientation)
{
	this->xCenter = xCenter;
	this->yCenter = yCenter;
	this->length = length;
	this->yGrid = yGrid;
	this->xLeft = xLeft;
	this->xRight = xRight;
	this->orientation = orientation;
}

Frog::~Frog() { }

double Frog::getXCenter()
{return xCenter;}

double Frog::getYCenter()
{return yCenter;}

int Frog::getLength()
{return length;}

int Frog::getYGrid()
{return yGrid;}

double Frog::getXLeft()
{return xLeft;}

double Frog::getXRight()
{return xRight;}

char Frog::getOrientation()
{return orientation;}

void Frog::setXCenter(double xCenter)
{this->xCenter = xCenter;}

void Frog::setYCenter(double yCenter)
{this->yCenter = yCenter;}

void Frog::setLength(int length)
{this->length = length;}

void Frog::setYGrid(int yGrid)
{this->yGrid = yGrid;}

void Frog::setXLeft(double xLeft)
{this->xLeft = xLeft;}

void Frog::setXRight(double xRight)
{this->xRight = xRight;}

void Frog::setOrientation(char orientation)
{this->orientation = orientation;}


void Frog::drawFrog()
{
	
		gfx_color(0, 255, 0);
	if(orientation == 'U' || orientation == 'D') {
		
		gfx_fill_circle(xCenter, yCenter, 18);
		
		gfx_fill_rectangle(xCenter - 25, yCenter - 11, 50, 4);
		
	    gfx_fill_rectangle(xCenter - 25, yCenter + 7, 50, 4);
	    
	    gfx_fill_rectangle(xCenter - 25, yCenter - 25, 4, 18);
	    
	    gfx_fill_rectangle(xCenter + 21, yCenter - 25, 4, 18);
	    
	    gfx_fill_rectangle(xCenter - 25, yCenter + 7, 4, 18);
	    
	    gfx_fill_rectangle(xCenter + 21, yCenter + 7, 4, 18);
	}
	else {
		gfx_fill_circle(xCenter, yCenter, 18);
		
		gfx_fill_rectangle(xCenter - 11, yCenter - 25, 4, 50);
		
	    gfx_fill_rectangle(xCenter + 7, yCenter - 25, 4, 50);
	    
	    gfx_fill_rectangle(xCenter - 25, yCenter - 25, 18, 4);
	    
	    gfx_fill_rectangle(xCenter - 25, yCenter + 21, 18, 4);
	    
	    gfx_fill_rectangle(xCenter + 7, yCenter - 25, 18, 4);
	    
	    gfx_fill_rectangle(xCenter + 7, yCenter + 21, 18, 4);
	 }


    
    gfx_color(255, 255, 0);
    gfx_fill_circle(xCenter, yCenter, 10);

    
    gfx_color(255, 0, 0);
    if(orientation == 'U') {
    	gfx_fill_circle(xCenter - 11, yCenter - 11, 6);
    	gfx_fill_circle(xCenter + 11, yCenter - 11, 6);
   	} else if (orientation == 'D') {
   		gfx_fill_circle(xCenter - 11, yCenter + 11, 6);
    	gfx_fill_circle(xCenter + 11, yCenter + 11, 6);
   	} else if (orientation == 'R') {
   		gfx_fill_circle(xCenter + 11, yCenter + 11, 6);
    	gfx_fill_circle(xCenter + 11, yCenter - 11, 6);
   	} else if (orientation == 'L') {
   		gfx_fill_circle(xCenter - 11, yCenter + 11, 6);
    	gfx_fill_circle(xCenter - 11, yCenter - 11, 6);
   	}
}


void Frog::moveFrog(char direction, Game &frogger)
{
	orientation = direction;
	switch (direction) {
		
    case 'R':
				xCenter += 50;
				xLeft += 50;
				xRight += 50;
			break;
    
		case 'L':
				xCenter -= 50;
				xLeft -= 50;
				xRight -= 50;
			break;
    
		case 'U':
			if(yCenter - 50 >= 75) {
				yCenter -= 50;
				yGrid += 1;
				frogger.setScore(frogger.getScore() + 10);
			}
			break;
    
		case 'D':
			if(yCenter + 50 <= 675) {
				yCenter += 50;
				yGrid -= 1;
				frogger.setScore(frogger.getScore() - 10);
			}
			break;
	}
}
