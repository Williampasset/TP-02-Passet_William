#pragma once
#include <iostream>

using namespace std;

class TextRectangle {
private:
	//Paramètre privé du rectangle
	int width;
	int heigth;
public:
	//Constructeur
	TextRectangle() {
		width = 0;
		heigth = 0;
		cout << "Votre rectangle fait " << width << "x" << heigth << endl;
	}
	//Setters
	void setRectangle(int width_, int heigth_) {
		if (width_ >= 10 || heigth_ >= 10) {
			cout << "La taille de votre rectangle est trop grande" << endl;
		}
		else {
			width = width_;
			heigth = heigth_;
		}
	}
	//Getters
	int* getRectangle() {
		int tab[2] = { width, heigth };
		return tab;
	}
	//Méthode: getArea() --> Affiche et renvoie la surface du rectangle
	int getArea() {
		//std::cout << "Votre rectangle a pour surface " << (width * heigth) << std::endl;
		return (width * heigth);
	}
	//Méthode: getPerimeter() --> Affiche et renvoie le périmétre du rectangle
	int getPerimeter() {
		//std::cout << "Votre rectangle a pour périmétre " << (2 * heigth + 2 * width) << std::endl;
		return (2 * heigth + 2 * width);
	}
	//Méthode: print() --> Affiche l'ensemble des caractéristiques d'un rectangle
	void print() {
		cout << "Votre rectangle a pour hauteur: " << heigth << endl;
		cout << "Votre rectangle a pour largeur: " << width << endl;
		cout << "Votre rectangle a pour périmétre: " << getPerimeter() << endl;
		cout << "Votre rectangle a pour surface: " << getArea() << endl;
	}
	//Méthode: drawArea(const char& pattern) --> Dessine la surface du rectangle avec le caractère passé en paramètre
	void drawArea(const char& pattern) {
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				cout << pattern;
			}
			cout<<endl;
		}
		cout << endl;
	}
	//Méthode: drawPerimeter(const char& pattern) --> Dessine le périmétre du rectangle avec le caractère passé en paramètre
	void drawPerimeter(const char& pattern) {
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == heigth - 1) {
					cout << pattern;
				}
				else if (j == 0 || j == width - 1) {
					cout << pattern;
				}
				else {
					cout << ' ';
				}
			}
			cout << endl;
		}
		cout << endl;
	}
};

