# Part2Part

## How to run

Before compiling you have to download the source code of `sqlite3` library found here https://www.sqlite.org/download.html and put under `./src/import`. The folder should be called `sqlite`.

In order to build and run the project, go to the src folder then run the command `make all`. This will compile all the necessary files. To run the server type `./server` and to run the client type `./client`. The ip is automatically detected.

## App

<img alt="app design" src="https://i.postimg.cc/Xv1M3Fvb/Screenshot-from-2021-01-06-11-34-55.png">


## Task:

Sa se conceapa o aplicatie de tipul peer-to-peer pentru partajarea fisierelor. Programele vor folosi socket-uri pentru comunicatie, putind fi rulate pe masini diferite astfel: programul client poate fi rulat de catre orice utilizator, iar programul server poate fi rulat doar de autor, care este si responsabil cu pornirea/oprirea serviciului. Programul server trebuie sa fie capabil sa serveasca simultan mai multe cereri de transfer provenite de la "colegii" sai din retea. Fisierele dorite vor putea fi cautate - eventual folosind expresii regulate - conform unor criterii (nume, tip, lungime etc.) in cadrul "retelei".

Resurse suplimentare: http://www.rogerclarke.com/EC/P2POview.html

```Deadline: 14.01.2021```
