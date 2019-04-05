#include <iostream>
using namespace std;

class mobil{
public :
    void melaju(){
    cout<<"\nMelaju di jalanan "<<endl;
    }
    void jumlah_roda(){
        cout<<"\nJumlah roda 4 ";
    }
};
class pesawat{
public:
    void terbang(){
    cout<<"\nTerbang mengelilingi dunia "<<endl;
    }
    void jumlah_roda(){
        cout<<"\nJumlah roda 3 ";
    }
};
class mobilterbang : public mobil, public pesawat{
public:
    void melajuterbang(){
    cout<<"\nMelaju di jalanan dan terbang mengelilingi dunia " <<endl;
    }
    void jumlah_roda(){
        cout<<"\nJumlah roda 4 ";
    }
};
int main(){
    mobilterbang mt;
    cout<<"Karakteristik dari Mobil Terbang adalah: "<<endl;
    mt.melaju();
    mt.terbang();
    mt.melajuterbang();
    mt.jumlah_roda();

return 0;
}
