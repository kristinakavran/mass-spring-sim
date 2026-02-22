#include <iostream>
#include <fstream>

int main() {

    // 1) Parameters
    double m = 1.0;   // mass
    double k = 10.0;  // spring constant

    // 2) Initial conditions
    double x = 1.0;   // initial position (displacement)
    double v = 0.0;   // initial velocity
    double c = 0.5;    // damping coefficient

    // 3) Simulation settings
    double dt = 0.01; // time step
    double T  = 5.0;  // total simulation time
    double t  = 0.0;  // current time

    std::cout << "t     x     v\n";

    // 4) Simulation loop (Euler)
    while (t <= T) {

        // Print current state
        std::cout << t << "  " << x << "  " << v << "\n";

        // Compute derivatives (rates of change)
        double dx = v;          // x' = v
        double dv = -(k/m) * x - (c/m) * v; // v' = -(k/m) * x - (c/m) * v;

        // Euler update
        x = x + dt * dx;
        v = v + dt * dv;

        // Step time forward
        t = t + dt;
    }
    file.close();
    std::cout << "Saved to output.csv\n";
    return 0;
}
