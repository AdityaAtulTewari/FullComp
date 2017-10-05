#include "library.h"

int Rational::getNumer()
{
  return this->numer;
}

int Rational::getDenom()
{
  return this->denom;
}

Rational::Rational(double d)
{
  this->numer = static_cast<int>(d);
  this->denom = static_cast<int>(d);
}

Rational::Rational(int num, int den)
{
  this->numer = num;
  this->denom = den;
}

Rational Rational::operator * (const Rational& r)
{
  return Rational(this->numer * r.numer, this->denom * r.denom);
}

Rational Rational::operator / (const Rational& r)
{
  return Rational(this->numer * r.denom, this->denom * r.numer);
}

Rational Rational::operator + (const Rational& r)
{
  return Rational(this->numer * r.denom + this->denom * r.numer, this->denom * r.denom);
}

Rational Rational::operator - (const Rational& r)
{
  return Rational(this->numer * r.denom - this->denom * r.numer, this->denom * r.denom);
}

long double Rational::eval()
{
  return this->numer/(long double) this->denom;
}

bool Rational::operator == (const Rational& r)
{
  return (numer == r.numer) && (denom == r.denom);
}

