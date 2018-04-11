#ifndef _GEOMETRY_H
#define _GEOMETRY_H

struct Point // структура
{
   double x, y; // пол€ (данные) структуры
};

struct Triangle
{
   Point vertexes[3]; // три вершины треугольника
   double area; // площадь треугольника (если нужно)
};

// –ассто€ние между двум€ точками по их координатам
double calcDistance(double xa, double ya, double xb, double yb);
// ѕлощадь треугольника по координатам точек
double calcAreaByPoints(double xa, double ya, double xb,
                        double yb, double xc, double yc);

double calcTriangleArea(Triangle& tr);

#endif
