#include <iostream>

/* Q10*/

using namespace std;

int main(int argc, char** argv) {
	
	double grausFarenheit;
	double grausCelsius;
	double conversao;
	
	cout <<"Digite a temperatura em graus celsius:" << endl;
	
	cin >> grausCelsius;
	
	conversao = (grausCelsius * 9/5) + 32;
	
	cout << "Conversao para farenheit:" << conversao << endl;
	system("pause");
	return 0;
}
