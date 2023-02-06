#include "iostream"
#include "temperaturecontrollerapi.h"
using namespace std;

class CurrentTemperatureAPI {
    public:
        /**
         * @brief This function returns the current temperature
         *
         * The getCurrentTemperature() function returns an integer representing the current temperature.
         *
         * @return The current temperature
         */
        virtual int getCurrentTemperature() = 0;
};

class RealTemperatureAPI : public CurrentTemperatureAPI {
    public:
        /**
         * @brief This function returns the real temperature
         *
         * The getCurrentTemperature() function returns the real temperature reading.
         * In this example, it simply returns 25.
         *
         * @return The real temperature
         */
        int getCurrentTemperature() override {
            //this could implemented to read temperature from the sensor 
            return 25;
        }
};

class TemperatureController {
    private:
        int min_temp; ///< The minimum temperature
        int max_temp; ///< The maximum temperature
        CurrentTemperatureAPI* temperature_api; ///< A pointer to the current temperature API
    public:
        /**
         * @brief The constructor for the TemperatureController class
         *
         * The TemperatureController constructor takes three arguments:
         * `minTemp`, `maxTemp`, and `temperatureapi`. It initializes the private members
         * `min_temp`, `max_temp`, and `temperature_api` with these values.
         *
         * @param minTemp The minimum temperature
         * @param maxTemp The maximum temperature
         * @param temperatureapi A pointer to the current temperature API
         */
        TemperatureController(int minTemp, int maxTemp, CurrentTemperatureAPI* temperatureapi) :
            min_temp(minTemp),max_temp(maxTemp),temperature_api(temperatureapi) {}
        
        /**
         * @brief This function starts heating
         *
         * The startHeating() function outputs a message to the console indicating that heating has started.
         */
        void startHeating() {
            cout << "Starting heating..." << endl;
        }

        /**
         * @brief This function starts cooling
         *
         * The startCooling() function outputs a message to the console indicating that cooling has started.
         */
        void startCooling() {
            cout << "Starting cooling..." << endl;
        }

        /**
         * @brief This function adjusts the temperature
         *
         * The adjustTemperature() function uses the `temperature_api` to get the current temperature,
         * and starts heating or cooling if the temperature is below the minimum or above the maximum, respectively.
         * If the temperature is within range, it outputs a message to the console indicating so.
         */
        void adjustTemperature() {
            int current_temp = temperature_api->getCurrentTemperature();
            if (current_temp < min_temp) {
                startHeating();
            } else if (current_temp > max_temp) {
                startCooling();
            } else {
                cout << "Temperature is within range..." << endl;
            }
        }
};

/**
 * @brief The API for controlling the temperature
 *
 * The TemperatureControllerAPI class has a static function `controlTemperature` which creates an instance of
 * the `RealTemperatureAPI` and a `Temperature
 */

void TemperatureControllerAPI::controlTemperature(int minTemp, int maxTemp) {
    //get real temperature
    RealTemperatureAPI RT;
    TemperatureController TC(minTemp, maxTemp, &RT);
    TC.adjustTemperature();
}
