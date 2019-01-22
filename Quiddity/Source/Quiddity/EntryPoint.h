#pragma once

#ifdef QDTY_PLATFORM_WINDOWS

extern QDTY::Application* QDTY::CreateApplication();

int main(int argc, char** argv ) {
	
	
	auto app = QDTY::CreateApplication();
	app->Run();
	delete app;


}

#endif 
