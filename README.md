
   Документация по проекту

•	Разрабатывалась для Windows

•	При разработке использовалась Visual Studio 16 2019

•	Язык программирования С++

•	Исходники лежат в Running man

•	Установщик находится в папке installer

•	Проект собирается через CMake файл в папке с исходниками. 

•	Для успешной сборки проекта создайте еще одну папку, куда вы его соберете.

•	При компилировании конфигурации Release нужно поменять в свойствах проекта библиотеку времени выполнения на многопоточную откладку DLL (/MDd).
