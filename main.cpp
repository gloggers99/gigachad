#include <iostream>

#include "Gigachad.h"

// TODO: allow custom install directories (maybe not...)
// TODO: automatically add install folder to $PATH (add to shellrc?)
// TODO: built in updater for gigachad
// TODO: custom compile command format (printf style?)
// TODO: parallel build support (easy)
// TODO: make gigachad more colorful
// TODO: make configuration file
// TODO: wiki, website & guide
// TODO: make man page
// TODO: redirect help function to man page
// --TODO--: allow multiple binaryNames for project

int main(int argc, char *argv[])
{
    Gigachad *gigachad = new Gigachad(argc, argv);

    return 0;
}
