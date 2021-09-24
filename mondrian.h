/*
 * mondrian.h
 *
 * Author: <your name here>
 *
 * Generate recursive pictures inspired by the art of Piet Mondrian.
 */

#ifndef _MONDRIAN_H
#define _MONDRIAN_H

#include <string>
#include "picture.h"

using namespace std;

class Mondrian {
public:
    void paint(string output_filename, int width, int height);

private:
    void _paint_recursive(Picture& picture, int left, int top, int right, int bottom);
    void _color_fill(Picture &picture, int left, int top, int right, int bottom);
    void _draw_horizontal_line(Picture &picture, int y, int left, int right);
    void _draw_vertical_line(Picture &picture, int x, int top, int bottom);
};

#endif
