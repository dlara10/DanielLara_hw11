import numpy as num
import matplotlib.pyplot as plt 

#Lee datos
d=num.loadtxt("tray.txt")
x=d[:,0]
v=d[:,1]
t=d[:,2]

#Grafica de posicion
plt.figure()
plt.plot(t,x)
plt.title("Posicion vs Tiempo")
plt.ylabel("Posicion")
plt.xlabel("Tiempo")
plt.savefig("pos.png")

#Grafica de velocidad
plt.figure()
plt.plot(t,v)
plt.title("Velocidad vs Tiempo")
plt.ylabel("Velocidad")
plt.xlabel("Tiempo")
plt.savefig("vel.png")

#Grafica de posicion
plt.figure()
plt.plot(v,x)
plt.title("Posicion vs velocidad")
plt.ylabel("Posicion")
plt.xlabel("Velocidad")
plt.savefig("phase.png")
