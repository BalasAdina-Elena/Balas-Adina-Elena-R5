#include "Canvas.h"
#include <iostream>
using namespace std;

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	this->matrix = new char* [height];
	for (int i = 0; i < height; i++)
	{
		this->matrix[i] = new char[width];
		for (int j = 0; j < width; j++)
		{
			this->matrix[i][j] = ' ';
		}
	}

}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
		{
			int dx = j - x;
			int dy = i - y;

			int dist = dx * dx + dy * dy;

			if (dist >= ray * ray - ray && dist <= ray * ray + ray)
				SetPoint(j, i, ch);
		}
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			int dx = j - x;
			int dy = i - y;

			if (dx * dx + dy * dy <= ray * ray)
				SetPoint(j, i, ch);
		}
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
	{
		SetPoint(i, top, ch);
		SetPoint(i, bottom, ch);
	}

	for (int i = top; i <= bottom; i++)
	{
		SetPoint(left, i, ch);
		SetPoint(right, i, ch);
	}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int x = top; x <= bottom; x++)
		for (int y = left; y <= right; y++)
			SetPoint(y, x, ch);
}
void Canvas::SetPoint(int x, int y, char ch)
{
	if (x >= 0 && x < this->width && y >= 0 && y < this->height)
		matrix[y][x] = ch;
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);
	int sx, sy;
	if (x1 < x2)
		sx = 1;
	else sx = -1;
	if (y1 < y2)
		sy = 1;
	else sy = -1;
	int err = dx - dy;
		while (true)
		{
			SetPoint(x1, y1, ch);

			if (x1 == x2 && y1 == y2)
				break;

			int e2 = 2 * err;

			if (e2 > -dy)
			{
				err = err - dy;
				x1 = x1 + sx;
			}

			if (e2 < dx)
			{
				err = err + dx;
				y1 = y1 + sy;
			}
		}
}
void Canvas::Print()
	{
		for (int i = 0; i < this->height; i++)
		{
			for (int j = 0; j < this->width; j++)
			{
				cout << matrix[i][j];
			}
			cout << endl;
		}
	}

void Canvas::Clear()
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			matrix[i][j] = ' ';
}