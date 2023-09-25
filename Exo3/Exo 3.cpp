#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(void) {
	//Ecriture d'un fichier texte créer en C++
	 ofstream myfile;
	 myfile.open("test.txt");
	 if (myfile.is_open()) {
		 myfile << "Hello worldh";
		 myfile.close();
	 }
	 else {
		 cout << "Problème dans l'écriture du fichier" << endl;
	 }
	 //Lecture de ce fichier texte
	 ifstream myfileread;
	 myfileread.open("test.txt");;
	 if (myfileread.is_open()) {
		 int nbmot = 0;
		 int nbligne = 0;
		 int nblettre = 0;

		 string ligne;
		 while (getline(myfileread, ligne)) {
			 nbligne++;

			 stringstream buffer(ligne);
			 string mot;
			 while (buffer >> mot) {
				 nbmot++;
				 nblettre += (int)mot.size();
			 }
		 }
		 myfileread.close();
		 cout << "Nombre de ligne: " << nbligne << endl;
		 cout << "Nombre de mot: " << nbmot << endl;
		 cout << "Nombre de lettre: " << nblettre << endl;
	 }
	 else {
		 cout << "Problème dans la lecture du fichier" << endl;
	 }

	 return 0;
}