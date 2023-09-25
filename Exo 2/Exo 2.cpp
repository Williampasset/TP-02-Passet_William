#include <iostream>
#include <iomanip>

//Partie 1
//inline void multiplication(int n) { for (int i = 0; i < 11; i++) { printf("%d x %d = %d\n", n, i, (n * i)); } };


int main(void) {
	int n;
	std::cout << std::resetiosflags(std::ios_base::dec);
	std::cout << "Entrez un nombre entier entre 1 et 9: " << std::endl;
	std::cin >> n;
	/*std::cout << multiplication(n);*/
	for (int i = 0; i < 11; i++) {
		std::cout << std::setw(2) << i << std::setw(2) << "*" << std::setw(2) << n << " = " << i * n << std::endl;
	}

}