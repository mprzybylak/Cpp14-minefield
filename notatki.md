# Computation

## Streamy

### Scope idiom

Streamy takie jak ifstream czy ofstream samoczynni się zamkną w momencie opuszczenia scope'u, w którym zostały zadeklarowane.

### Metody związane z czytaniem plików

przykłady dla ifstream:
ifs.clear() - jeżeli stream był w stanie "błedu", to clear usunie flagi błędów
ifs.clear(ios_base::failbit) - jeżeli do clear podamy parametr, to USTAWI on taką flagę w streamie a pozostałe wyzeruje.
ifs.unget() - "cofnie" stream o ostatnio pobrany obiekt
ifs.exceptions(ist.exceptions() | ios_base::badbit) - konfigurujemy stream tak aby sam wyrzucał exceptiony tak żebyśmy sami nie musieli tego robić - do metody podajemy flagi oznaczające błędy przy których odpowiedni wyjątek ma być wyrzucony

## Różne

### constexpr 

constexpr - specifies that the value of a variable or function can appear in constant expressions.

The constexpr specifier declares that it is possible to evaluate the value of the function or variable at compile time. Such variables and functions can then be used where only compile time constant expressions are allowed. A constexpr specifier used in an object declaration implies const. A constexpr specifier used in an function declaration implies inline.

src: [cppreference.com: constexpr specifier ](http://en.cppreference.com/w/cpp/language/constexpr) 
article: [Constexpr - Generalized Constant Expressions in C++11](http://www.cprogramming.com/c++11/c++11-compile-time-processing-with-constexpr.html)

### rzutowania

double(2) - zwykły cast - alternatywny zapis (double)2
double{2} - castowanie zapobiegające narrowing
static_cast<type>(val);

### inicjalizacja

Mając klasę w stylu 

class Test {
public:
	char character;
	int value;
};

można użyć linijki inicjalizacyjnej

Test t1{}; // domyślna inicjalizacja pól
Test t2{'c'} // pierwsze pole zainicjalizowane 'c' drugie domyślnie
Test t3{'c', 2} // oba pola zainicjalizowane


### pola static wewnatrz funkcji

Pola static wewnatrz funkcji zostana zaincjalizowane tylko raz - przy pierwszym uruchomieniu funkcji.

### Namespaces

namespace Graph {
	//...
}

### metody const

metoda moze miec slowo const w deklaracji po argumentach co oznacza, ze nie moze ona modyfikowac zadnych wartosci wewnatrz klasy do ktorej przynalezy:

void f() const { ... }

### metody override

metoda moze miec slowo kluczowe override w deklaracji po argumentach, czym zanznaczamy, ze jest to przeciazna funkcja z nadklasy - jezeli metoda nei bedzie spelniac warunkow "przeciazania" (np. nie bedzie nic przeciazac, lub nastapi proba przeciazenia niewritualnej metody ) kompilator zwroci blad

void f() override { ... }