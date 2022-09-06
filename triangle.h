#include <iostream>
using namespace std;

class Triangulo: public Shape{

    private:
        int dimensionTriangulo, x, y;

    public:

        void Clear() {
            cout << "\x1B[2J\x1B[H";
        }

        void setTriangleSize(int size){
            dimensionTriangulo = size;
        }
        int getTriangleSize(){
            if (dimensionTriangulo < 3){
                dimensionTriangulo = 3;
            }
            return dimensionTriangulo;
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
                cout <<"Triangulo de dimension: "<<dimensionTriangulo<<endl;
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

                for (int i = 0; i <= dimensionTriangulo; i++){
                    for (int z = 0; z < x; z++) {
					        cout << " ";
				    }
                    for (int j = 0; j < i; j++){
                        cout << "*" ;
                    }
                    
                    cout << endl;
                }
            }
        }

};