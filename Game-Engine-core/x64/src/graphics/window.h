#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

namespace game_engine {

	namespace graphics {
		
		class Window 
		{

		private:
			const char* m_Title;
			int m_Height, m_Width;
			GLFWwindow* m_Window;
			bool m_Closed;

		public:
			Window(const char* title, int width, int height);
			~Window();
			void clear() const;
			void update() const;
			bool closed() const;

		private:
			bool init();
		};
	}

}	