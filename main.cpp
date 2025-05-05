#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/drawingarea.h>  // (jeśli MeasurementChart)

#include "MainWindow.h"


int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.example.airquality");
    MainWindow window;
    return app->run(window);
}

