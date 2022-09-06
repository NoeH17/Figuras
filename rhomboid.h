#include <iostream>
using namespace std;

class Romboide: public Shape{

    private:
        int dimensionRomboide, x, y;

    public:
        
        void Clear() {
            cout << "\x1B[2J\x1B[H";
        }

        void setRhomboidSize(int size){
            dimensionRomboide = size;
        }
        int getRhomboidSize(){
            if (dimensionRomboide < 3){
                dimensionRomboide = 3;
            }
            return dimensionRomboide;
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
                cout <<"Romboide de dimension: "<<dimensionRomboide<<endl;
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

                for (int i=1; i <= dimensionRomboide; i++) {
		
		            for (int z = 0; z < x; z++) {
			            cout << " ";
		            }
		        for (int j = 1; j <= i; j++) {
			            cout << "*";
		            }
		                cout << "\n";
	            }
            }
        }
};
      