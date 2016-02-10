#! /bin/bash

echo ""
echo "===== Test du constructeur par défaut ====="
./test_constructor_defaut.t
echo "===== Fin du test du constructeur par défaut ====="

echo ""
echo "===== Test du constructeur avec parametres taille et initialisation implicite ====="
./test_constructeur_parametre.t
echo "===== Fin du test du constructeur avec parametres taille et initialisation implicite ====="

echo ""
echo "===== Test du constructeur par copie ====="
./testConstructorCopy.t
echo "===== Fin du test du constructeur par copie ====="

echo ""
echo "===== Test du constructeur rempli aleatoirement ====="
./test_fillRandomly.t
echo "===== Fin du test du constructeur rempli aleatoirement ====="

echo ""
echo "===== Lecture et affichage du test 1 donné par les professeurs ====="
./test_lecture_fichier.t test1.txt
echo "===== Fin du test lecture et affichage du test 1 donné par les professeurs ====="


echo ""
echo "===== Lecture et affichage du test 2 donné par les professeurs ====="
./test_lecture_fichier.t test2.txt
echo "===== Fin du test lecture et affichage du test 2 donné par les professeurs ====="
