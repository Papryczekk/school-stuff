#include <iostream>

using namespace std;
int ile;

class neuron {
private:
	double input, weight;
public:
	double a, b, c;
	//konstruktor
	neuron(double* input, double* weight) {
		active(input, weight);
	}
	//funkcja aktywacyjna
	void active(double *input, double *weight) {

		for (int i = 0; i < ile; i++) {
			a =+ input[i];
			b =+ weight[i];
		}
		c = a * b;
		cout << c;
	}
};



int main()
{

	cout << "Podaj ile inputow: ";
	cin >> ile;
	double* input = new double[ile];
	double* waga = new double[ile];
	for (int i = 0; i < ile; i++) {
		cout << "Podaj input: ";
		cin >> input[i];
		cout << "Podaj wage: ";
		cin >> waga[i];
	}
	
	neuron::neuron(input, waga);
}
