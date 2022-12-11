#define CATCH_CONFIG_RUNNER
#include "gip_mini_catch.h"

#include "MyCanvas.h"

int main()
{
    MyCanvas canvas(10, 10);
    Catch::Session().run();
    system("PAUSE");
    return 0;
}
