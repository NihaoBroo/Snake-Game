# Snake Game

## 1. Denumirea Proiectului
**Snake Game**

## 2. Ce Reprezintă Proiectul
Proiectul reprezintă un joc clasic de tip Snake, în care jucătorul controlează un șarpe care se mișcă pe o tablă. Scopul jocului este de a mânca hrana pentru a crește lungimea șarpelui, evitând în același timp coliziunile cu marginile tabloului sau cu propriul corp. 

## 3. Regulile Jocului Snake
 Controlul Șarpelui**: Jucătorul poate controla direcția în care se mișcă șarpele (sus, jos, stânga, dreapta).
 Hrana**: Când șarpele mănâncă hrana, acesta crește cu un segment.
 Coliziuni**: Jocul se termină dacă șarpele se lovește de marginea tabloului sau de el însuși.
 Obiectiv**: Jucătorul trebuie să strângă cât mai multă hrană pentru a obține un scor cât mai mare.

## 4. Tipurile de Date Noi Declarate

### a. `Point`
Descriere**: Structura `Point` reprezintă un punct în coordonatele 2D, având două atribute: `x` și `y`.
Utilizare**: Este folosită pentru a reprezenta pozițiile în spațiul de joc, inclusiv coordonatele capului șarpelui și a segmentelor sale.

### b. `Board`
Descriere**: Clasa `Board` definește tabloul în care se desfășoară jocul. Are atribute pentru lățimea (`width`) și înălțimea (`height`) tabloului.
Utilizare**: Este utilizată pentru a stabili dimensiunile jocului și pentru a verifica limitele mișcărilor șarpelui.

### c. `Snake`
Descriere**: Clasa `Snake` reprezintă șarpele din joc, având un tablou de tip `Point` pentru a stoca segmentele corpului său și un atribut pentru lungimea (`length`).
Utilizare**: Este utilizată pentru a gestiona mișcarea șarpelui, creșterea acestuia și obținerea poziției capului.

