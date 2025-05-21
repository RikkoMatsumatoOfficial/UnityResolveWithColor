#pragma once
#include <filesystem>
#include <UnityResolve.hpp>

struct Color {
	float x;
	float y;
	float z;
};

Color GetStaticColorClass() {
	static Color col;
	return col;
}

void SetX(float x_col) {
	Color color_x = GetStaticColorClass();
	color_x.x = x_col;
}

void SetY(float y_col) {
	Color color_y = GetStaticColorClass();
	color_y.y = y_col;
}
void SetZ(float z_col) {
	Color color_z = GetStaticColorClass();
	color_z.z = z_col;
}
float GetX() {
	Color xcolorx;
	return xcolorx.x;
}
float GetY() {
	Color ycolor;
	return ycolor.y;
}
float GetZ() {
	Color zcolor;
	return zcolor.z;
}