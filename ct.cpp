/* 2. Matrix Operations
Scenario:
You're designing an image processing tool. The tool should invert the colors of a grayscale image.
The image is represented as a 2D array, where each element is a pixel value (0 to 255).
To invert the colors, subtract each pixel value from 255.

Input: A 2D array of integers representing pixel values.
Output: The modified 2D array after color inversion.
image = {
    {0, 128, 255},
    {34, 200, 87},
    {90, 45, 15}
}
inverted_image = {
    {255, 127, 0},
    {221, 55, 168},
    {165, 210, 240}
}*/
#include <iostream>
using namespace std;
int main()
{
    int image[3][3]={{0, 128, 255},{34, 200, 87},{90, 45, 15}};
    cout<<"image: ";
    cout<<image[3][3];
}
