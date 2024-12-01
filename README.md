# Snake Game - Descrierea proiectului

Acest proiect implementează jocul clasic al șarpelui, cu mai multe module care gestionează logica jocului și redarea graficii pe ecran. Fiecare componentă a jocului este separată într-un fișier dedicat, iar codul este structurat astfel încât să permită o dezvoltare modulară și ușor de întreținut.

## Structura fișierelor

- **src/snake.cpp** și **include/snake.hpp**  
  *Modificări:*  
  Fără schimbări semnificative, dar acum este compilat într-o bibliotecă statică `libsnake.a`.  
  *Rol:*  
  Se ocupă cu logica mișcării șarpelui, creșterea acestuia și plasarea pe tabla de joc.

- **src/painter.cpp** și **include/painter.hpp**  
  *Modificări:*  
  Acest modul servește ca interfață între logica jocului și redarea graficii (de exemplu, desenarea șarpelui sau afișarea textului). Este compilat într-o bibliotecă statică `libpainter.a`.  
  *Rol:*  
  Responsabil de redarea grafică a jocului pe ecran, folosind metode virtuale din `AbstractPainter`.

- **.gitignore**  
  *Modificări:*  
  Au fost adăugate reguli pentru a ignora fișierele generate automat, cum ar fi fișierele obiect (*.o), bibliotecile statice și dinamice (*.a, *.so), și executabilele (*.exe, *.out).  
  *Rol:*  
  Evită includerea fișierelor temporare și inutile în controlul versiunii.

- **src/point.cpp** și **include/point.hpp**  
  *Modificări:*  
  La fel ca și în cazul altor module, codul acestei clase este compilat într-o bibliotecă statică `libpoint.a`.  
  *Rol:*  
  Gestionează coordonatele (punctele) din joc, esențiale pentru poziționarea șarpelui și a elementelor pe tabla de joc.

- **src/board.cpp** și **include/board.hpp**  
  *Modificări:*  
  Compilat într-o bibliotecă statică `libboard.a`, similar cu modulul `point`.  
  *Rol:*  
  Definește dimensiunile tablei de joc și oferă cadrul necesar pentru plasarea obiectelor.

- **main.cpp**  
  *Modificări:*  
  Este un script principal care integrează toate modulele, inclusiv `Board`, `Snake`, și `Painter`. Este punctul de intrare al aplicației.  
  *Rol:*  
  Permite utilizatorului să testeze și să construiască logica jocului.

- **abstract_painter.hpp**  
  *Modificări:*  
  În interfața `AbstractPainter`, tipurile de date `char*` au fost înlocuite cu `std::string`, iar `char**` cu `std::vector<std::string>`, în conformitate cu convențiile noi din STL.  
  *Rol:*  
  Definește o interfață abstractă pentru desenarea textului și imaginilor. Clasele derivate, cum ar fi `Painter`, trebuie să implementeze aceste metode.

- **src/painter.cpp** și **include/painter.hpp**  
  *Modificări:*  
  Am înlocuit `char*` cu `std::string` pentru o manipulare mai sigură și convenabilă a textelor. În metoda `DrawImage`, am folosit `std::vector<std::string>` în loc de `char**`, facilitând manipularea imaginilor și eliminând necesitatea gestionării manuale a memoriei.  
  *Rol:*  
  Clasa `Painter` este responsabilă pentru redarea elementelor jocului și afișarea textelor pe tablă.

- **Makefile**  
  *Modificări:*  
  Procesul de construire a fost modularizat astfel încât fiecare componentă (Point, Board, Painter, Snake) să fie compilată într-o bibliotecă statică (.a).  
  *Rol:*  
  Controlează procesul de construire a aplicației, creând biblioteci statice și legându-le cu fișierul principal. De asemenea, include un script de curățare (clean) care elimină fișierele generate.

## Instrucțiuni de construire și rulare

1. Clonați acest depozit:
   ```bash
   git clone <URL-repozitoriu>
   cd <director-proiect>

