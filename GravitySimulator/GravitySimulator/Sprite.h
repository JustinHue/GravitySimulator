#pragma once

#include <allegro5\allegro.h>

class Sprite {
public:
	
	// Constructors
	Sprite();
	Sprite(double p_x, double p_y);
	Sprite(double p_x, double p_y, int p_width, int p_height);	
	/* Sprite(double p_x, double p_y, ALLEGRO_BITMAP p_bitmap); */

	// Deconstructor
	~Sprite();

	// Getter Methods
	double GetX();
	double GetY();
	double *GetCoordinates();
	double *GetCenterCoordinates();
	double GetCenterX();
	double GetCenterY();
	int  GetWidth();
	int GetHeight();

protected:

	double _x, _y;
	int _width, _height;

private:
	

};