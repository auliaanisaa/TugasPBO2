#include <iostream>
using namespace std;
 
class Laptop {
 
  private:
   string pemilik;
   double lebarLayar;
 
  public:
    void setPemilik(string var1) {
      pemilik = var1;
    }
 
    void setLebarLayar(double var2) {
      if (var2 < 20) {
        lebarLayar = var2;
      }
      else {
        lebarLayar = 20;
      }
    }
 
    string getPemilik() {
      return "Bapak/Ibu " + pemilik;
    }
 
    double getLebarLayar() {
      return lebarLayar;
    }
};
 
int main()
{
  Laptop laptopAli;
 
  laptopAli.setPemilik("Ali");
  laptopAli.setLebarLayar(31);
 
  cout << laptopAli.getPemilik() << endl;
  cout << laptopAli.getLebarLayar() << endl;
 
  return 0;
}
