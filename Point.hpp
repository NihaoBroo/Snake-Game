/**
 * @file Point.hpp
 * @brief Definirea structurii Point, utilizată pentru gestionarea coordonatelor pe tabla de joc.
 *
 * Această structură stochează coordonatele x și y ale obiectelor (precum șarpele și fructele) pe tabla de joc.
 * Este utilizată în diverse calcule de poziționare și manipulare a obiectelor pe tabla de joc.
 *
 * @author Melnic Anatolie 
 * @date 2024
 * @version 1.0
 */

#pragma once

#include <iostream>

/**
 * @struct Point
 * @brief Reprezintă un punct în coordonatele 2D.
 *
 * Această structură este folosită pentru a reprezenta coordonatele (x, y) ale obiectelor în joc.
 * Este folosită pentru a manipula poziția șarpelui și a fructelor pe tabla de joc.
 */
struct Point {
    int x; ///< Coordonata pe axa X
    int y; ///< Coordonata pe axa Y

    /**
     * @brief Constructor implicit care inițializează punctul la (0, 0).
     */
    Point() : x(0), y(0) {}

    /**
     * @brief Constructor cu parametri pentru a seta coordonatele punctului.
     * @param xPos Coordonata pe axa X.
     * @param yPos Coordonata pe axa Y.
     */
    Point(int xPos, int yPos) : x(xPos), y(yPos) {}

    /**
     * @brief Suprascrierea operatorului de atribuire pentru un punct.
     * @param other Alt punct care va fi copiat.
     * @return Returnează punctul curent.
     */
    Point operator=(const Point& other);

    /**
     * @brief Verifică dacă două puncte sunt egale.
     * @param other Alt punct cu care se compară.
     * @return True dacă punctele sunt egale, false în caz contrar.
     */
    bool operator==(const Point& other) const;

    /**
     * @brief Suprascrierea operatorului de ieșire pentru a afișa punctul.
     * @param out Fluxul de ieșire.
     * @param point Punctul care va fi afișat.
     * @return Fluxul de ieșire modificat.
     */
    friend std::ostream& operator<<(std::ostream& out, const Point& point);

    /**
     * @brief Suprascrierea operatorului de intrare pentru a citi un punct.
     * @param in Fluxul de intrare.
     * @param point Punctul care va fi citit.
     * @return Fluxul de intrare modificat.
     */
    friend std::istream& operator>>(std::istream& in, Point& point);
};
