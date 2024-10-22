# SnakeGame

## Descrierea proiectului
SnakeGame este o versiune clasică a jocului retro "Snake", unde jucătorul controlează un șarpe.

## Regulile jocului
Snake este un joc tradițional în care utilizatorul dirijează un șarpe într-un spațiu restrâns. Scopul este de a mânca "mere" (sau alte obiecte) care apar aleatoriu pe tablă. Fiecare măr consumat face ca șarpele să crească, iar jocul devine mai provocator deoarece șarpele nu trebuie să se lovească de pereți sau să se ciocnească singur. Jocul continuă până când jucătorul greșește, iar șarpele este eliminat.

## Structura fișierelor
- **board.hpp, board.cpp, snake.cpp, snake.hpp, point.hpp, point.cpp, .gitignore, Makefile, abstract_painter.hpp, painter.cpp, painter.hpp**

### snake.hpp
#### Clasa Snake:
Reprezintă un obiect care conține coordonatele x și y pentru a reprezenta un punct în planul 2D.

**Atribute:**
- `Point segments[100]`: segmentele corpului șarpelui, fiecare fiind un obiect Point.
- `int length`: lungimea curentă a șarpelui.

**Constructor:**
- `Snake()`: inițializează șarpele cu lungimea 1 și poziționează primul segment la (10, 10).

**Metode:**
- `void Move(Point direction)`: mută șarpele conform direcției specificate.
- `void Grow()`: adaugă un segment nou, dacă lungimea este sub 100.
- `Point GetHeadPosition() const`: returnează poziția capului șarpelui.

### snake.cpp
- **Constructorul Snake** inițializează lungimea șarpelui la 1 și poziția primului segment la (10, 10).

**Metoda Move** actualizează fiecare segment, iar capul se deplasează conform direcției date.

**Metoda Grow** adaugă un nou segment la sfârșitul șarpelui, menținând aceeași poziție ca ultimul segment existent.

**Metoda GetHeadPosition** returnează poziția capului șarpelui.

### painter.hpp și painter.cpp
#### Clasa Painter:
Extinde clasa AbstractPainter și implementează funcționalitatea de desenare a imaginilor și textului.

**Metode:**
- `void DrawImage(Point topLeft, Point bottomRight, char** image)`: desenează o imagine între cele două puncte.
- `void WriteText(Point position, char* text)`: afișează textul la coordonatele date.

### abstract_painter.hpp
#### Clasa AbstractPainter:
Definirea interfeței pentru clasele care implementează funcționalități de desenare și scriere.

**Metode abstracte:**
- `virtual void DrawImage(Point topLeft, Point bottomRight, char** image) = 0`: metoda va fi implementată de clasele derivate.
- `virtual void WriteText(Point position, char* text) = 0`: metoda pentru scrierea textului la coordonatele specificate.

### .gitignore
- **CXX**: definește compilatorul (g++).
- **CXXFLAGS**: specifică opțiunile de compilare (ex: -Wall, -std=c++17).
- **EXEC**: numele executabilului rezultat.
- **SRC**: fișierele sursă .cpp care trebuie compilate, inclusiv main.cpp pentru punctul de intrare.
- **OBJ**: fișierele obiect generate.

### Makefile
- **CXX și CXXFLAGS**: definește compilatorul și opțiunile de compilare.
- **SRC**: listează fișierele sursă.
- **OBJ**: generează fișierele obiect.
- **all**: regula pentru compilarea proiectului.
- **clean**: regula pentru ștergerea fișierelor obiect și a executabilului.

### point.hpp
#### Structura Point:
Conține coordonatele x și y pentru a reprezenta un punct.

**Constructori:**
- `Point(int _x = 0, int _y = 0)`: inițializează punctul la (0, 0) sau la valorile date.
- `Point(const Point& other)`: constructor de copiere.

**Operatori:**
- `operator=`: atribuire între obiecte Point.
- `operator==`: compară două puncte pentru egalitate.

**Operatori de intrare și ieșire:**
- `operator>>`: citire din flux.
- `operator<<`: afișare în flux.

### point.cpp
- **Constructori** și **Operatori**: inițializare și comparație între puncte.
- **Operatori de flux**: permite citirea și afișarea coordonatelor.

### board.hpp
#### Clasa Board:
Reprezintă tabloul de joc cu lățimea și înălțimea specificate.

**Constructori:**
- `Board(int width = 20, int height = 20)`: inițializează cu dimensiunile date.

**Metode:**
- `GetWidth()` și `GetHeight()`: returnează dimensiunile tabloului.

**Operatori:**
- `operator=`, `operator==`: pentru atribuiri și comparări.

### board.cpp
- **Constructori și Metode**: inițializare și obținerea dimensiunilor tabloului.

### Concluzie
Acesta este un proiect simplu, dar eficient, care demonstrează conceptele de bază ale programării orientate pe obiect și implementarea unui joc clasic.

Descriere: Clasa `Snake` reprezintă șarpele din joc, având un tablou de tip `Point` pentru a stoca segmentele corpului său și un atribut pentru lungimea (`length`).
Utilizare: Este utilizată pentru a gestiona mișcarea șarpelui, creșterea acestuia și obținerea poziției capului.

## Funcționalitatea fișierelor `board.hpp`, `snake.hpp`, și `point.hpp`

