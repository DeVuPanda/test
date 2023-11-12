#include <iostream>

using namespace std;

class WeatherStation {

private:
    double temperature;
    double humidity;
    double air_pressure;
    double wind_speed;

public:
    void setWeather(double temperature, double humidity, double air_pressure, double wind_speed){
        setTemperature(temperature);
        setHumidity(humidity);
        setAir_pressure(air_pressure);
        setWind_speed(wind_speed);
    }
    double getTemperatureToFahrenheit(){
        return temperature * 9.0 / 5.0 + 32.0;
    }

    bool isTheWeatherGood() {
        if((temperature > 10) && (temperature < 25) && (humidity < 70) && (air_pressure > 600) && (wind_speed < 10))  //Temperature is measured in Celsius
            return true;                                                                                               //Humidity is measured in %
        else return false;                                                                                             //Air pressure is measured in millimeters of mercury
    }                                                                                                                  //Wind speed is measured in kilometers per hour

    void setTemperature(double temperature) {
        this->temperature = temperature;
    }

    double getTemperature() {
        return temperature;
    }

    void setHumidity(double humidity) {
        this->humidity = humidity;
    }

    double getHumidity() {
        return humidity;
    }

    void setAir_pressure(double air_pressure) {
        this->air_pressure = air_pressure;
    }

    double getAir_pressure() {
        return air_pressure;
    }

    void setWind_speed(double wind_speed) {
        this->wind_speed = wind_speed;
    }

    double getWind_speed() {
        return wind_speed;
    }
};

int main() {
    WeatherStation Ukraine{}, Norway{}, Brazil{};
    Norway.setWeather(5.0, 60.0, 769.0, 11.0);
    Ukraine.setWeather(15.5, 66.0, 760.5, 9.5);
    Brazil.setWeather(26.0, 76.0, 670.0, 16.0);

    cout << "Temperature in Fahrenheit:" << endl;
    cout << "Station in Norway: " << Norway.getTemperatureToFahrenheit() << endl;
    cout << "Station in Ukraine: " << Ukraine.getTemperatureToFahrenheit() << endl;
    cout << "Station in Brazil: " << Brazil.getTemperatureToFahrenheit() << endl;

    cout << "Is the weather good?" << endl;

    if (Norway.isTheWeatherGood()) {
        cout << "Station in Norway: Yes" << endl;
    } else {
        cout << "Station in Norway: No" << endl;
    }

    if (Ukraine.isTheWeatherGood()) {
        cout << "Station in Ukraine: Yes" << endl;
    } else {
        cout << "Station in Ukraine: No" << endl;
    }

    if (Brazil.isTheWeatherGood()) {
        cout << "Station in Brazil: Yes" << endl;
    } else {
        cout << "Station in Brazil: No" << endl;
    }

    cout<<"Hello from Ukraine!!!";

    cout<<"test №2";

    return 0;
}
