#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::system("clear");
    char a=' ', b=' ', c=' ', d=' ', e=' ', f=' ', g=' ', h=' ', i=' ';
    //color rojo : "\033["<<31<<"m"<<valor a colorear<<"\033[m"
    //color azul : "\033["<<34<<"m"<<valor a colorear<<"\033[m"
    char variable;
    int ficha;
    std::cout << a << " | " << b << " | " << c << std::endl;
    std::cout << "----------"<<std::endl;
    std::cout << d << " | " << e << " | " << f << std::endl;
    std::cout << "----------"<<std::endl;
    std::cout << g << " | " << h << " | " << i << std::endl;
    
    for (int i=0; i<9; ++i){
      std::cout<<"Ingrese la posicion en donde desea colocar la ficha(1-9): ";
      std::cin>>variable;
      if (variable%2==0){
        switch(variable)
        {
          case '1':
            a='X';
            break;
          case '2':
            b='X';
            break;
          case '3':
            c='X';
            break;
          case '4':
            d='X';
            break;
          case '5':
            e='X';
            break;
          case '6':
            f='X';
            break;
          case '7':
            g='X';
            break;
          case '8':
            h='X';
            break;
          case '9':
            i='X';
            break;
          default:
            break;
        }
      }
    }
    return 0;
}
