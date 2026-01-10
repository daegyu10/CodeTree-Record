#include <iostream>
using namespace std;

class Forecast {
    public:
        string date;
        string day;
        string weather;

        Forecast(string date, string day, string weather) {
            this->date = date;
            this->day = day;
            this->weather = weather;
        }

        Forecast() {}
};

int main() {
    // Please write your code here.
    int n;
    string a,b,c;
    cin >> n;

    Forecast forecasts[n];
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        forecasts[i] = Forecast(a,b,c);
    }

    int index = 0;
    for(int i = 0; i < n; i++) {
        if(forecasts[i].weather == "Rain") {
            if(index == 0) {
                index = i;
            }
            if(forecasts[i].date < forecasts[index].date) {
                index = i;
            }
        }
    }

    cout << forecasts[index].date << " " << forecasts[index].day << " " << forecasts[index].weather;
    return 0;
}