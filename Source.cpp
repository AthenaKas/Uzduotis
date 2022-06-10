#include "Header.h"
dior::~dior() //destructor
{
    
}

dior::dior(const dior& d) // copy konstruktorius
{
    forma = d.forma;
    l_tipas = d.l_tipas;
    medz = d.medz;
    garantija = d.garantija;
    priv = d.priv;
}

dior& dior::operator=(const dior& d) //copy assignment
{
    if (&d == this) return *this;
    forma = d.forma;
    l_tipas = d.l_tipas;
    medz = d.medz;
    garantija = d.garantija;
    priv = d.priv;
    return *this;
}

dior::dior(dior&& d)
{
    d.forma = {};
    d.l_tipas = {};
    d.medz = {};
    d.garantija = 0;
    d.priv = {};
}
dior& dior::operator=(dior&& d) {
    
    if (&d == this)
        return *this;
    forma = d.forma;
    l_tipas = d.l_tipas;
    medz = d.medz;
    garantija = d.garantija;
    priv = d.priv;
   
    d.forma = {};
    d.l_tipas = {};
    d.medz = {};
    d.garantija = 0;
    d.priv = {};
    return *this;
}



void dior::setgarantija(int sk) { garantija = sk; }
int dior::getgarantija() const { return garantija; }

void dior::setmedziaga(string medziaga) { medz= medziaga; }
string dior::getmedziaga() const { return medz; }

void dior::setprivalumai(string privalumai) { priv = privalumai; }
string dior::getprivalumai() const { return priv; }

void dior::setforma(string form) {forma = form; }
void dior::setl_tipas(string ltipas) { l_tipas = ltipas; }