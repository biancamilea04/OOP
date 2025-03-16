#pragma once
#include <iostream>
#include <cmath>
#include "canvas.h"

using namespace std;


void Canvas::Print()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << canvas[i][j];
        }
        cout << endl;
    }
}

void Canvas::Clear()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            canvas[i][j] = ' ';
        }
    }
}

Canvas::Canvas(int width, int height) : width(width), height(height)
{
    canvas = new char* [height];
    for (int i = 0; i < height; i++)
    {
        canvas[i] = new char[width];
        for (int j = 0; j < width; j++)
        {
            canvas[i][j] = ' ';
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch)
{
    if (x >= 0 && x < width && y >= 0 && y < height)
    {
        canvas[y][x] = ch;
    }
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) 
{
    int x, y;
    int xd = abs(x2 - x1);
    int yd = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = xd - yd;

    if (xd != 0 && yd == 0)
    {
        x = x1;
        for (y = y1; y <= y1 + yd; y++)
            SetPoint(x, y, ch);
    }
    else
        if (xd == 0 && yd != 0)
        {
            y = y1;
            if (x1 < x2)
                x = x1;
            else
                x = x2;
            for (int kx = x; kx <= x + xd; kx++)
                SetPoint(x, y, ch);
      }
        else
        {
            if (xd > yd)
            {
                y = y1;
                if (xd < 0) {
                    {
                        for (x = x1; x <= x2; x--)
                        {
                            SetPoint(x, y, ch);
                            y++;
                        }
                    }
                }
                else
                {
                    for (x = x1; x <= x2; x++)
                    {
                        SetPoint(x, y, ch);
                        y++;
                    }
                }
            }
            else
                if (yd >= xd)
                {
                    int s;
                    if (xd > 0)
                        s = 1;
                    else
                        s = -1;
                    x = x1;
                    for (y = y1; y <= y2; y++)
                    {
                        SetPoint(x, y, ch);
                        x = x + s;
                    }
                }
        }

    }

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = top; i <= bottom; i++)
    {
        for (int j = left; j <= right; j++)
        {
            if ((i == top || i == bottom) || (j == left || j == right))
            {
                if (i >= 0 && i < height && j >= 0 && j < width)
                {
                    SetPoint(i, j, ch);
                }
            }
        }
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = top; i <= bottom; i++)
    {
        for (int j = left; j <= right; j++)
        {
            if (i >= 0 && i < height && j >= 0 && j < width)
            {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    int cx = x;
    int cy = y;
    int r = ray;

    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <=width; j++)
        {
            if ( ( ( (i - cy) * (i - cy) + (j - cx) * (j - cx) - r * r ) ) == 1)
            {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    int cx = x;
    int cy = y;
    int r = ray;

    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            if ((i - cy) * (i - cy) + (j - cx) * (j - cx) <= r * r)
            {
                    SetPoint(i, j, ch);
                
            }
        }
    }
}