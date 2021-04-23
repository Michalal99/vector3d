#include <Eigen/Core>
#include <Eigen/Geometry>

using Eigen::Vector3d;

// https://eigen.tuxfamily.org/dox/group__QuickRefPage.html

// Method calculates a distance from point p to segment ab
// a - coordinates of the first point of the segment
// b - coordinates of the second point of the segment
// p - coordinates of the point to calculate distance to the segment from
// Returns distance
Vector3d Multiplication(const Vector3d &a, const Vector3d &b) {
    Vector3d c;
    c.x() = a.y() * b.z() - a.z() * b.y();
    c.y() = a.z() * b.x() - a.x() * b.z();
    c.z() = a.x() * b.y() - a.y() * b.x();
    return c;
}

double Magnitude(const Vector3d &a) {
    return sqrt(pow(a.x(), 2) + pow(a.y(), 2) + pow(a.z(), 2));
}

double Distance(const Vector3d &a, const Vector3d &b, const Vector3d &p) {
    // ************* YOUR CODE HERE *************

    Vector3d AB = b - a;
    Vector3d AP = p - a;
    Vector3d K = Multiplication(AB, AP);
    double area = Magnitude(K);
    double res = area / Magnitude(AB);
    return (res);

    // ******************************************
}

#include <iostream>

using namespace std;

int main() {

    // This is only simple example.
    // Solution must handle all possible cases.

    Vector3d a(0,0,0), b(1,0,0), p(1,1,0);
    cout << "Distance = " << Distance(a, b, p) << endl;
    return 0;
}
