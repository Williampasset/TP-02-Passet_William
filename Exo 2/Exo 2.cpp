#include <iostream>
#include <iomanip>

using namespace std;
//Partie 1
//inline void multiplication(int n) { for (int i = 0; i < 11; i++) { printf("%d x %d = %d\n", n, i, (n * i)); } };


int main(void) {
	int n;
	cout << resetiosflags(ios_base::dec);
	cout << "Entrez un nombre entier entre 1 et 9: " << endl;
	cin >> n;
	/*std::cout << multiplication(n);*/
	for (int i = 0; i < 11; i++) {
		cout << setw(2) << i << setw(2) << "*" << setw(2) << n << " = " << i * n << endl;
	}

}