### `Point.hpp`
**Scop:** 
Definirea unei structuri fundamentale, `Point`, care reprezintă un punct în coordonate bidimensionale, cu axele `x` și `y`. Aceasta ilustrează locația pe tablă a șarpelui, a mărului sau a altor obiecte. Este utilizată pentru stocarea pozițiilor și gestionarea mișcării șarpelui în funcție de coordonatele sale.

**Structura `Point`:**
Această structură reprezintă o pereche de coordonate `(x, y)` utilizate pentru a indica poziția într-un spațiu bidimensional al tablei de joc.

- **Constructor implicit:** Setează coordonatele `x` și `y` la 0.
- **Constructor cu parametri:** Permite crearea unui punct cu valori specifice pentru `x` și `y`.

---

### `Snake.hpp`
**Scop:** 
Reprezintă șarpele și comportamentele sale. Stochează segmentele șarpelui într-un array de tip `Point`, fiecare element corespunzând unei părți din corpul său. Gestionează mișcarea, creșterea atunci când consumă un măr și detectarea coliziunilor.

**Clasa `Snake`:**
Această clasă se ocupă de logica șarpelui în joc, inclusiv poziția segmentelor și mișcarea acestora.

- **`segments[100]`:** Un array cu 100 de segmente, fiecare reprezentat printr-un `Point`. Aceste segmente definesc pozițiile ocupate de șarpe pe tablă.
- **`length`:** Păstrează lungimea curentă a șarpelui, adică numărul de segmente active.

**Constructorul `Snake`:** 
Inițializează șarpele cu un singur segment plasat la o poziție prestabilită (exemplu: coordonatele (10, 10)).

- **`Move(Point direction)`:** Mișcă șarpele într-o direcție specificată (de exemplu, stânga, dreapta, sus, jos) prin actualizarea poziției fiecărui segment.
- **`Grow()`:** Extinde lungimea șarpelui prin adăugarea unui segment suplimentar la coadă, replicând ultima poziție cunoscută.
- **`GetHeadPosition()`:** Returnează poziția capului șarpelui (segmentul de la indexul 0 din array-ul `segments`).

---

### `Board.hpp`
**Scop:** 
Reprezintă tabla de joc (zona de acțiune pentru șarpe și mere). Păstrează dimensiunile tablei (lățime și înălțime) și se ocupă de desenarea tablei și a elementelor din interior (șarpele, merele etc.).

**Clasa `Board`:** 
Reprezintă suprafața de joc pe care se desfășoară acțiunea.

- **`width` și `height`:** Variabile care definesc dimensiunile tablei (lățime și înălțime).
- **Constructorul `Board`:** Inițializează tabla de joc cu dimensiunile dorite (exemplu: o tablă de 20x20 sau alte dimensiuni specificate de utilizator).
- **`GetWidth()`:** Returnează lățimea tablei, utilă pentru a defini limitele mișcării șarpelui.
- **`GetHeight()`:** Returnează înălțimea tablei, similar cu lățimea, ajutând la verificarea limitelor superioare și inferioare.

---

## `.GitIgnore`
- **CXX:** Specifică compilatorul utilizat, în acest caz `g++`.
- **CXXFLAGS:** Setează opțiunile de compilare, cum ar fi `-Wall` (pentru a afișa toate avertismentele) și `-std=c++17` (pentru a folosi standardul C++17).
- **EXEC:** Numele executabilului rezultat.
- **SRC:** Lista fișierelor sursă `.cpp` ce trebuie compilate. Asigură-te că adaugi un fișier `main.cpp`, care va conține funcția principală (funcția `main`).
- **OBJ:** Fișierele obiect rezultate în urma compilării fișierelor sursă.
- **all:** Regula standard care creează programul final prin legarea fișierelor obiect.
- **clean:** O regulă pentru a elimina fișierele obiect și executabilul.

---

### `Board.cpp`
- **Constructorul `Board(int w, int h)`:** Setează lățimea și înălțimea tablei de joc. Parametrii `w` și `h` definesc dimensiunile tablei de joc.
- **Funcția `GetWidth()`:** Returnează lățimea tablei de joc, utilă pentru a defini limitele în care șarpele se poate mișca.
- **Funcția `GetHeight()`:** Returnează înălțimea tablei de joc, asigurându-se că șarpele nu depășește marginile superioare și inferioare ale tablei.

---

### `Snake.cpp`
- **Constructorul `Snake()`:** Inițializează șarpele la poziția de start (10, 10) și stabilește lungimea inițială a șarpelui la 1 segment.
- **Funcția `Move()`:** Mută șarpele într-o direcție specificată. Fiecare segment ia poziția segmentului din fața sa, iar capul șarpelui se mișcă în direcția dată de parametrul `direction`.
- **Funcția `Grow()`:** Adaugă un nou segment la șarpe, extinzând lungimea acestuia. Noul segment va prelua poziția ultimului segment din coadă.
- **Funcția `GetHeadPosition()`:** Returnează poziția capului șarpelui, folosind primul segment din array-ul de segmente.

---

### `Point.cpp`
**Scop:** 
În `point.cpp`, nu este necesar cod suplimentar, deoarece structura `Point` este deja definită în fișierul header `point.hpp`, iar constructorii corespunzători sunt automat generați de compilator pentru structura respectivă.

**Structura `Point`:** 
Conține doi membri: `x` și `y`, care reprezintă coordonatele unui punct pe tabla de joc.
