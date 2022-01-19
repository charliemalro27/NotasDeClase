#include <iostream>;

using namespace std;

int main(){
  string saludo ="Hola,mundo";
  string contrasena="AAA";
  string repetir;
  bool esCorrecto= false;
  /*cout<<saludo<<endl;
  cout<<"Primera prueba de c++";
  */

  cout << "escribe una palabra";

  while (true){
  cin >> repetir >> endl;
  cout << repetir << endl;
}
  while (!esCorrecto){
    cout<<"introduce contrasena";
    cin >> repetir;
    if (repetir==contrañesa){
      esCorrecto=true;
    }
    cout << repetir << endl;
}
  return 0
}
