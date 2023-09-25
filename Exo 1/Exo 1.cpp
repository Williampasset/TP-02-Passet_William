#include <iostream>

//#define multiplier(x,y) ((x)*(y))
inline int multiplier(int x,int y){return ((x) * (y));}

int main(void)
{
	int a;
	int b;
	std::cout << "Entrez une valeur :" << std::endl;
	std::cin >> a;
	std::cout << "Entrez une autre valeur :" << std::endl;
	std::cin >> b;
	std::cout << multiplier(a + 1, b + 1) << std::endl;
}

