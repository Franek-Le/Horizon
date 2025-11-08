#pragma once

#include "Core.h"

namespace Horizon {

	class HORIZON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Define in client
	Application* CreateApplication();

};