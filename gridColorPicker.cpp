#include "gridColorPicker.h"

gridColorPicker::gridColorPicker(HSLAPixel gridColor, int gridSpacing)
{
    color = gridColor;
    spacing = gridSpacing;
}

HSLAPixel gridColorPicker::operator()(int x, int y)
{

    if ((x % spacing == 0) || (y % spacing == 0))
    {
        return color;
    }
    HSLAPixel pixel;
    pixel.h = 0.0;
    pixel.s = 0.0;
    pixel.l = 1.0;
    return pixel;
}
