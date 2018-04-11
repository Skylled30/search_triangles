#include "file.h"
#include "search.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
   setlocale(LC_ALL, "Russian"); // Имя выходного файла
   int pointNum = countPoints("in.txt");
   if (pointNum < 0)
   {
      cout<<"Входной файл не существует"<<endl;
      return -2;
   } else if (pointNum < 4)
   {
      cout<<"Входной файл слишком мал"<<endl;
      return -3;
   }
   Point* pointArray = new Point[pointNum];
   if (!readPoints("in.txt", pointArray, pointNum))
   {
      cout<<"Неизвестная ошибка при вводе точек "<<endl;
      return -3;
   }
   const int maxTrNum = 3;
   Triangle trArray[maxTrNum];
   searchLargestTriangles(pointArray, pointNum,
                          trArray, maxTrNum);
   if (!writeTriangles("out.txt", trArray, maxTrNum))
   {
      cout<<"Не удалось записать результат"<<endl;
      return -4;
   }
   cout<<"Программа успешно завершена"<<endl;
   delete[] pointArray;
   return 0;
}
