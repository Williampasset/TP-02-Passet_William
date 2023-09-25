#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(void) {
	 std::ofstream myfile;
	 myfile.open("test.txt");
	 if (myfile.is_open()) {
		 myfile << "Hello World";
		 myfile.close();
	 }
	 else {
		 std::cout << "Problème dans l'écriture du fichier" << std::endl;
	 }
	 std::ifstream myfileread;
	 myfileread.open("test.txt");;
	 if (myfileread.is_open()) {
		 int nbmot = 0;
		 int nbligne = 0;
		 int nblettre = 0;

		 std::string ligne;
		 while (std::getline(myfileread, ligne)) {
			 nbligne++;

			 std::stringstream buffer(ligne);
			 std::string mot;
			 while (buffer >> mot) {
				 nbmot++;
				 nblettre += (int)mot.size();
			 }
		 }
		 myfileread.close();
		 std::cout << "Nombre de ligne: " << nbligne << std::endl;
		 std::cout << "Nombre de mot: " << nbmot << std::endl;
		 std::cout << "Nombre de lettre: " << nblettre << std::endl;
	 }
	 else {
		 std::cout << "problème dans la lecture du fichier" << std::endl;
	 }

	 return 0;
}