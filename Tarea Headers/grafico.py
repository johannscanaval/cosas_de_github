import matplotlib.pyplot as plt
import numpy as np
datos = np.loadtxt("datos.txt")

fig=plt.figure(figsize=(9,9))
ax1 = fig.add_subplot(221)
ax2 = fig.add_subplot(222)
ax3 = fig.add_subplot(223)
ax1.scatter(datos[:,0],datos[:,1], s=2)
ax2.scatter(datos[:,1],datos[:,2], s=2)
ax3.scatter(datos[:,0],datos[:,2], s=2)

ax1.set(title="Posición respecto al tiempo", xlabel = "t", ylabel = "Posición (y)")
ax2.set(title="Posición vs. velocidad", xlabel = "Y", ylabel = "Velocidad")
ax3.set(title="Velocidad respecto al tiempo", xlabel = "t", ylabel = "Velocidad")
fig.savefig("gráfica.pdf")
