# Snake Game

## 1. Denumirea Proiectului
**Snake Game**

## 2. Ce Reprezintă Proiectul
Proiectul reprezintă un joc clasic de tip Snake, în care jucătorul controlează un șarpe care se mișcă pe o tablă. Scopul jocului este de a mânca hrana pentru a crește lungimea șarpelui, evitând în același timp coliziunile cu marginile tabloului sau cu propriul corp. 

## 3. Regulile Jocului Snake
 Controlul Șarpelui: Jucătorul poate controla direcția în care se mișcă șarpele (sus, jos, stânga, dreapta).
 Hrana: Când șarpele mănâncă hrana, acesta crește cu un segment.
 Coliziuni: Jocul se termină dacă șarpele se lovește de marginea tabloului sau de el însuși.
 Obiectiv: Jucătorul trebuie să strângă cât mai multă hrană pentru a obține un scor cât mai mare.

## 4. Tipurile de Date Noi Declarate

### a. `Point`
Descriere: Structura `Point` reprezintă un punct în coordonatele 2D, având două atribute: `x` și `y`.
Utilizare: Este folosită pentru a reprezenta pozițiile în spațiul de joc, inclusiv coordonatele capului șarpelui și a segmentelor sale.

### b. `Board`
Descriere: Clasa `Board` definește tabloul în care se desfășoară jocul. Are atribute pentru lățimea (`width`) și înălțimea (`height`) tabloului.
Utilizare: Este utilizată pentru a stabili dimensiunile jocului și pentru a verifica limitele mișcărilor șarpelui.

### c. `Snake`
Descriere: Clasa `Snake` reprezintă șarpele din joc, având un tablou de tip `Point` pentru a stoca segmentele corpului său și un atribut pentru lungimea (`length`).
Utilizare: Este utilizată pentru a gestiona mișcarea șarpelui, creșterea acestuia și obținerea poziției capului.

## Funcționalitatea fișierelor `board.hpp`, `snake.hpp`, și `point.hpp`

### `point.hpp`
**Scop:** 
Definirea unei structuri fundamentale, `Point`, care reprezintă un punct în coordonate bidimensionale, cu axele `x` și `y`. Aceasta ilustrează locația pe tablă a șarpelui, a mărului sau a altor obiecte. Este utilizată pentru stocarea pozițiilor și gestionarea mișcării șarpelui în funcție de coordonatele sale.

**Structura `Point`:**
Această structură reprezintă o pereche de coordonate `(x, y)` utilizate pentru a indica poziția într-un spațiu bidimensional al tablei de joc.

- **Constructor implicit:** Setează coordonatele `x` și `y` la 0.
- **Constructor cu parametri:** Permite crearea unui punct cu valori specifice pentru `x` și `y`.

---

### `snake.hpp`
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

### `board.hpp`
**Scop:** 
Reprezintă tabla de joc (zona de acțiune pentru șarpe și mere). Păstrează dimensiunile tablei (lățime și înălțime) și se ocupă de desenarea tablei și a elementelor din interior (șarpele, merele etc.).

**Clasa `Board`:** 
Reprezintă suprafața de joc pe care se desfășoară acțiunea.

- **`width` și `height`:** Variabile care definesc dimensiunile tablei (lățime și înălțime).
- **Constructorul `Board`:** Inițializează tabla de joc cu dimensiunile dorite (exemplu: o tablă de 20x20 sau alte dimensiuni specificate de utilizator).
- **`GetWidth()`:** Returnează lățimea tablei, utilă pentru a defini limitele mișcării șarpelui.
- **`GetHeight()`:** Returnează înălțimea tablei, similar cu lățimea, ajutând la verificarea limitelor superioare și inferioare.

---

## `.gitignore`
- **CXX:** Specifică compilatorul utilizat, în acest caz `g++`.
- **CXXFLAGS:** Setează opțiunile de compilare, cum ar fi `-Wall` (pentru a afișa toate avertismentele) și `-std=c++17` (pentru a folosi standardul C++17).
- **EXEC:** Numele executabilului rezultat.
- **SRC:** Lista fișierelor sursă `.cpp` ce trebuie compilate. Asigură-te că adaugi un fișier `main.cpp`, care va conține funcția principală (funcția `main`).
- **OBJ:** Fișierele obiect rezultate în urma compilării fișierelor sursă.
- **all:** Regula standard care creează programul final prin legarea fișierelor obiect.
- **clean:** O regulă pentru a elimina fișierele obiect și executabilul.

---

### `board.cpp`
- **Constructorul `Board(int w, int h)`:** Setează lățimea și înălțimea tablei de joc. Parametrii `w` și `h` definesc dimensiunile tablei de joc.
- **Funcția `GetWidth()`:** Returnează lățimea tablei de joc, utilă pentru a defini limitele în care șarpele se poate mișca.
- **Funcția `GetHeight()`:** Returnează înălțimea tablei de joc, asigurându-se că șarpele nu depășește marginile superioare și inferioare ale tablei.

---

### `snake.cpp`
- **Constructorul `Snake()`:** Inițializează șarpele la poziția de start (10, 10) și stabilește lungimea inițială a șarpelui la 1 segment.
- **Funcția `Move()`:** Mută șarpele într-o direcție specificată. Fiecare segment ia poziția segmentului din fața sa, iar capul șarpelui se mișcă în direcția dată de parametrul `direction`.
- **Funcția `Grow()`:** Adaugă un nou segment la șarpe, extinzând lungimea acestuia. Noul segment va prelua poziția ultimului segment din coadă.
- **Funcția `GetHeadPosition()`:** Returnează poziția capului șarpelui, folosind primul segment din array-ul de segmente.

---

### `point.cpp`
**Scop:** 
În `point.cpp`, nu este necesar cod suplimentar, deoarece structura `Point` este deja definită în fișierul header `point.hpp`, iar constructorii corespunzători sunt automat generați de compilator pentru structura respectivă.

**Structura `Point`:** 
Conține doi membri: `x` și `y`, care reprezintă coordonatele unui punct pe tabla de joc.
