#ifndef _GEOMETRY_H
#define _GEOMETRY_H

struct Point // ���������
{
   double x, y; // ���� (������) ���������
};

struct Triangle
{
   Point vertexes[3]; // ��� ������� ������������
   double area; // ������� ������������ (���� �����)
};

// ���������� ����� ����� ������� �� �� �����������
double calcDistance(double xa, double ya, double xb, double yb);
// ������� ������������ �� ����������� �����
double calcAreaByPoints(double xa, double ya, double xb,
                        double yb, double xc, double yc);

double calcTriangleArea(Triangle& tr);

#endif
