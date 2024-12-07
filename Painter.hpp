/**
 * @file Painter.hpp
 * @brief Definirea clasei Painter pentru redarea graficii jocului.
 *
 * Clasa `Painter` este responsabilă pentru implementarea metodelor de redare a imaginii și a textului pe ecran.
 * Aceasta moștenește funcționalitățile clasei abstracte `AbstractPainter` și le implementează pentru a oferi 
 * o metodă concretă de a desena imagini și de a scrie texte la poziții specificate pe tablă.
 * 
 * @author Melnic Anatolie
 * @date 2024
 * @version 1.0
 */

#pragma once

#include "abstract_painter.hpp"

/**
 * @class Painter
 * @brief Implementare a clasei abstracte AbstractPainter pentru redarea graficii jocului Snake.
 *
 * Clasa `Painter` extinde funcționalitatea clasei `AbstractPainter` și implementează metodele necesare 
 * pentru a reda imagini și texte la poziții specificate pe tabla de joc.
 */
class Painter : public AbstractPainter {
public:
    /**
     * @brief Desenează o imagine pe tablă într-o zonă definită de coordonatele `topLeft` și `bottomRight`.
     *
     * Această metodă este responsabilă pentru desenarea unei imagini într-o regiune specificată de două puncte.
     * Metoda folosește un tablou bidimensional de caractere (char**) pentru a reda imaginea.
     * 
     * @param topLeft Coordonatele colțului din stânga sus al regiunii în care va fi desenată imaginea.
     * @param bottomRight Coordonatele colțului din dreapta jos al regiunii.
     * @param image Tabloul bidimensional de caractere care reprezintă imaginea ce va fi desenată.
     */
    void DrawImage(const Point& topLeft, const Point& bottomRight, char** image) override;

    /**
     * @brief Scrie un text la o anumită poziție pe tablă.
     *
     * Această metodă va afișa un text pe tablă la poziția specificată.
     * Textul va fi reprezentat ca un șir de caractere.
     * 
     * @param position Poziția la care va fi afișat textul (un obiect de tip `Point`).
     * @param text Șirul de caractere care reprezintă textul ce va fi afișat.
     */
    void WriteText(const Point& position, const char* text) override;
};
