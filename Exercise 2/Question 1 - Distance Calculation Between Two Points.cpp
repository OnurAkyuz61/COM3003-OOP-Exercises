#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;
const double R = 6378.137;

double toRadians(double degree) {
    return degree / 57.29577951;
}

double calculateDistance(double x1, double y1, double x2, double y2) {
    return R * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y2 - y1));
}

int main() {
    double lat1, lon1, lat2, lon2;
    cout << "Point A:\nLatitude: ";
    cin >> lat1;
    cout << "Longitude: ";
    cin >> lon1;
    cout << "Point B:\nLatitude: ";
    cin >> lat2;
    cout << "Longitude: ";
    cin >> lon2;

    lat1 = toRadians(lat1);
    lon1 = toRadians(lon1);
    lat2 = toRadians(lat2);
    lon2 = toRadians(lon2);

    double distance = calculateDistance(lat1, lon1, lat2, lon2);
    cout << "The distance between Point A and B is " << distance << "km" << endl;

    return 0;
}