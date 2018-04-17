import numpy as np
import matplotlib.pyplot as plt

x=np.genfromtxt("tray.txt",usecols=(0))
v=np.genfromtxt("tray.txt",usecols=(1))
t=np.genfromtxt("tray.txt",usecols=(2))
plt.title("Posicion contra tiempo")
plt.plot(t,x,label="xt")
plt.legend()
plt.savefig("pos.png")

plt.close()
plt.title("Velocidad contra tiempo")
plt.plot(t,v,label="vt")
plt.legend()
plt.savefig("vel.png")

plt.close("Volocidad contra posicion")
plt.plot(x,v,label="xv")
plt.legend()
plt.savefig("phase.png")
plt.close()

