#include <iostream>

using namespace std;
//#define multiplier(x,y) ((x)*(y))
constexpr inline int multiplier(int x,int y){return ((x) * (y));}//Fonction avec le style inline

int main(void)
{
	int a;
	int b;
	cout << "Entrez une valeur :" << endl;
	cin >> a;
	cout << "Entrez une autre valeur :" << endl;
	cin >> b;
	cout << multiplier(a + 1, b + 1) << endl;
}

