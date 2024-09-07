#include <GLFW/glfw3.h>
#include <iostream>
#include "x64/src/graphics/window.h"

using namespace std;

int main() {
	using namespace game_engine;
	using namespace graphics;

	Window window("Sparky!", 800, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);


	while (!window.closed())
	{
		window.clear();

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);

		window.update();
	}
	return 0;
}

