A feladat:

------------------------------------
Adva van egy tömb T amely N különbözo egész számot tartalmaz, 0 a kezdo index. Egy hármas háromszög, ha teljesül hogy 0 <=  I < J <  K <  N -re hogy:

        T[I] + T[J]  >  T[K],
        T[J] + T[K]  >  T[I],
        T[K] + T[I]  >  T[J]
        
        
példásul ha T a következo:

  T[0] = 10   T[1] = 2    T[2] = 5
  T[3] = 1     T[4] = 8    T[5] = 20
  
 akkor a (0, 2, 4) hármas háromszög
 
 Írjon egy olyan függvényt (pl int vanHáromszögBenne(int T[], int N))  ami megmondja, hogy egy adott T tömbben van-e (legalább egy) háromszög.
 
 például a 
 
  T[0] = 10   T[1] = 2    T[2] = 5
  T[3] = 1     T[4] = 8    T[5] = 20
  
 esetén a függvény térjen vissza 1-el  a fentebbieket figyelembe véve, azonban 
 
   T[0] = 10    T[1] = 50    T[2] = 5
   T[3] = 1
   
 esetén pedig adjon vissza 0-át.
   
 A függvény leheto leggyorsabban fusson és a leheto legkevesebb tárhelyet igényelje. 

------------------------------------

Project

A generate_project.bat futtatásával a mellékelt cmake legenerálja a projektet a szükséges beállításokkal.

A dependencies-ben a googlemock és googletest könyvtárak visual studio 2015-ben MSVC v140-el vannak fordítva.
