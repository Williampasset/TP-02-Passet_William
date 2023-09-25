#pragma once
#include <iostream>

using namespace std;

class TextRectangle {
private:
	//Param�tre priv� du rectangle
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
	//M�thode: getArea() --> Affiche et renvoie la surface du rectangle
	int getArea() {
		//std::cout << "Votre rectangle a pour surface " << (width * heigth) << std::endl;
		return (width * heigth);
	}
	//M�thode: getPerimeter() --> Affiche et renvoie le p�rim�tre du rectangle
	int getPerimeter() {
		//std::cout << "Votre rectangle a pour p�rim�tre " << (2 * heigth + 2 * width) << std::endl;
		return (2 * heigth + 2 * width);
	}
	//M�thode: print() --> Affiche l'ensemble des caract�ristiques d'un rectangle
	void print() {
		cout << "Votre rectangle a pour hauteur: " << heigth << endl;
		cout << "Votre rectangle a pour largeur: " << width << endl;
		cout << "Votre rectangle a pour p�rim�tre: " << getPerimeter() << endl;
		cout << "Votre rectangle a pour surface: " << getArea() << endl;
	}
	//M�thode: drawArea(const char& pattern) --> Dessine la surface du rectangle avec le caract�re pass� en param�tre
	void drawArea(const char& pattern) {
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				cout << pattern;
			}
			cout<<endl;
		}
		cout << endl;
	}
	//M�thode: drawPerimeter(const char& pattern) --> Dessine le p�rim�tre du rectangle avec le caract�re pass� en param�tre
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

