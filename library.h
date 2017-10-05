#ifndef FULLCOMP_LIBRARY_H
#define FULLCOMP_LIBRARY_H

class Rational
{
private:
  int numer;
  int denom;

public:
  int getNumer();
  int getDenom();
  explicit Rational(double d);
  explicit Rational(int num, int den);
  long double eval();
  Rational operator * (const Rational& r);
  Rational operator / (const Rational& r);
  Rational operator + (const Rational& r);
  Rational operator - (const Rational& r);
  bool operator == (const Rational& r);

};

#endif