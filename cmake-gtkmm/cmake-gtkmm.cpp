// CMakeProject-gtkmm.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "cmake-gtkmm.h"
namespace CMakeGtkmm {
	class MyWindow : public Gtk::Window {
	public:
		MyWindow();
	};

	MyWindow::MyWindow() {
		set_title("Hello Work!");
		set_default_size(600, 400);
	}
}


int main(int argc, char** argv) {

    auto app = Gtk::Application::create("org.gtkmm.example.base");
	return app->make_window_and_run<CMakeGtkmm::MyWindow>(argc, argv);

}
