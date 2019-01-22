#pragma once

#include "Core.h"

namespace QDTY{

	class QUIDDITY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}