# Mass–Spring–Damper Simulation (C++)
This project simulates a 1D mass–spring–damper system using numerical integration.
It outputs results to CSV for further analysis and plotting.

## Model
m * x'' + c * x' + k * x = 0

State:
x' = v  
v' = -(c/m) * v - (k/m) * x

## Planned Features
- [ ] Euler integrator
- [ ] RK4 integrator
- [ ] CSV output (t, x, v)
- [ ] CLI parameters (m, c, k, dt, T)
- [ ] Simple examples


