/*
 * Parser.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: hien-minh.nguyen
 */

#include "Parser.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <limits>

using namespace std;

Parser::Parser() {
	// TODO Auto-generated constructor stub

}

Parser::~Parser() {
	// TODO Auto-generated destructor stub
}


int Parser::lecture() {



    ifstream fichier("readme.txt", ios::in);

    if(fichier)
    {
    	cout << "ok";

    	char c = fichier.get();
    	if(c == '#')
    	{
    		fichier.ignore(numeric_limits<int>::max(), '\n');
    		cout << "comm detected !!!!!!!!!!!!\n";
    	}
    	else
    	{
    		cout << "pas de comm";
    	}




    	fichier.close();
    }


    else
    {
    	cerr <<  "Impossible d'ouvrir le fichier" << endl;
    }

    return 0;

}
