A feladat:

------------------------------------
Adva van egy t�mb T amely N k�l�nb�zo eg�sz sz�mot tartalmaz, 0 a kezdo index. Egy h�rmas h�romsz�g, ha teljes�l hogy 0 <=  I < J <  K <  N -re hogy:

        T[I] + T[J]  >  T[K],
        T[J] + T[K]  >  T[I],
        T[K] + T[I]  >  T[J]
        
        
p�ld�sul ha T a k�vetkezo:

  T[0] = 10   T[1] = 2    T[2] = 5
  T[3] = 1     T[4] = 8    T[5] = 20
  
 akkor a (0, 2, 4) h�rmas h�romsz�g
 
 �rjon egy olyan f�ggv�nyt (pl int vanH�romsz�gBenne(int T[], int N))  ami megmondja, hogy egy adott T t�mbben van-e (legal�bb egy) h�romsz�g.
 
 p�ld�ul a 
 
  T[0] = 10   T[1] = 2    T[2] = 5
  T[3] = 1     T[4] = 8    T[5] = 20
  
 eset�n a f�ggv�ny t�rjen vissza 1-el  a fentebbieket figyelembe v�ve, azonban 
 
   T[0] = 10    T[1] = 50    T[2] = 5
   T[3] = 1
   
 eset�n pedig adjon vissza 0-�t.
   
 A f�ggv�ny leheto leggyorsabban fusson �s a leheto legkevesebb t�rhelyet ig�nyelje. 

------------------------------------

Project

A generate_project.bat futtat�s�val a mell�kelt cmake legener�lja a projektet a sz�ks�ges be�ll�t�sokkal.

A dependencies-ben a googlemock �s googletest k�nyvt�rak visual studio 2015-ben MSVC v140-el vannak ford�tva.
