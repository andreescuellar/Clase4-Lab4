// Simple Hello World
 
#include <iostream>
 

void sumapunteros(int, int, int*);
void restapunteros(int, int, int*);
void multipunteros(int, int, int*);
void divipunteros(int, int, double*);

int sumar (int a, int b){
    
    return a+b;
}
int restar (int a, int b){
    
    return a-b;
}
int multiplicar (int a, int b){
    
    return a*b;
}
int dividir (int a, int b){
    
    return a/b;
}

int main(){
  std::cout << "Calculadora sin punteros"<<std::endl;  
  std::cout << "resultado de la suma " << sumar(2,4) <<std::endl;
  std::cout << "resultado de la resta " << restar(8,4) <<std::endl;
  std::cout << "resultado de la multiplicar " << multiplicar(2,4) <<std::endl;
  std::cout << "resultado de la dividir " << dividir(10,2) <<"\n"<<std::endl;
  int sum = -1; 
  int res = -1;
  int mul = -1;
  double div = -1;
  sumapunteros(10,5,&sum);
  restapunteros(10,5,&res);
  multipunteros(10,5,&mul);
  divipunteros(10,5,&div);
  std::cout << "Calculadora con punteros"<<std::endl;  
  std::cout << "resultado de la suma por punteros es: " << sum<<std::endl;
  std::cout << "resultado de la resta por punteros es: " << res<<std::endl;
  std::cout << "resultado de la multiplicacion por punteros es: " << mul<<std::endl;
  std::cout << "resultado de la division por punteros es: " << div<<std::endl;
  return 0;
}

void sumapunteros(int a, int b, int* sum){
    *sum = a+b;
}
void restapunteros(int a, int b, int* res){
    *res = a-b;
}
void multipunteros(int a, int b, int* mul){
    *mul = a*b;
}
void divipunteros(int a, int b, double* div){
    *div = a/b;
}
