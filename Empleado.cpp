#include "Empleado.h"

void Empleado::setId_empleado(int id)
{
	id_empleado = id;
}

void Empleado::setHoras_trabajadas(int hrt)
{
	horas_trabajadas = hrt;
}

void Empleado::setSueldo_fijo(double sf)
{
	sueldo_fijo = sf;
}

void Empleado::setSueldo_xhora(double sxh)
{
	sueldo_xhora = sxh;
}

int Empleado::getId_empleado()
{
	return id_empleado;
}

int Empleado::getHoras_trabajadas()
{
	return horas_trabajadas;
}

double Empleado::getSueldo_fijo()
{
	return sueldo_fijo;
}

double Empleado::getSueldo_xhora()
{
	return sueldo_xhora;
}

Empleado::Empleado()
{
	id_empleado = 0;
	horas_trabajadas = 0;
	sueldo_fijo = 0;
	sueldo_xhora = 0;
}

void Empleado::registrohoras(int hrt)
{
	horas_trabajadas = horas_trabajadas + hrt;
}

double Empleado::calculapago()
{
	return (sueldo_fijo+(horas_trabajadas*sueldo_xhora));
}
