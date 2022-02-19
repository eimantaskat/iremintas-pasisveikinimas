# iremintas-pasisveikinimas
Ši programa atspausdina įrėmintą pasisveikinimą vartotojui įvedus savo vardą ir norimą rėmelio plotį.

## Programos versijos
---
### v0.1
* Įvedus vardą, programa atspausdina pasisveikinimą rėmelyje, kurio:  
    * Ilgis priklauso nuo įvesto vartotojo vardo ilgio
    * Pirma ir pekta eilutės sudarytos iš **\***
    * Antra ir ketvirta eilutės prasideda ir baigiasi **\***, o vidus užpildytas tarpais
* Kiekviena eilutė saugoma atskirame kintamajame

### v0.2
* Jeigu vartotojas yra moteris, t.y. jei įvestas vardas baigiasi raidėmis *a* arba *e*, programa vietoj **Sveikas** rašo **Sveika**

### v1.0
* Vartotojas gali nurodyti rėmelio plotį
* Eilutės nėra saugomos atskiruose kintamuosiuose

## Programos naudojimas
---
### Įdiegimas
1. Atsisiųskite programos kodą iš [GitHub](https://github.com/eimantaskat/iremintas-pasisveikinimas/tree/v1.0) 
    * g++  
        1. Sukompiliuokite programą
            ``` console
                g++ -o <pavadinimas> main.cpp
            ```
        1. Paleiskite programą
            ``` console
                ./<pavadinimas>
            ```
    * Visual Studio  
        1. Sukurkite naują C++ projektą
        1. Spauskite Project -> Add existing item... (Shift+Alt+A) ir pasirinkite main.cpp failą
        1. Sukompiliuokite ir paleiskite programą paspaudę Ctrl+F5
### Naudojimas
1. Paleidus programą įveskite vardą ir spauskite *Enter*
1. Pasirinkite rėmelio plotį
    * Jei norite pasirinkti rėmelio plotį įrašykite **t** ir spauskite *Enter*, tada įveskite norimą plotį
    * Jei nenorite pasirinkti rėmelio pločio įrašykite **n** ir spauskite *Enter*
1. Psisveikinimo spausdinimas  
    * Jei pasisveikinimas telpa į rėmelį, programa jį atspausdins
        ``` console
            ******************************
            *                            *
            *     Sveikas, Eimantas!     *
            *                            *
            ******************************
        ```
    * Jei pasisveikinimas netelpa į rėmelį, programa tai praneš
        ``` console
            Pasisveikinimas netelpa i remeli
        ```