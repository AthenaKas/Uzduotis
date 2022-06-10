#include "Header.h"

using std::setw;
int main()
{
    vector<dior> mas;

    dior a;
    dior b = a;
    dior c;
    dior d(a);

	string forma, tipas;
	std::cout << "Iveskite forma, lindziu tipa, medziaga, privaluma ir garantija: "; std::cin >> b;
	
	//a.setforma(forma);
	//std::cout << "Iveskite linziu tipa: "; std::cin >> tipas;
	//a.setl_tipas(tipas);

	int garantija;
	string privalumai, medziaga;

	//	std::cout << "Iveskite garantija: "; std::cin >> garantija;
	//	a.setgarantija(garantija);
	//	std::cout << "Iveskite privaluma: "; std::cin >> privalumai;
	//	a.setprivalumai(privalumai);
	//	std::cout << "Iveskite medziaga: "; std::cin >> medziaga;
	//	a.setmedziaga(medziaga);

		mas.push_back(a);

		cout << setw(20) << "Froma" << " | ";
		cout << setw(20) << "Linziu tipas" << " | ";
		cout << setw(20) << "Medziaga" << " | ";
		cout << setw(20) << "Privalumai" << " | ";
		cout << setw(20) << "Garantija" << endl;

		cout << b;

		/*cout << setw(20) << a.getforma() << " | " << setw(20) << a.getl_tipas() << " | ";

		cout << setw(20) << a.getmedziaga() << " | ";
		cout << setw(20) << a.getprivalumai() << " | ";
		cout << setw(20) << a.getgarantija() << endl;*/

		
		
		
}

