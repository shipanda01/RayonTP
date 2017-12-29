/*
 * Sphere.h
 *
 *  Created on: Nov 29, 2017
 *      Author: hnguye5
 */

#ifndef SPHERE_H_
#define SPHERE_H_
#include "Objet.h"

class Sphere : public Objet{
private :
	double radius;

public:
	Sphere() : Objet(), radius(0){};
	Sphere(Position3D pos, Couleur coul, double ref, double rad) : Objet(pos, coul, ref), radius(rad){};

	virtual ~Sphere();

	double getRadius() const {
		return radius;
	}

	void setRadius(double radius) {
		this->radius = radius;
	}

	void afficher() const
	{
		std::cout << "Sphere position : ";
		std::cout << position.getX()
				  << " " <<  position.getY() << " "
				  <<  position.getZ() << std::endl;
		std::cout << "Sphere couleur : ";
		std::cout <<  couleur.getR() << " "
						<<   couleur.getG() << " "
						<<   couleur.getB() << std::endl;
		std::cout << "reflec = " <<  reflection
					<< ", radius = " << radius << "\n\n" << std::endl;
	}

	std::shared_ptr<Position3D> intersection(const Position3D& posSource, const Position3D& posDir) const;
};


#endif /* SPHERE_H_ */
