/**
 * @file GameBoard.hpp
 * @brief Definirea clasei GameBoard pentru gestionarea tablei de joc.
 *
 * Clasa `GameBoard` definește dimensiunile și limitele tablei de joc.
 * Aceasta include funcționalități pentru obținerea dimensiunilor tablei și pentru operarea cu obiecte de tip `GameBoard`.
 * 
 * @author Melnic Anatolie
 * @date 2024
 * @version 1.0
 */

#pragma once
#include <iostream>

/**
 * @class GameBoard
 * @brief Clasa care modelează tabla de joc pentru jocul Snake.
 *
 * Clasa `GameBoard` este responsabilă pentru stabilirea dimensiunilor tablei de joc și manipularea obiectelor 
 * asociate cu aceasta (lățimea și înălțimea tablei). 
 * Clasa permite obținerea dimensiunilor tablei, compararea obiectelor `GameBoard` și atribuirea acestora.
 */
class GameBoard {
private:
    int _width;  ///< Lățimea tablei de joc.
    int _height; ///< Înălțimea tablei de joc.

public:
    /**
     * @brief Constructor pentru crearea unui obiect GameBoard cu lățime și înălțime prestabilite.
     * 
     * Constructorul permite setarea dimensiunilor tablei la valori implicite de 20x20 sau la valori personalizate.
     * 
     * @param width Lățimea tablei (implicit 20).
     * @param height Înălțimea tablei (implicit 20).
     */
    GameBoard(int width = 20, int height = 20);

    /**
     * @brief Constructor de copiere pentru obiectele GameBoard.
     * 
     * Permite crearea unui obiect `GameBoard` care este o copie a altui obiect.
     * 
     * @param other Obiectul `GameBoard` care va fi copiat.
     */
    GameBoard(const GameBoard& other);

    /**
     * @brief Returnează lățimea tablei de joc.
     * 
     * @return Lățimea tablei (un număr întreg).
     */
    int GetWidth() const;

    /**
     * @brief Returnează înălțimea tablei de joc.
     * 
     * @return Înălțimea tablei (un număr întreg).
     */
    int GetHeight() const;

    /**
     * @brief Suprascrierea operatorului de atribuire pentru copierea unui obiect GameBoard.
     * 
     * Acest operator permite copierea unui obiect `GameBoard` într-un alt obiect.
     * 
     * @param other Alt obiect `GameBoard` care va fi copiat.
     * @return Returnează obiectul curent (`this`).
     */
    GameBoard operator = (const GameBoard& other);

    /**
     * @brief Suprascrierea operatorului de comparare pentru a verifica dacă două obiecte GameBoard sunt egale.
     * 
     * Acest operator compară lățimea și înălțimea celor două obiecte `GameBoard`.
     * 
     * @param other Alt obiect `GameBoard` care va fi comparat cu obiectul curent.
     * @return True dacă lățimea și înălțimea sunt aceleași, false altfel.
     */
    bool operator == (const GameBoard& other) const;
};

/**
 * @brief Suprascrierea operatorului de citire pentru a încărca un obiect GameBoard din fluxul de intrare.
 * 
 * Această funcție permite citirea dimensiunilor tablei de joc dintr-un flux de intrare (de exemplu, fișier sau input).
 * 
 * @param in Fluxul de intrare.
 * @param board Obiectul GameBoard în care vor fi stocate datele citite.
 * @return Fluxul de intrare modificat.
 */
std::istream& operator >> (std::istream& in, GameBoard& board);

/**
 * @brief Suprascrierea operatorului de scriere pentru a salva un obiect GameBoard într-un flux de ieșire.
 * 
 * Această funcție permite salvarea dimensiunilor tablei de joc într-un flux de ieșire (de exemplu, fișier sau ecran).
 * 
 * @param out Fluxul de ieșire.
 * @param board Obiectul GameBoard care va fi salvat.
 * @return Fluxul de ieșire modificat.
 */
std::ostream& operator << (std::ostream& out, const GameBoard& board);
