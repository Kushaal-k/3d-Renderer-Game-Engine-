#include "window.h"
using namespace std;

namespace game_engine { namespace graphics {
	
	Window::Window(const char* title, int width, int height) 
	{
		
		m_Title = title;
		m_Height = height;
		m_Width = width;
		if (!init())
			glfwTerminate();	
	}

	Window::~Window() 
	{
		glfwTerminate();
	}
	
	bool Window::init() 
	{
		if (!glfwInit()) {
			cout << "Failed to initialize GLFW!" << endl;
			return false;
		}
		m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
		if (!m_Window)
		{
			glfwTerminate();
			cout << "Failed to create GLFW window!" << endl;
			return false;
		}
		glfwMakeContextCurrent(m_Window);
		return true;
	}
	
	void Window::clear() const
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}
	
	void Window::update() const 
	{	
		glfwPollEvents();
		glfwSwapBuffers(m_Window);
	}

	bool Window::closed() const
	{
		return glfwWindowShouldClose(m_Window) == 1;
	}

	

	

} }