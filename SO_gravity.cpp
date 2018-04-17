#include <iostream>
#include <math.h> 
using namespace std;
const int n = 1000000;
const float G  = 10.0;
const float M  = 1000.0;
float X[n];
float V[n];
float t[n];
void darEvolucion(float m, float vi, float xi, float h);

int main()
{
	float m0=8;
	float v0=1;
	float x0=200;
	float dt=0.001;
	//cout << "Ingrese la masa de la particula" << endl;
	//cin>> m0;
	//cout << "Ingrese la velocidad inicial de la particula " << endl;
	//cin >> v0;
	//cout << "Ingrese la posicion inicial de la particula"<< endl;
	//cin >> x0;
	//cout << "Ingrese el delta de tiempo en el que se quiere estudiar la particula "<< endl;
	//cin>> dt;
	darEvolucion(m0,v0,x0,dt);
	return 0;
}

void darEvolucion(float m,float vi, float xi, float h)
{
	t[0]=0;
	X[0]=xi;
	V[0]=vi;
	for(int i=1;X[i-1]>0.01*xi;i++)
	//for(int i=1;i<n;i++)
	{
		if(1==1)
		//if(X[i-1]>0.01*xi)
		{
			t[i]=i*h;
			X[i]=X[i-1]-h*sqrt(G*M/(V[i-1]));
			V[i]=V[i-1]+h*((X[i-1])); 
			  
			cout << X[i]<<" "<<V[i]<<" "<< t[i]<<endl;
		}
	}
}
