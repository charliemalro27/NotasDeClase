#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


//Clase

class Persona{

  private:

    string Nombre;
    string DNI;
    int Edad;

  public:

  //Constructor
    Persona(string Nombre="Charlie",string DNI="75943840W", int Edad=24){
      this->Nombre=Nombre;
      this->DNI=DNI;
      this->Edad=Edad;
    }

    //SETS

    void setNombre(string Nombre){
      this->Nombre=Nombre;
    }

    void setDNI(string DNI){
      this->DNI=DNI;
    }

    void setEdad(int Edad){
      this->Edad=Edad;
    }

    //Imprimir

    void imprimirNombre(){
      cout<<"Este es el nombre: "<<this->Nombre<<endl;
    }

    void imprimirDNI(){
      cout<<"Este es el DNI: "<<this->DNI<<endl;
    }

    void imprimirEdad(){
      cout<<"Esta es la edad: "<<this->Edad<<endl;
    }

    //GETS




};





int main(){

  Persona PersonillaDefecto;
  Persona Personilla;


  cout<<"Estos son los valores por defecto"<<endl;
  PersonillaDefecto.imprimirNombre();
  PersonillaDefecto.imprimirDNI();
  PersonillaDefecto.imprimirEdad();






  return 0;
}
