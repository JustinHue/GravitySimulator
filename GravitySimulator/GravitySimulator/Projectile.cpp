#include "stdafx.h"
#include "Projectile.h"

Projectile::Projectile() :
	Sprite() {
	// Empty projectile
}

Projectile::Projectile(double p_x, double p_y) :
	Sprite(p_x, p_y) {
	// Projectile initialization here
}

Projectile::~Projectile() {

}

