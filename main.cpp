#include "file.h"
#include "search.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
   setlocale(LC_ALL, "Russian"); // ��� ��������� �����
   int pointNum = countPoints("in.txt");
   if (pointNum < 0)
   {
      cout<<"������� ���� �� ����������"<<endl;
      return -2;
   } else if (pointNum < 4)
   {
      cout<<"������� ���� ������� ���"<<endl;
      return -3;
   }
   Point* pointArray = new Point[pointNum];
   if (!readPoints("in.txt", pointArray, pointNum))
   {
      cout<<"����������� ������ ��� ����� ����� "<<endl;
      return -3;
   }
   const int maxTrNum = 3;
   Triangle trArray[maxTrNum];
   searchLargestTriangles(pointArray, pointNum,
                          trArray, maxTrNum);
   if (!writeTriangles("out.txt", trArray, maxTrNum))
   {
      cout<<"�� ������� �������� ���������"<<endl;
      return -4;
   }
   cout<<"��������� ������� ���������"<<endl;
   delete[] pointArray;
   return 0;
}
