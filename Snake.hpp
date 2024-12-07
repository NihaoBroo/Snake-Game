/**
 * @file Snake.hpp
 * @brief Clasa Snake care gestionează mișcarea și creșterea șarpelui.
 *
 * Clasa Snake este responsabilă pentru logica de mișcare a șarpelui și pentru creșterea acestuia 
 * atunci când mănâncă fructe. Aceasta manipulează coordonatele segmentelor șarpelui și implementează 
 * mișcarea pe tabla de joc.
 *
 * @author Melnic Anatolie
 * @date 2024
 * @version 1.0
 */

#pragma once
#include "Point.hpp"

/**
 * @class Snake
 * @brief Clasa care controlează mișcarea și creșterea șarpelui.
 *
 * Această clasă implementează logica de mișcare și creștere a șarpelui. La fiecare fruct consumat, 
 * șarpele crește în lungime. Mișcarea este controlată de săgețile tastaturii și șarpele poate să
 * se lovească de marginea tablei sau de propriul corp.
 */
class Snake {
    Point segments[100]; ///< Segmentele șarpelui
    int length; ///< Lungimea șarpelui

public:
    /**
     * @brief Constructorul implicit pentru un șarpe.
     *
     * Inițializează șarpele cu o lungime de 1 și poziționează capul acestuia la coordonatele (10, 10).
     */
    Snake();

    /**
     * @brief Mișcă șarpele într-o direcție dată.
     * @param direction Direcția în care se va mișca șarpele, dată sub forma unui punct (x, y).
     */
    void Move(Point direction);

    /**
     * @brief Crește lungimea șarpelui cu un segment.
     *
     * După consumarea unui fruct, șarpele crește în lungime, iar un nou segment este adăugat
     * la coada acestuia.
     */
    void Grow();

    /**
     * @brief Returnează poziția capului șarpelui.
     * @return Poziția capului șarpelui ca obiect de tip Point.
     */
    Point GetHeadPosition() const;
};
