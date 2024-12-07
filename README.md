
# Snake Game  

## Descrierea Proiectului  
Acest proiect implementează o versiune clasică a jocului Snake, utilizând un design modular și orientat pe obiect. Scopul jocului este să controlezi șarpele astfel încât să consume mâncare și să evite coliziunile cu propriul corp sau cu marginile tablei.  

Proiectul este scris în C++ și utilizează mai multe module pentru gestionarea logicii jocului, a elementelor grafice, și a interacțiunilor utilizatorului. Arhitectura jocului este construită pentru a fi scalabilă și ușor de întreținut.  

Acest proiect este o oportunitate excelentă de a învăța despre programarea orientată pe obiecte, gestionarea memoriei în C++, și integrarea cu biblioteci externe pentru redare grafică.  

---


## **Descrierea regulilor jocului**

Jocul **Snake** presupune controlul unui șarpe care se deplasează pe o tablă pătrată. Obiectivul principal este să ghidezi șarpele să mănânce "fructe", crescându-i lungimea, fără ca acesta să se ciocnească de margini sau de propriul corp.

### **Condiții de terminare a jocului:**
1. Șarpele se lovește de marginea tablei.
2. Șarpele își intersectează propriul corp.

### **Reguli de bază:**
- Șarpele începe cu o lungime minimă și este poziționat în centrul tablei.
- La fiecare fruct mâncat, șarpele crește cu o unitate în lungime.
- Mișcarea șarpelui este continuă, iar direcția poate fi schimbată folosind tastele săgeți (sus, jos, stânga, dreapta).

### **Scor:**
- Fiecare fruct mâncat adaugă un punct la scorul total.
- Jocul înregistrează cel mai mare scor obținut într-o sesiune.

---

## **Structura proiectului**

Proiectul este organizat într-un mod modular, utilizând următoarele fișiere și directoare:

### **1. Module principale:**
- **Snake**:
  - Gestionează poziția și mișcarea șarpelui.
  - Se ocupă de creșterea șarpelui după consumarea unui fruct.

- **Board**:
  - Definește dimensiunile și limitele tablei de joc.

- **Painter**:
  - Redă grafic elementele jocului (șarpele, fructele, mesajele).

- **Point**:
  - Reprezintă un punct în coordonate 2D `(x, y)`, utilizat pentru poziționarea obiectelor.

### **2. Teste unitare:**
Directorul `tests` conține teste unitare pentru clasele cheie:
- `PointTest.cpp`: Testează funcționalitățile clasei `Point`.
- `SnakeTest.cpp`: Testează logica mișcării și creșterii șarpelui.
- `GameBoardTest.cpp`: Verifică dimensiunile și funcționalitățile tablei de joc.

---

## **Dependențele proiectului**

Proiectul utilizează următoarele dependențe și unelte:

### **Mediu de dezvoltare:**
- **Sistem de operare:** Linux/Windows/MacOS
- **Compilator:** GCC/G++ cu suport pentru standardul C++17 sau mai nou

### **Biblioteci terțe:**
1. **SFML:** Pentru redarea graficii și gestionarea evenimentelor (opțional în extensii viitoare).  
   **Componente:**
   - `sfml-graphics`
   - `sfml-window`
   - `sfml-system`
2. **SQLite3:** Pentru salvarea și încărcarea scorurilor (opțional).
3. **Boost:** Pentru manipularea fișierelor și alte operații auxiliare.

---

Acest fișier README.md oferă o descriere detaliată a jocului, structura proiectului și specificațiile tehnice necesare pentru a rula aplicația.

---

 



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


