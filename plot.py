import pandas as pd
import matplotlib.pyplot as plt

# load csv
data = pd.read_csv("build/simulation_log.csv")

#extract columns
time = data["time"]
velocity = data["velocity"]
throttle = data["throttle"]

#plot velocity
plt.figure()
plt.plot(time, velocity)
plt.xlabel("Time (s)")
plt.ylabel("Velocity (m/s)")
plt.title("Velocity vs Time")
plt.grid(True)
plt.show()

#plot throttle
plt.figure()
plt.plot(time, throttle)
plt.xlabel("Time (s)")
plt.ylabel("Throttle")
plt.title("Throttle vs Time")
plt.grid(True)
plt.show()