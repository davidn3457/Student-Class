//David Nuñez Rodriguez
//A01634928
// función del programa: desplegar datos del alumno y el incremento en su edad a traves de los años

//Reflexión: aplicación de los metodos getters and setters

#include <iostream>
#include <list>
using namespace std; 
class Alumno{
  private:
  string matricula{};
  string nombre{};
  int edad{};
  string carrera{};
  
  public:
  Alumno();
  Alumno(string _matricula, string _nombre, int _edad, string _carrera); 
  string getMatricula();
  string getNombre();
  int getEdad();
  string getCarrera();
  void setMatricula (string _matricula);
  void setNombre (string _nombre);
  void setEdad (int _edad);
  void setCarrera (string _carrera); 
  void muestra();
  void cumpleYears();
};


Alumno::Alumno(){}
Alumno::Alumno(string _matricula, string _nombre, int _edad, string _carrera){
  matricula= _matricula;
  nombre= _nombre;
  edad= _edad;
  carrera= _carrera;
}

string Alumno::getMatricula(){
  return matricula;
}
string Alumno::getNombre(){
  return nombre;
}
int Alumno::getEdad(){
  return edad;
}
string Alumno::getCarrera(){
  return carrera;
}

void Alumno::setMatricula(string _matricula){
  matricula = _matricula;
}
void Alumno::setNombre(string _nombre){
  nombre = _nombre;
}
void Alumno::setEdad(int _edad){
  edad = _edad;
}
void Alumno::setCarrera(string _carrera){
  carrera = _carrera;
}

void Alumno::muestra(){
  cout << "\n Matricula = " << matricula <<
  "\n Nombre =" << nombre <<
  "\n Edad = " << edad <<
  "\n Carrera =" << carrera << endl;
}

void Alumno::cumpleYears(){
  edad=edad+1;
  }

int main() {

  Alumno sofi{"1", "Sofía González",20, "IID"}, pablo{"2", "Pablo López",19, "IID"}, angela{"3", "Ángela Méndez",20, "IID"}, oscar{"4", "Óscar Cantú",20, "IID"}, sergio{"5", "Sergio Osuna ",20, "IID"}, mariana{"6", "Mariana Gancedo",20, "IID"}, esteban{"7", "Esteban Russek",20, "IID"}, paco{"8", "Francisco Herrera",20, "IID"}, joaquin{"9", "Joaquín Roche",20, "ITC"}, gerardo{"10", "Gerardo Saldaña",20, "IID"}, andres{"11", "Andrés Mange",20, "IID"};
  
  cout<<"\nCasos de Prueba: "
  <<"\n ";
  sofi.muestra();
  pablo.muestra();
  angela.muestra();
  oscar.muestra();
  //sergio.muestra();
  //mariana.muestra();
  //esteban.muestra();
  //paco.muestra();
  //joaquin.muestra();
  //gerardo.muestra();
  //andres.muestra();
  
   cout<<"*********************************"
  <<"\nPrueba de Incremento de años: "
  <<"\n*********************************";
  sofi.cumpleYears();
  sofi.muestra();
  return 0;
}