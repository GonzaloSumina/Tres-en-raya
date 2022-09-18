#include <iostream>
#include <string>

int main() {
    std::system("cls");
    std::cout << "Bienvenidos al juego Tres en Raya\nUCSP-Ciencia de la Computacion 2-1";
    std::cout << "Nombres.\n Gonzalo Sumina\n Juan Palo\n";
    char a='1', b='2', c='3', d='4', e='5', f='6', g='7', h='8', i='9';
    std::string fila="\033[31m----------\033[m";
    std::string columna="\033[31m | \033[m";
    //color rojo : "\033["<<31<<"m"<<valor a colorear<<"\033[m"
    //color azul : "\033["<<34<<"m"<<valor a colorear<<"\033[m"
    char variable;
    char ficha1, ficha2;
    std::cout << a << columna << b << columna << c << std::endl;
    std::cout << fila<<std::endl;
    std::cout << d << columna << e << columna << f << std::endl;
    std::cout << fila<<std::endl;
    std::cout << g << columna << h << columna << i << std::endl;

    std::cout << "Ingrese el simbolo que representara al Jugador1: ";
    std::cin >> ficha1;
    std::cout << "Ingrese el simbolo que representara al Jugador2: ";
    std::cin >> ficha2;
    
    for (int x=0; x<9; ++x){
      std::cout<<"Ingrese la posicion en donde desea colocar la ficha(1-9): ";
      std::cin>>variable;
      if (x%2==0){
        switch(variable)
        {
          case '1':
            if (a==ficha1 || a==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            a=ficha1;
            break;
            }
          case '2':
            if (b==ficha1 || b==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            b=ficha1;
            break;
            }
          case '3':
            if (c==ficha1 || c==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            c=ficha1;
            break;
            }
          case '4':
            if (d==ficha1 || d==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            d=ficha1;
            break;
            }
          case '5':
            if (e==ficha1 || e==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            e=ficha1;
            break;
            }
          case '6':
            if (f==ficha1 || f==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            f=ficha1;
            break;
            }
          case '7':
            if (g==ficha1 || g==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            g=ficha1;
            break;
            }
          case '8':
            if (h==ficha1 || h==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            h=ficha1;
            break;
            }
          case '9':
            if (i==ficha1 || i==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            i=ficha1;
            break;
            }
          default:
            std::cout << "Debe ingresar valores del 1 al 9";
            x=9;
            break;
        }
        std::system("cls");
        std::cout << a << columna << b << columna << c << std::endl;
        std::cout << fila<<std::endl;
        std::cout << d << columna << e << columna << f << std::endl;
        std::cout << fila<<std::endl;
        std::cout << g << columna << h << columna << i << std::endl;
        if (x>=4){
           if ((a==b && b==c) || (a==d && d==g) || (a==e && e==i)||
              (b==e && e==h) || (c==f && f==i) || (c==e && e==g) ||
              (d==e && e==f) || (g==h && h==i)){
              std::cout << "Felicidades! Gano el Jugador "<<ficha1;
              return 0;
           }
           else if (x==9){
              std::cout << "Empate";
              return 0;
           }
        }
      }
      if ((x+1)%2==0){
        switch(variable)
        {
          case '1':
            if (a==ficha2 || a==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            a=ficha2;
            break;
            }
          case '2':
            if (b==ficha2 || b==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            b=ficha2;
            break;
            }
          case '3':
            if (c==ficha2 || c==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            c=ficha2;
            break;
            }
          case '4':
            if (d==ficha2 || d==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            d=ficha2;
            break;
            }
          case '5':
            if (e==ficha2 || e==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            e=ficha2;
            break;
            }
          case '6':
            if (f==ficha2 || f==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            f=ficha2;
            break;
            }
          case '7':
            if (g==ficha2 || g==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            g=ficha2;
            break;
            }
          case '8':
            if (h==ficha2 || h==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            h=ficha2;
            break;
            }
          case '9':
            if (i==ficha2 || i==ficha2){
              std::cout<< "Esa posicion ya esta seleccionada.\n";
              --x;
              continue;
            }
            else{
            i=ficha2;
            break;
            }
          default:
            std::cout << "Debe ingresar valores del 1 al 9";
            x=9;
            break;
        }
        std::system("cls");
        std::cout << a << columna << b << columna << c << std::endl;
        std::cout << fila<<std::endl;
        std::cout << d << columna << e << columna << f << std::endl;
        std::cout << fila<<std::endl;
        std::cout << g << columna << h << columna << i << std::endl;
        if (x>=4){
          if ((a==b && b==c) || (a==d && d==g) || (a==e && e==i)||
              (b==e && e==h) || (c==f && f==i) || (c==e && e==g) ||
              (d==e && e==f) || (g==h && h==i)){
            std::cout << "Felicidades! Gano el Jugador "<<ficha2;
            return 0;
          }
          else if (x==9){
            std::cout << "Empate";
            return 0;
          }
        }
      }
    }
    

    return 0;

}
