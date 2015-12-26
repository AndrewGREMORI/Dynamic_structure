
#include "math.h"
#include "iostream"
using namespace std;
 
class com_num
{
    float re, im;

    public:

    com_num(){}
    com_num (float a, float b);

    float getre(){return re;}
    float getim(){return im;}
    void setim(float im1){im=im1;}
    void setval(float re, float im){
        this->re = re;
        this->im = im;
    }

    com_num& operator + (com_num& N2);

    com_num& operator - (com_num& N2);

    com_num& operator * (com_num& N2);

    com_num& operator / (com_num& N2);

    bool operator == (com_num& N2);

    com_num conjugate (com_num N1); // сопряж

    float module(com_num N1); // модуль

    float argument(com_num N1); //аргумент

    float scalar_product(com_num N1, com_num N2); //скалярное

    float vector_product(com_num N1, com_num N2); //вектоное
};
