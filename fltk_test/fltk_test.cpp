/*
Implemented from:
https://bumpyroadtocode.com/2017/08/05/how-to-install-and-use-fltk-1-3-4-in-visual-studio-2017-complete-guide/
*/
#include<FL/Fl.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Window.h>

int main()
{
	Fl_Window window(200, 200, "Window title");
	Fl_Box box(0, 0, 200, 200, "Hey, I mean, Hello, World!");
	window.show();
	return Fl::run();
}
