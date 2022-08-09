# include <iostream>

constexpr double div_expr(double a,double b)
//consteval double div_expr(double a,double b)
{
  return a/b;
}

auto main() -> int
{
  constexpr double c =div_expr(1.,2.);
  std::cout<<c<<"\n";
  c=8.;
}
