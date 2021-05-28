#include "consts.c"
#include "rects.c"

// Triangles
double get_triangle_area(double b, double h/*base and height*/) {
	return b*h / 2;
}

double get_triprism_vol(double b, double h, double h2/*Face base/width, Face height, Prism height*/) {
	return (b*h / 2) * h2;
}


// Circle stuff
double get_circle_area(double r/*radius*/) {
	return pi * (r*r); //A = π(r*r)
}

double get_radius(double d/*diameter*/) {
	return d/2; //Alternatively C/2π but that needs circumfrence
}

double get_diameter(double r/*radius*/)  {
	return r*2;
}

double get_circumfrence_fromr(double r/*radius*/) {
	return (2*pi) * r; //C = π(2r)
}

double get_circumfrence_fromd(double d/*diameter*/) {
	return pi * d; //C = 2πr
}

double get_cylinder_vol(double br, double h /*Base radius, height*/) {
	return get_circle_area(br) * h;
}

// Hemisphere
// A = π(r*r) / 2

double get_hemisphere_area(double r/*radius*/) {
	return (pi * (r*r))/2;
}
