#include <cmath>

double pole(double a, double b, double c)
{
    double p, s;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}

double potegowanie(double a, double b)
{
    double p;
    p = pow(a,b);
    return p;
}

double factorial(double a)
{
    int s=1, i=1;
    while (i<a)
    {
        s *= i;
        ++i;
    }
    return s;
}

int divisibility(int a, int b)
{
    int d;
    d = a%b;
    return d;
}

int nwd(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

double bodymass(double masa, double wzrost)
{
    double bmi;
    bmi = masa / (wzrost * wzrost);
    return bmi;
}
