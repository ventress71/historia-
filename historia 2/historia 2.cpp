// historia 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int naci = 0;
	int deci1 = 0;
	int deci2 = 0;
	int playaM = 0;
	int trenM = 0;
	int pelearu = 0;
	string nombre;



	cout << "estas historia paso hace muchos anos" << endl;
	Sleep(1000);
	cout << "pero es tu historia " << endl;
	Sleep(5000);
	system("cls");
	cout << "donde naciste? ingresa digito" << endl;
	cout << "1- rusia, 2- mexico, default- salir" << endl;
	cin >> naci;

	switch (naci)
	{case 1:
		cout << "cuando naciste en las frias tierras de rusia no encontrabas mejor destino que unirte al ejercito,\nllegado los 18 tomaste la decision de unirte " << endl;
		Sleep(5000);
		system("cls");
		cout << "fuiste un soldado muy condecorado pero todo cambio un dia al llegar de una mision  " << endl;
		cout << "encontraste a tu esposa muerta, con un balazo en la cabeza \que haras? 1-investigar la escena 2-nada " << endl;
		cin >> deci1;
		switch (deci1)
		{
		case 1:
			cout << "encontraste restos de polvora la cual se mando a una prueba con un perito \nla cual demostro ser una bala mexicana asi que marcas a tus contactos infiltrados para buscar el motivo" << endl;
			Sleep(500);
			cout << "encontraste al asesino esta cerca la frontera tomando un tren " << endl;
			Sleep(500);
			cout << "como decides ir 1-helicoptero, 2-automovil, default -automovil " << endl;
			cin >> deci2;
			switch (deci2)
			{
			case 1:
				cout << "saltaste del helicoptero al tren en movimiento pero el helicoptero se estrello enfrente del tren asi que no tiene frenos\n y va chocar asi que tienes el tiempo contado " << endl;
				cout << "encuentras al mexicano asi que empieza una de las peleas mas dura de tu vida y sabes que vas a perder que decides 1-darle un balazo 2- salir y perderlo " << endl;
				cin >> pelearu;
			
				switch (pelearu)
				{
				case 1:
					cout << "le diste un balazo al final, no obtuviste lo que quisiste pero si venganza" << endl;
					cout << "nunca mas te casaste y te suicidaste a la edad de 45" << endl;
					return(0);

					break;

				case 2: cout << "al final no obtuviste tu venganza pero encontraste documentos donde detalla la operacion para eliminar a cualquier de los dos agentes " << endl;
					cout << "donde encuentras al verdadero culpable... continuara" << endl;
					return(0);
					break;

				default:
					cout << "al final no obtuviste tu venganza pero encontraste documentos donde detalla la operacion para eliminar a cualquier de los dos agentes " << endl;
					cout << "donde encuentras al verdadero culpable... continuara" << endl;
					return(0);
					break;
				}


			case 2:
				cout << "chocaste el coche contra el tren en movimiento pero el coche se estrello enfrente del tren moriste al instante suerte a la proxima" << endl;
				return(0);

				break;


			default:
				cout << "chocaste el coche contra el tren en movimiento pero el coche se estrello enfrente del tren moriste al instante suerte a la proxima" << endl;
				return(0);
				break;
			}


		case 2:
			cout << "asististe a su funeral y caiste en depresion por lo mismo se te dio de baja del ejercito presiona una tecla para salir " << endl;
			return(0);
			break;

		default: cout << "asististe a su funeral y caiste en depresion por lo mismo se te dio de baja del ejercito presiona una tecla para salir " << endl;
			return(0);
			break;
		}


		break;



	case 2: 

		cout << "cuando naciste en las tierras calidad de mexico no encontrabas mejor destino que unirte al ejercito para poder aliemntar a tu familia,\nllegado los 18 tomaste la decision de unirte " << endl;
		Sleep(5000);
		system("cls");
		cout << "eras de los mejores soldados pero te ofrecen una mision que cambiara tu vida \n aceptas? 1- si, 2-no, default - si  " << endl;
		cin >> deci1;
		switch (deci1)
		{
		case 1:
			cout << "tu mision fue ir a rusia a matar a un cientifico nuclear que esta a punto de desarrolar la bomba mas potente de el mundo  " << endl;
			Sleep(500);
			cout << "pero todo fue una trampa .... " << endl;
			Sleep(500);
			cout << "mataste a la familia de unos de los soldados rusos mas moortales del mundo  " << endl;
			Sleep(500);
			cout << "fue una trampa para deshacerte de ti, corre al tren" << endl;
			Sleep(500);
			cout << "te atrapo el ruso decide rapido 1-pelear a puño limpio 2- escapar" << endl;
			cin >> trenM;

			switch (trenM)
			{
			case 1:
				cout << "al final te disparo , nadie consigio lo que queria MORISTE" << endl;
				return(0);

				break;
			case 2:
				cout << "fue lo mejor que pudiste hacer " << endl;
				cout << "ahora cambia tu nombre " << endl;
				cin >> nombre;
				cout << "hasta luego " << nombre << "nos vemos en otra vida " << endl;

				break;
			default:
				cout << "fue lo mejor que pudiste hacer " << endl;
				cout << "ahora cambia tu nombre " << endl;
				cin >> nombre;
				cout << "hasta luego " << nombre << "nos vemos en otra vida " << endl;

				break;
			}


			break;


		case 2:
			cout << "fue la mejor desicion de tu vida  " << endl;
			cout << "a que playa te quieres retirar 1-los cabos 2- cancun " << endl;
			switch (playaM)
			{
			case 1:
				cout << "nadas con osos marinos y eres feliz " << endl;

				break;
			case 2:
				cout << "*c toma su coco " << endl;

				break;
			default:
				cout << "*c toma su coco " << endl;
				break;
			}

			break;


		default:
			switch (playaM)
			{
			case 1:
				cout << "nadas con osos marinos y eres feliz " << endl;

				break;
			case 2:
				cout << "*c toma su coco " << endl;

				break;
			default:
				cout << "*c toma su coco " << endl;
				break;
			}
			break;
		}


		break;
	default:

		break;
	}


   
}
