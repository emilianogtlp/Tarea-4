class Empleado
{
public:
	// Metodos de modificacion //
	void setId_empleado(int id);
	void setHoras_trabajadas(int hrt);
	void setSueldo_fijo(double sf);
	void setSueldo_xhora(double sxh);
	// Metodos de acceso //
	int getId_empleado();
	int getHoras_trabajadas();
	double getSueldo_fijo();
	double getSueldo_xhora();
	Empleado(); //Constructor default
	// Metodos especificos //
	void registrohoras(int hrt);
	double calculapago();


private:
	int id_empleado, horas_trabajadas;
	double sueldo_fijo, sueldo_xhora;
};

