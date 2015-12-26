

#include "stdafx.h"
#include "Class.h"

com_num::com_num(float a, float b) :re(a), im(b)
{}


com_num& com_num :: operator + (com_num& N2)
{
     re+=N2.re;
     im+=N2.im;
    
     return *this;
}

com_num& com_num :: operator - (com_num& N2)
{
    re-=N2.re;
    im-=N2.im;

    return *this;
}

com_num& com_num :: operator * (com_num& N2)
{
    re = re*N2.re - im*N2.im;
    im = re*N2.im + im*N2.re;

    return *this;
}

com_num& com_num :: operator / (com_num& N2)
{
    re = (re*N2.re + im*N2.im)/(N2.re*N2.re + N2.im*N2.im);
    im = (N2.re*im - re*N2.im)/(N2.re*N2.re + N2.im*N2.im);

    return *this;
}

bool com_num :: operator == (com_num& N2)
 {
    float re2=N2.getre;
    float im2=N2.getim;

    if(re==re2 && im==im2) return true;
    return false;
 }

com_num conjugate (com_num N1)
{
    float im1=N1.getim;
    N1.setim = -im1;
    return N1;
}

float module (com_num N1)
{
    float re1=N1.getre;
    float im1=N1.getim;

    float t= sqrt(re1*re1+im1*im1);

    return t;
}

float argument(com_num N1)
{
    float re1=N1.getre;
    float im1=N1.getim;

    float t= atan(im1/re1);

    return t;
}

float scalar_product(com_num N1, com_num N2)
{
    float re1=N1.getre;
    float im1=N1.getim;

    float re2=N2.getre;
    float im2=N2.getim;

    float t;

    return t=re1*re2+im1*im2;
}

float vector_product(com_num N1, com_num N2)
{
    float re1=N1.getre;
    float im1=N1.getim;

    float re2=N2.getre;
    float im2=N2.getim;

    float t;

    return t=re1*im2-re2*im1;
}
