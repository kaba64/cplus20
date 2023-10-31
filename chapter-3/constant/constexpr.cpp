# include <iostream>

constexpr double div_expr(double a,double b){return a/b;}
consteval double div_val(double a,double b){return a/b;}

auto main() -> int
{
  double a = 1.0, b = 2.0;
  constexpr double c = div_expr(1.0,2.0); /* If the arguments are constant, use constexpr
					   and the computation will be performed at compilation time*/
  const double d = div_expr(a,b);         /* If the arguments are not constant, use const   
                                           and the computation will be performed at run time time*/
  constexpr double f = div_val(1.0,2.0);      /* consteval needs the the arguments to be constant*/
  std::cout<<"Constant arguments are used with div_expr() function. resutl is "<<c<<std::endl;
  std::cout<<"Non-constant arguments are used with div_expr() function. resutl is "<<d<<std::endl;
}
