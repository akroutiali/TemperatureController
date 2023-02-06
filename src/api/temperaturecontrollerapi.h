#include <stdio.h>
using namespace std;

class TemperatureControllerAPI {
public:
    /**
     * @brief The API for controlling the temperature
     *
     * The TemperatureControllerAPI class has a static function `controlTemperature` which creates an instance of
     * the `RealTemperatureAPI` and a `Temperature
     */
    static void controlTemperature(int minTemp, int maxTemp);
};