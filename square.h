#include <iostream>
#include "Shape.cpp"
using namespace std;

class Cuadrado: public Shape{

    private:
        int dimensionCuadrado, tipoCuadrado, x, y;

    public: 
        void Clear(){
            cout << "\x1B[2J\x1B[H";
        }

        void setSquareSize(int tamanioCuadrado){
            dimensionCuadrado = tamanioCuadrado;

        }
        int getSquareSize(){
            if (dimensionCuadrado < 2){
                dimensionCuadrado = 2;
                
            }
            return dimensionCuadrado;
        }

        void setSquareType(int type){
            tipoCuadrado = type;

        }
        int getSquareType(){
            if ((tipoCuadrado < 1 || tipoCuadrado > 2)){
                tipoCuadrado = 1;
                
            }
            return tipoCuadrado;
        }

        void setX(int _x){
            x = _x;
        }
        int getX(){
            if(x < 1){
                x = 2;
            }
            return x;
        }

        void setY(int _y){
            y = _y;
        }
        int getY(){
            if(y < 1){
                y = 2;
            }
            return y;
        }

        void draw(){
            char moverse;
            while((moverse = cin.get())  != 'e'){

                Clear();
                cout<<"Cuadrado de dimension: "<<dimensionCuadrado<<endl;
                cout <<"Cordenadas x: "<< getX()<<endl;
			    cout <<"Cordenadas y: "<< getY()<<endl;
                cout <<"[e] Salir"<<endl;
                if (moverse == 'a') {
                    x--;
                }
                else if (moverse == 's') {
                    y++;
                }
                else if (moverse == 'w') {
                    y--;
                }
                else if (moverse == 'd') {
                    x++;
                }
                for (int c = 0; c < y; c++) {
				cout << endl;

			    }
                

                if (tipoCuadrado == 2){
                    for (int i = 0; i < dimensionCuadrado; i++){
                        for (int z = 0; z < x; z++) {
					        cout << " ";

				        }
                        for (int j = 0; j < dimensionCuadrado; j++){   
                            if (i == 0 || j == 0 || i == dimensionCuadrado-1 || j == dimensionCuadrado-1){
                                cout <<"*";
                            }
                            else{
                                cout<<" ";
                            }
                            if(j+1 == dimensionCuadrado){
                                cout<<endl;
                            }
            
                        }
        
                    }
                }

                else if(tipoCuadrado == 1){  
                    for (int i = 0; i < dimensionCuadrado; i++){
                        for (int z = 0; z < x; z++) {
					        cout << " ";

				        }
                        for (int j = 0; j < dimensionCuadrado; j++){   
                            cout <<"* ";

                            if(j + 1 == dimensionCuadrado){
                                cout<<endl;
                            }
                        }
                    }
                }
                
                
            }
        }
             
};
