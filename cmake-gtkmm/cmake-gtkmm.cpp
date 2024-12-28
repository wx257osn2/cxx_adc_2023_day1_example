// cmake-gtkmm.cpp : アプリケーションのエントリ ポイントを定義します。
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


int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ PSTR lpCmdLine, _In_ int nCmdShow) {

    int argc;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);

    auto app = Gtk::Application::create("org.gtkmm.example.base");
    return app->make_window_and_run<CMakeGtkmm::MyWindow>(argc, reinterpret_cast<char**>(argv));

}
