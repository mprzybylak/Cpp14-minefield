# Computation

## Różne

### constexpr 

constexpr - specifies that the value of a variable or function can appear in constant expressions.

The constexpr specifier declares that it is possible to evaluate the value of the function or variable at compile time. Such variables and functions can then be used where only compile time constant expressions are allowed. A constexpr specifier used in an object declaration implies const. A constexpr specifier used in an function declaration implies inline.

src: [cppreference.com: constexpr specifier ](http://en.cppreference.com/w/cpp/language/constexpr) 

### rzutowania

double(2) - zwykły cast - alternatywny zapis (double)2
double{2} - castowanie zapobiegające narrowing