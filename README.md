# SnakeGame

## Descrierea proiectului

**SnakeGame** este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe care se mișcă pe o tablă de joc. Scopul jocului este de a mânca "mere" (sau alte obiecte) care apar în mod aleatoriu pe tablă. Cu fiecare obiect mâncat, șarpele crește în lungime, iar jocul devine mai dificil. Jucătorul trebuie să evite să lovească pereții sau să se auto-colizioneze, iar jocul continuă până când se comite o greșeală, moment în care șarpele moare.

## Regulile jocului

Snake este un joc clasic în care jucătorul controlează un șarpe într-un spațiu limitat. Scopul jocului este ca șarpele să mănânce "mere" sau obiecte care apar aleator pe tablă. Fiecare măr mâncat face ca șarpele să crească în lungime. Jucătorul trebuie să evite coliziunile cu pereții sau cu propriul corp, iar jocul se termină atunci când șarpele face o greșeală.

## Descrierea fișierelor

### `snake.cpp` și `snake.hpp`

**Modificări aduse:**
- În locul unui array static de `Point`, se utilizează un container STL `std::vector` pentru a stoca segmentele șarpelui. Acest lucru face codul mai flexibil și permite extinderea automată a vectorului pe măsură ce șarpele crește.
- Se elimină necesitatea gestionării manuale a memoriei prin utilizarea referințelor și a STL-ului în locul pointerilor și alocărilor dinamice.

**Descriere cod:**
Clasa `Snake` reprezintă șarpele și include metode pentru a muta (`Move`), a crește (`Grow`) și pentru a obține poziția capului (`GetHeadPosition`). Aceste metode utilizează referințe pentru parametri, asigurându-se astfel că resursele sunt manipulate eficient.

### `painter.hpp` și `painter.cpp`

**Clasa Painter:**
Moștenește clasa `AbstractPainter` și implementează funcționalitatea pentru desenarea imaginilor și afișarea textului.

**Metodele Painter:**
- `void DrawImage(Point topLeft, Point bottomRight, char** image)`: Desenează o imagine între punctele `topLeft` și `bottomRight`, iar imaginea este reprezentată de un tablou bidimensional de caractere.
- `void WriteText(Point position, char* text)`: Afișează text la coordonatele specifice date de obiectul `Point position`.

### `.gitignore`

În fișierul `.gitignore`, sunt definite următoarele:
- `CXX`: Definește compilatorul folosit (în acest caz, `g++`).
- `CXXFLAGS`: Definește opțiunile de compilare, inclusiv `-Wall` pentru a afișa toate avertismentele și `-std=c++17` pentru a utiliza standardul C++17.
- `EXEC`: Numele fișierului executabil rezultat.
- `SRC`: Fișierele sursă `.cpp` care trebuie compilate.
- `OBJ`: Fișierele obiect generate din compilarea fișierelor sursă.

**Reguli:**
- `all`: Regula implicită care creează programul final prin legarea fișierelor obiect.
- `clean`: Regula pentru ștergerea fișierelor obiect și a executabilului.

### `point.hpp`

**Structura Point:**
Reprezintă un punct într-un plan bidimensional cu coordonatele `x` și `y`.

**Constructori:**
- `Point(int _x = 0, int _y = 0)`: Constructor implicit care inițializează punctul la valorile (0, 0) sau la valorile date de parametrii `_x` și `_y`.
- `Point(const Point& other)`: Constructor de copiere care creează un punct pe baza altui punct.

**Operatori:**
- `operator=`: Suprascrie operatorul de atribuire pentru a copia valorile unui alt obiect `Point`.
- `operator==`: Suprascrie operatorul de comparație pentru a verifica dacă două puncte sunt egale (au aceleași coordonate).
- `operator>>`: Suprascrie operatorul de citire din flux pentru a citi coordonatele unui punct dintr-un flux de intrare.
- `operator<<`: Suprascrie operatorul de afișare în flux pentru a afișa coordonatele unui punct într-un flux de ieșire.

### `point.cpp`

**Constructori:**
- `Point(int _x, int _y)`: Inițializează obiectul `Point` cu valorile date pentru coordonatele `x` și `y`.
- `Point(const Point& other)`: Copiază coordonatele dintr-un alt obiect `Point`.

**Operatori:**
- `operator=`: Permite atribuirea valorilor unui alt obiect `Point`.
- `operator==`: Compara coordonatele celor două puncte și returnează `true` dacă sunt egale.

**Operatori de flux:**
- `operator>>`: Permite citirea unui punct dintr-un flux de intrare.
- `operator<<`: Afișează coordonatele unui punct într-un flux de ieșire.

### `board.hpp`

**Clasa Board:**
Reprezintă tabla de joc cu dimensiuni `width` (lățime) și `height` (înălțime).

**Constructori:**
- `Board(int width = 20, int height = 20)`: Constructor implicit care inițializează tabla cu dimensiunile 20x20 sau cu valorile date.
- `Board(const Board& other)`: Constructor de copiere care copiază dimensiunile unui alt obiect `Board`.

**Metode:**
- `GetWidth()`: Returnează lățimea tabloului.
- `GetHeight()`: Returnează înălțimea tabloului.

**Operatori:**
- `operator=`: Suprascrie operatorul de atribuire pentru a copia dimensiunile unui alt obiect `Board`.
- `operator==`: Compară dimensiunile a două obiecte `Board`.

**Operatori de flux:**
- `operator>>`: Permite citirea dimensiunilor tabloului dintr-un flux de intrare.
- `operator<<`: Permite afișarea dimensiunilor tabloului într-un flux de ieșire.

### `abstract_painter.hpp`

**Modificări aduse:**
- În interfața `AbstractPainter`, tipul `char*` a fost înlocuit cu `std::string`, iar `char**` a fost înlocuit cu `std::vector<std::string>`, respectând noile convenții de utilizare a STL.

**Descriere cod:**
`AbstractPainter` definește o interfață abstractă pentru desenarea imaginii și a textului. Clasele derivate, cum ar fi `Painter`, trebuie să implementeze aceste metode. Schimbarea către `std::string` și `std::vector` asigură compatibilitatea cu celelalte componente refăcute ale jocului.

### `painter.cpp` și `painter.hpp`

**Modificări aduse:**
- Tipurile `char*` pentru text au fost înlocuite cu `std::string`, oferind o manipulare mai sigură și mai convenabilă a șirurilor.
- În metoda `DrawImage`, `char**` a fost înlocuit cu un `std::vector<std::string>`, făcându-l mai ușor de lucrat cu imagini și eliminând nevoia de gestionare manuală a memoriei pentru un array bidimensional de caractere.

**Descriere cod:**
Clasa `Painter` este responsabilă pentru desenarea elementelor jocului și pentru afișarea textului pe tablă. `DrawImage` afișează coordonatele pentru marginea stângă-sus și dreapta-jos a imaginii, iar `WriteText` afișează textul la coordonatele date. `std::vector<std::string>` este folosit pentru imagini, asigurând ușurința și siguranța manipulării datelor.

### `Makefile`

**Modificări aduse:**
- Makefile-ul este actualizat pentru a include fișierul `snake.cpp` și pentru a compila cu setările corespunzătoare standardului C++17, necesar pentru utilizarea STL și smart pointers.

**Descriere cod:**
Makefile-ul definește reguli pentru compilarea și generarea executabilului final. Comanda `make all` compilează și leagă toate fișierele sursă, iar comanda `make clean` șterge fișierele temporare `.o` și executabilul.
