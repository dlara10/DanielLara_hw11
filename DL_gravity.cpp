#include <stdio.h>
#include <math.h>

using namespace std;

double movimiento(double x0, double v0, double M, double m, double G, double dt)
int main()
{
	//Se declaran las variables iniciales de gravedad y la masa M.
	int G = 10;
	int M = 1000;
	int m;
	float x, v, dt; 
	//Entran como valores pedidos al usuario: m, v, x, dt y h. siendo los dos ultimos
	//utilizados para el metodo de integracion.
	cout << "Ingresar valor de la particula de masa m:"<<endl;
	cin >> m;
	cout << "Ingresar valor de la velocidad inicial:"<<endl;
	cin >> v;
	cout << "Ingresar valor de la posicion inicial:"<<endl;
	cin >> x;
	cout << "Ingresar valor de dt:"<<endl;
	cin >> dt;
	movimiento(x, v, t,M, m, G, dt);
	
	return 0;

}
//Funcion que calculara el movimiento del planeta
double movimiento(double x0, double v0, double t, double M, double m, double G, double dt)
{	
	int i;
	float d, F, *a, cos, *x, *v;
	//Recorrido entre 0 y tiempo t 
	for (i=0;i<=t;i++)
	{
		if (i == 0)
			//Valores iniciales para el movimiento
			{	
				x[i]=x0;
				v[i]=v0;
				t[i]=x[i]/v[i];
				d=sqrt(pow(x,2)+pow(x,2));
				F=(G*M*m)/(pow(d,2));
				a[i] =-F/M;
			}
		//Valores que tomara el planeta luego del instante i == 0, solucion de la ecuacion
		//diferencial.
		x[i]=x[i-1]+v[i-1]*dt;
		d=sqrt(pow(x,2));
		cos=x[i]/d;
		v[i]=v[i-1]+a[i-1]*dt;
		t[i]=x[i]/v[i]
		F=(G*M*m)/(pow(d,2));
        	a[i]=-F*cos/M;
		cout << x[i] <<" "<< v[i] <<" "<<t[i]<<endl;
	}
}
