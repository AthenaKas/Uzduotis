#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class akiniai {
protected:
	string l_tipas, forma; //lindziu tipas
public:
	string getl_tipas() const { return l_tipas; }
	string getforma() const { return forma; }
	virtual void setl_tipas(string l_tipas) = 0;
	virtual void setforma(string forma) = 0;

	akiniai(string l = "", string f = "") : l_tipas{ l }, forma{ f }{}
};
class dior : public akiniai 
{
private:
	string medz;
	int garantija;
	string priv; //prvalumai
public:
	dior() {
		medz = {};
		garantija = 0;
		priv = {};
	}

	dior(int garantija, string medziaga, string privalumai, string l_tipas, string forma) : akiniai(l_tipas, forma) {}

	~dior(); //destruktorius
	dior(const dior& d); 
	dior& operator=(const dior& d);
	dior(dior&& d);                
	dior& operator=(dior&& d);

	friend std::ostream& operator<<(std::ostream& out, const dior& d) {
		out << setw(20) << d.forma << " | " << setw(20) << d.l_tipas << " | " << setw(20) << d.medz << " | " << setw(20) << d.priv << " | " << setw(20) << d.garantija << endl;
		return out;
	}
	friend std::istream& operator>>(std::istream& in, dior& d) {
		in >> d.forma >> d.l_tipas >> d.medz >> d.priv>> d.garantija;
		return in;
	}
	
	void setgarantija(int sk);
	int getgarantija() const;

	void setmedziaga(string mediaga);
	string getmedziaga()const;

	void setprivalumai(string privalumai);
	string getprivalumai()const;
	
	void setl_tipas(string ltipas);

	void setforma(string form);


};
void rezultatai(dior& a);