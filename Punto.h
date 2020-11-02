#ifndef PUNTOS_LIBRARY_H
#define PUNTOS_LIBRARY_H
#include <cmath>

class Punto2D{
    float x,y;
public:
    void SetPosicion(float n1,float n2){
        x=n1;
        y=n2;
    }

    void Trasladar(float temp1,float temp2){
        x+=temp1;
        y+=temp2;
    }
    void RotarRespectoAlOrigen(float temp1){
        temp1=temp1*(3.14159/180);
        float xp=x*(cos(temp1))-y*(sin(temp1));
        float yp=y*(cos(temp1))+x*(sin(temp1));
        x=xp;
        y=yp;
    }
    void Escalar(float temp1, float temp2 ){
        x*=temp1;
        y*=temp2;
    }
    float GetX(){
        return x;
    }
    float GetY(){
        return y;
    }

};

#endif //PUNTOS_LIBRARY_H

