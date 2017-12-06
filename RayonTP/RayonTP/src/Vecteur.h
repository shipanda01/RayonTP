/*
 * Vecteur.h
 *
 *  Created on: Dec 4, 2017
 *      Author: hien-minh.nguyen
 */

#ifndef VECTEUR_H_
#define VECTEUR_H_

class Position {
private:
	int x;
	int y;
	int z;

public:
	Position();
	Position(int x, int y, int z);
	Position(const Position &source);

	virtual ~Position();

	int getX() const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY() const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}

	int getZ() const {
		return z;
	}

	void setZ(int z) {
		this->z = z;
	}
};



class Couleur {
private:
	int r;
	int g;
	int b;

public:
	Couleur();
	Couleur(int r, int g, int b);
	Couleur(const Couleur &source);

	virtual ~Couleur();

	int getB() const {
		return b;
	}

	void setB(int b) {
		this->b = b;
	}

	int getG() const {
		return g;
	}

	void setG(int g) {
		this->g = g;
	}

	int getR() const {
		return r;
	}

	void setR(int r) {
		this->r = r;
	}
};
#endif /* VECTEUR_H_ */