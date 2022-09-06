#include <iostream>
#include "square.h"
#include "triangle.h"
#include "rhomboid.h"

using namespace std;

void Lienzo(Shape *shape){
    shape->draw();
}

void Clear(){
    cout << "\x1B[2J\x1B[H";
}

class InputManager{
    
    public:
        int op = 0, tipoCuadrado, dimensionFigura, x, y;
        Cuadrado cuadrado1;
        Triangulo triangulo1;
        Romboide romboide1;

        void run(){
            do{

                cout<<"\nIMPRESIÓN Y MOVIMIENTO DE FIGURAS\n\n";
                cout<<"1. Cuadrado"<<endl;
                cout<<"2. Triangulo"<<endl;
                cout<<"3. Romboide"<<endl;
                cout<<"0. Salir"<<endl;
        
                cin>>op;
        
                switch (op){
        
                    case 1:

                        cout<<"Cuadrado"<<endl;
                        cout<<"Elegir tipo de cuadrado: "<<endl;
                        cout<<"1. Cuadrado relleno"<<endl;
                        cout<<"2. Cuadrado vacio"<<endl;
                        cin>>tipoCuadrado;
                        
                        cout<<"Dimension: ";
                        cin>>dimensionFigura;

                        cout<<"Ingresar coordenada en X: ";
                        cin>>x;
                        cout<<"Ingresar coordenada en Y: ";
                        cin>>y;

                        cuadrado1.setSquareType(tipoCuadrado);
                        cuadrado1.getSquareType();
                        cuadrado1.setSquareSize(dimensionFigura);
                        cuadrado1.getSquareSize();
                        cuadrado1.setX(x);
                        cuadrado1.getX();
                        cuadrado1.setY(y);
                        cuadrado1.getY();
                        Lienzo(&cuadrado1);

                        Clear();        
                        break;

                    case 2:
                    
                        cout<<"Triangulo"<<endl;
                        
                        cout<<"Dimension: ";
                        cin>>dimensionFigura;

                        cout<<"Ingresar coordenada en X: "<<endl;
                        cin>>x;
                        cout<<"Ingresar coordenada en Y: "<<endl;
                        cin>>y;

                        triangulo1.setTriangleSize(dimensionFigura);
                        triangulo1.getTriangleSize();
                        triangulo1.setX(x);
                        triangulo1.getX();
                        triangulo1.setY(y);
                        triangulo1.getY();
                        Lienzo(&triangulo1);

                        Clear();
                        break;

                    case 3: 
                    
                        cout<<"Romboide"<<endl;
                        
                        cout<<"Dimension: ";
                        cin>>dimensionFigura;

                        cout<<"Ingresar coordenada en X: "<<endl;
                        cin>>x;
                        cout<<"Ingresar coordenada en Y: "<<endl;
                        cin>>y;

                        romboide1.setRhomboidSize(dimensionFigura);
                        romboide1.getRhomboidSize();
                        romboide1.setX(x);
                        romboide1.getX();
                        romboide1.setY(y);
                        romboide1.getY();
                        Lienzo(&romboide1);

                        Clear();
                        break;

                    default: 
                        cout<<"Saliendo del programa..."<<endl;
                }
            
            } while (op != 0);
        
        }
        

   

    

    
};