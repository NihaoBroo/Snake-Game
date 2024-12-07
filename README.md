# Snake Game - Descrierea proiectului

Acest proiect implementează jocul clasic al șarpelui, cu mai multe module care gestionează logica jocului și redarea graficii pe ecran. Fiecare componentă a jocului este separată într-un fișier dedicat, iar codul este structurat astfel încât să permită o dezvoltare modulară și ușor de întreținut.

# Snake Game  

## Descrierea Proiectului  
Acest proiect implementează o versiune clasică a jocului Snake, utilizând un design modular și orientat pe obiect. Scopul jocului este să controlezi șarpele astfel încât să consume mâncare și să evite coliziunile cu propriul corp sau cu marginile tablei.  

Proiectul este scris în C++ și utilizează mai multe module pentru gestionarea logicii jocului, a elementelor grafice, și a interacțiunilor utilizatorului. Arhitectura jocului este construită pentru a fi scalabilă și ușor de întreținut.  

Acest proiect este o oportunitate excelentă de a învăța despre programarea orientată pe obiecte, gestionarea memoriei în C++, și integrarea cu biblioteci externe pentru redare grafică.  

---

## Regulile Jocului  
1. **Obiectivul**: Controlează șarpele pentru a consuma cât mai multă mâncare și a obține un scor maxim.  
2. **Mișcarea**: Șarpele se mișcă continuu într-o direcție. Poți schimba direcția folosind tastele săgeată.  
3. **Creșterea**: De fiecare dată când șarpele mănâncă, lungimea acestuia crește.  
4. **Condiții de terminare**: Jocul se termină dacă:
   - Șarpele lovește marginea tablei.  
   - Șarpele lovește propriul corp.  

Punctele obținute sunt afișate în timp real pe ecran, iar scorul maxim este salvat într-un fișier sau o bază de date.  

---

## Structura Proiectului  
Proiectul este organizat în module independente, fiecare având un rol bine definit:  
- **`Point`**: Reprezintă coordonatele pe tabla de joc.  
- **`GameBoard`**: Definește dimensiunile tablei de joc.  
- **`Snake`**: Gestionează logica mișcării și creșterii șarpelui.  
- **`Painter`**: Este responsabil pentru afișarea grafică a elementelor jocului.  
- **`AbstractPainter`**: O interfață abstractă pentru implementarea diferitelor moduri de redare grafică.  
- **`main.cpp`**: Punctul de intrare al aplicației, care integrează toate modulele și inițializează jocul.  

---

## Dependențe  
Pentru a rula și compila acest proiect, sunt necesare următoarele:  

### Mediu de Dezvoltare  
- **Sistem de operare**: Compatibil cu Windows, Linux sau macOS.  
- **Compilator**: `g++` cu suport pentru standardul C++17 sau mai recent.  
- **Instrumente**: Make pentru automatizarea construirii.  

### Biblioteci Externe  
- **SFML**:  
  - Utilizată pentru redarea grafică și gestionarea ferestrelor.  
  - Instalare pe Linux:  
    ```bash
    sudo apt install libsfml-dev
    ```

- **SQLite3**:  
  - Utilizată pentru salvarea scorurilor maxime.  
  - Instalare pe Linux:  
    ```bash
    sudo apt install libsqlite3-dev
    ```
- **Boost**:  
  - Funcționalități adiționale pentru manipularea fișierelor și sistemelor.  
  - Instalare pe Linux:  
    ```bash
    sudo apt install libboost-all-dev
    ```

---


