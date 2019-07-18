#include <iostream>
using namespace std;
float Sequence(float a, float b, float c)
{
	float n = (b / c) - (a / c);//5/1-3/1=2
	float m = a + ((n / 2)*c);//3+1=4
	float r = m * (n + 1);//4*3=12
	return r;


}
//Ram es un genio. Yo soy un genio.
//1 7 3    1 4 7=12  b/c=Numero de veces que cicla 
// 3 5 1  3 4 5=12
int main()
{
	float Numer1;
	float Numer2;
	float Numer3;
	cout << "Escribe los tres numeros de tu sequencia:  " << endl;
	cin >> Numer1 >> Numer2 >> Numer3;
	cout << Sequence(Numer1, Numer2, Numer3);
	cin.ignore();
	cin.get();

}