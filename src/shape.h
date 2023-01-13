#ifndef SHAPE_H_
#define SHAPE_H_

typedef struct {
	float side;
	float area;
} Square;

typedef struct {
	float length;
	float width;
	float area;
} Rectangle;

typedef struct {
	float rad;
	float circ;
	float area;
	float s_area;
} Circle;

#endif // SHAPE_H_