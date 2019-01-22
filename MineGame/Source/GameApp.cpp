#include <Quiddity.h>



class game : public QDTY::Application {


public:

	game() {


	}
	~game() {


	}

};


QDTY::Application* QDTY::CreateApplication() {

	return new game();
}