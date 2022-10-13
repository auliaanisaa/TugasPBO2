#include <iostream>
 
using namespace std;
 
class Laptop {
 
  private:
    string pemilik;
    string merk;
 
  public:
    Laptop(string var1, string var2) {
      pemilik = var1;
      merk = var2;
 
      cout << "Object Laptop " << pemilik << " sudah dibuat" << endl;
    }
 
    ~Laptop() {
      cout << "Object Laptop " << pemilik << " sudah dihapus" << endl;
    }
 
    string hidupkanLaptop() {
      return "Hidupkan Laptop " + merk + " Milik " + pemilik;
    }
 
};
 
int main()
{
  Laptop laptopAndi("Andi","Asus");
  Laptop laptopLisa("Lisa","Acer");
  Laptop laptopRudi("Rudi","Lenovo");
 
  cout << "     ====================     "<< endl;
  cout << laptopAndi.hidupkanLaptop() << endl;
  cout << laptopLisa.hidupkanLaptop() << endl;
  cout << laptopRudi.hidupkanLaptop() << endl;
  cout << "     ====================     "<< endl;
 
  return 0;
}
