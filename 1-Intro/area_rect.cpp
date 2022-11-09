#include <iostream>
using namespace std;

// Gets the Area of a Rectangle
template <typename T> 
T area_rect(T x, T y)
{   
    T result = x * y;
	return result;
}

int main()
{
    int x1 = area_rect<int>(10.5,5);
    double x2 = area_rect<double>(10.5,5); 
    float x3 = area_rect<float>(10.5,5); 

    cout << x1 << ", " << x2 << ", " << x3 << endl;

	return 0;
}
