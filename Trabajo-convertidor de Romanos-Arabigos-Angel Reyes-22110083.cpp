//ANGEL EMANUEL MENDOZA REYES 
//22110083
//PROGRAMACION ORIENTADA A OBJETOS
//PARCIAL 2
//MANUEL MORALES MEDINA
#include <iostream>
#include <cstring>
using namespace std;
	class Roman {
		private:
			int numero, unidades, decenas, centenas, millares;
				public:
					void arabi_roman();
										};
		void Roman::arabi_roman(){
				cout << "Enter an Arabic number to convert it to Roman" << endl;
					cin >> numero;
						unidades = numero % 10; numero /= 10;
							decenas = numero % 10; numero /= 10;
								centenas = numero % 10; numero /= 10;
										millares = numero % 10; numero /= 10;
		switch (millares){
		case 1:
		cout << "M"; break;
		case 2:
		cout << "MM";break;
		case 3:
		cout << "MMM";break;
		}
		switch (centenas){
		case 1: 
			cout << "C";break;
		case 2:
			cout << "CC";break;
		case 3:
			cout << "CCC";break;
		case 4:
			cout << "CD";break;
		case 5:
			cout << "D";break;
		case 6: 
			cout << "DC";break;
		case 7:
			cout << "DCC";break;
		case 8: 
			cout << "DCCC";break;
		case 9:
			cout << "CM";break;
		}
		switch (decenas){
		case 1: 
			cout << "X";break;
		case 2:
			cout << "XX";break;
		case 3:
			cout << "XXX";break;
		case 4:
			cout << "XL";break;
		case 5:
			cout << "L";break;
		case 6:
			cout << "LX";break;
		case 7:
			cout << "LXX";break;
		case 8:
			cout << "LXXX";break;
		case 9:
			cout << "XC";break;
		}
		switch (unidades){
		case 1: 
			cout << "I";break;
		case 2:
			cout << "II";break;
		case 3:
			cout << "III";break;
		case 4:
			cout << "IV";break;
		case 5:
			cout << "V";break;
		case 6:
			cout << "VI";break;
		case 7:
			cout << "VII";break;
		case 8:
			cout << "VIII";break;
		case 9:
			cout << "IX";break;
		}
		cout << "\nRoman Numeral";
}
int main(){
	int menu = 1;
	int opc;

		void string_roman_arabic(string & s);
			int valor[] = { 1000, 500, 100, 50, 10, 5, 1 };
				string simbolo = "MDCLXVI", cadena;
					char c;
						int resultado = 0, i = 0, j = 0, ultimovalor = 0;
							bool valido = true;

	while (menu != 0) {
		Roman converse;
		cout << "Welcome to the Roman to Arabic Numerals Converter and vice versa" << endl;
		cout << "Choose the option you want to perform" << endl;
		cout << "1-convert roman to arabic" << endl;
		cout << "2-convert arabic to roman" << endl;
		cin >> opc;
		switch(opc){
		case 1:
			cout << "Enter a Roman numeral to convert it to Arabic" << endl;
			cin >> cadena;
			string_roman_arabic(cadena);
			while (valido && (i < cadena.length()))
			{
				c = cadena[i];
				j = simbolo.find(c);
				if (j >= 0)
				{
					resultado += valor[j];
					if (valor[j] > ultimovalor)
					{
						resultado -= 2 * ultimovalor;
					}
					ultimovalor = valor[j];
				}
				else
				{
					valido = false;
				    resultado = -1;
					cout<<"invalid option"<<endl;
				}
				i++;
			}
			cout << "\nArabic Number: " << resultado << endl;
			break;

		case 2:
			converse.arabi_roman();
			break;
		}
		cout << "\n1- you want to continue in the menu" << endl;
		cout << "\n0- you want to exit the menu" << endl;
		cin >> menu;
		if (menu > 1) {
			cout << "invalid option, it will exit the menu automatically" << endl;
			menu = 0;
		}
	}
}
void string_roman_arabic(string& s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
}
