#include "stdafx.h"
#include <allegro5\allegro.h>
#include "Sprite.h"

// Constructors
Sprite::Sprite() {
	Sprite(0, 0, 0, 0);
}

Sprite::Sprite(double p_x, double p_y) {
	Sprite(p_x, p_y, 0, 0);
}

Sprite::Sprite(double p_x, double p_y, int p_width, int p_height) : 
	_x(p_x), _y(p_y), _width(p_width), _height(p_height) {
	// Other things here
}

/*
Sprite::Sprite(double p_x, double p_y, ALLEGRO_BITMAP p_bitmap) {

}
*/

// Deconstructor
Sprite::~Sprite() { }

// Getter Methods
double Sprite::GetX() {
	return Sprite::_x;
}

double Sprite::GetY() {
	return Sprite::_y;
}

double *Sprite::GetCoordinates() { 
	double ret_Coordinates[2] = { Sprite::_x, Sprite::_y };
	return ret_Coordinates;
}

double *Sprite::GetCenterCoordinates() { 
	double ret_CenterCoordinates[2] = {
		(Sprite::_x + Sprite::_width) / 2,
		(Sprite::_y + Sprite::_height) / 2
	};
	return ret_CenterCoordinates;
}

double Sprite::GetCenterX() { 
	return (Sprite::_x + Sprite::_width) / 2;
}

double Sprite::GetCenterY() { 
	return (Sprite::_y + Sprite::_height) / 2;
}

int Sprite::GetWidth() { 
	return Sprite::_width;
}

int Sprite::GetHeight() { 
	return Sprite::_height;
}

