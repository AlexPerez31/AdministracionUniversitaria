//  Alex Jordan Perez Rojas

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
{
    string texto;
	int a=1111,b=2111,c=3111,d=4111,e=4111;
	int menu,menue,menup,menup1;
	ifstream archivo;
	int cod,cod1,cc,con,n,el;
	float nes1[5], nes2[5], nes3[5], nes4[4], nes5[5], nes6[5], nes7[5], nes8[5], nes9[5], nes10[5];
	//constructor
		for (int i=0;i<5;i++)
	{
		nes1[i]=0; nes2[i]=0; nes3[i]=0; nes4[i]=0; nes5[i]=0; nes6[i]=0; nes7[i]=0; nes8[i]=0; nes9[i]=0; nes10[i]=0;
	}
	nes1[0]=4.0, nes1[1]=3.5, nes1[2]=1.5, nes1[3]=(nes1[0]+nes1[1]+nes1[2])/3;
	nes2[0]=3.0, nes2[1]=2.9, nes2[2]=4.0, nes2[3]=(nes2[0]+nes2[1]+nes2[2])/3;
	nes3[0]=4.0, nes3[1]=5.0, nes3[2]=5.0, nes3[3]=(nes3[0]+nes3[1]+nes3[2])/3;
	nes4[0]=1.0, nes4[1]=4.7, nes4[2]=3.0, nes4[3]=(nes4[0]+nes4[1]+nes4[2])/3;
	nes5[0]=2.0, nes5[1]=5.0, nes5[2]=1.0, nes5[3]=(nes5[0]+nes5[1]+nes5[2])/3;
	do
	{
	    ifstream archivo;
cod=0,menu=0,menue=0,cc=0,n=0,con=0,el=0;
	//Menu principal
	cout<<"\n \n \t//MENU PRINCIPAL//\n";
	cout<<"-Seleccione  Su  Perfil- \n";
	cout<<" ---------------------------\n";
	cout<<"|1. Estudiante              |\n";
	cout<<" ---------------------------\n";
	cout<<"|2. Profesor                |\n";
	cout<<" ---------------------------\n";
	cout<<"|3. Administrador           |\n";
	cout<<" ---------------------------\n";
	cout<<"|0. Salir                   |\n";
	cout<<" ---------------------------\n";
	cin>>menu;
	switch (menu)
	{
		case 1:
		{
			string texto;
			while (cod!=1111 and cod!=2111 and cod!=3111 and cod!=4111 and cod!=5111 and cod!=10 or cod==20 and menue!=1)
			{
			cout<<"\nDigite el codigo del estudiante\n";
			cout<<"10.Menu Principal\n \n \n";
			cin>>cod;
			if (cod==a)
			{
				//menu estudiante 1
			archivo.open("1111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
				nes1[3]=(nes1[0]+nes1[1]+nes1[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes1[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes1[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"20-Regresar al menu anterior \n";
				cin>>cod;
			}
			}
	        else if (cod==b)
	        {
	        		//menu estudiante 2
	        archivo.open("2111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n 1. Ver Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes2[3]=(nes2[0]+nes2[1]+nes2[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes2[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes2[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"20-Regresar al menu anterior \n";
				cin>>cod;
		}
	}
			  else if (cod==c)
	        {
	        		//menu estudiante 3
	        archivo.open("3111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	      cout<<"\n 1. Ver Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes3[3]=(nes3[0]+nes3[1]+nes3[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes3[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes3[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"20-Regresar al menu anterior \n";
				cin>>cod;
			}
		}
			  else if (cod==d)
	        {
	        		//menu estudiante 4
	        archivo.open("4111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n 1. Ver Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes4[3]=(nes4[0]+nes4[1]+nes4[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes4[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes4[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"20-Regresar al menu anterior \n";
				cin>>cod;
				}
			}
			  else if (cod==e)
	        {
	        		//menu estudiante 5
	        archivo.open("5111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n 1. Ver Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes5[3]=(nes5[0]+nes5[1]+nes5[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes5[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes5[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"20-Regresar al menu anterior \n";
				cin>>cod;
				}
			}
			else
	        {
	        	cout<<"Este estudiante no existe\n";
	        	cod=10;
			}
		}
				break;
		}
		case 2:
		{
			// Menu Profesor
			string texto;
			while (cc!=1112 and cc!=2113 and cc!=10  or cc==20)
			{
			cout<<"\n Digite el codigo del profesor\n";
			cout<<"10.Menu Principal\n \n \n";
			cin>>cc;
			if (cc==1112)
			{
				//mENU pROFESOR 1
			archivo.open("1112.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
				cout<<"\n \nPrimero debe seleccionar al estudiante que desea editar\n";
			string texto;
			while (cod!=1111 and cod!=2111 and cod!=3111 and cod!=4111 and cod!=5111 and cod!=10  or cod==20 and menue>2)
			{
			cout<<"Digite el codigo del estudiante\n";
			cout<<"10.Menu Principal\n \n \n";
			cin>>cod;
			if (cod==a)
			{
				//menu estudiante 1
			archivo.open("1111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes1[3]=(nes1[0]+nes1[1]+nes1[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes1[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes1[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				break;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
				if (n==1)
				{
				cin>>nes1[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes1[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes1[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
			}
		}
	        else if (cod==b)
	        {
	        		//menu estudiante 2
	        archivo.open("2111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				nes2[3]=(nes2[0]+nes2[1]+nes2[2])/3;
				case 1:
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes2[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes2[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				break;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
				if (n==1)
				{
				cin>>nes2[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes2[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes2[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
		}
	}
			  else if (cod==c)
	        {
	        		//menu estudiante 3
	        archivo.open("3111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	      cout<<"\n1. Ver Notas \n";
	      cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes3[3]=(nes3[0]+nes3[1]+nes3[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes3[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes3[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes3[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes3[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes3[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
			}
		}
			  else if (cod==d)
	        {
	        		//menu estudiante 4
	        archivo.open("4111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes4[3]=(nes4[0]+nes4[1]+nes4[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes4[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes4[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes4[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes4[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes4[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
				}
			}
			  else if (cod==e)
	        {
	        		//menu estudiante 5
	        archivo.open("5111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes5[3]=(nes5[0]+nes5[1]+nes5[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes5[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes5[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes5[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes5[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes5[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
				}
			}
			else
	        {
	        	cout<<"Este estudiante no existe\n";
	        	cod=10;
			}
		}
			}
			else if (cc==1113)
			{
					//mENU pROFESOR 1
			archivo.open("1113.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
				{
				cout<<"\n \nPrimero debe seleccionar al estudiante que desea editar\n";
			string texto;
			while (cod!=1111 and cod!=2111 and cod!=3111 and cod!=4111 and cod!=5111 and cod!=10  or cod==20 and menue>2)
			{
			cout<<"Digite el codigo del estudiante\n";
			cout<<"10.Menu Principal\n \n \n";
			cin>>cod;
			if (cod==a)
			{
				//menu estudiante 1
			archivo.open("1111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes1[3]=(nes1[0]+nes1[1]+nes1[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes1[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes1[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes1[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes1[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes1[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
			}
			}
	        else if (cod==b)
	        {
	        		//menu estudiante 2
	        archivo.open("2111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes2[3]=(nes2[0]+nes2[1]+nes2[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes2[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes2[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes2[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes2[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes2[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
		}
	}
			  else if (cod==c)
	        {
	        		//menu estudiante 3
	        archivo.open("3111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	      cout<<"\n1. Ver Notas \n";
	      cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes3[3]=(nes3[0]+nes3[1]+nes3[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes3[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes3[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes3[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes3[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes3[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
			}
		}
			  else if (cod==d)
	        {
	        		//menu estudiante 4
	        archivo.open("4111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes4[3]=(nes4[0]+nes4[1]+nes4[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes4[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes4[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes4[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes4[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes4[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
				}
			}
			  else if (cod==e)
	        {
	        		//menu estudiante 5
	        archivo.open("5111.txt",ios::in);
			while(!archivo.eof())
			{
				getline(archivo,texto);
				cout<<texto<<endl;
			}
	        cout<<"\n1. Ver Notas \n";
	        cout<<"2. Editar Notas \n";
	        cout<<"10.Menu Principal\n";
	        cin>>menue;
	        switch (menue)
				{
				case 1:
					nes5[3]=(nes5[0]+nes5[1]+nes5[2])/3;
					for (int i=0;i<3;i++)
					{
					cout<<"nota: "<<i+1<<" ["<<nes5[i]<<"] \n";
				}
				cout<<"nota final: ["<<nes5[3]<<"]";
				cout<<"\n \n10-Regresar al menu principal \n";
				cout<<"\n \n20-Regresar al menu anterior \n";
				cin>>cod;
				case 2:
				while(n!=1 and n!=2 and n!=3)
				{
					cout<<"Cual nota desea editar";
					cout<<"\nNota 1. \nNota 2. \nNota 3.\n";
					cin>>n;
					break;
				if (n==1)
				{
				cin>>nes5[0];
				cod=20;
				}
				else if (n==2)
				{
				cin>>nes5[1];
				cod=20;
				}
				else if (n==3)
				{
				cin>>nes5[2];
				cod=20;
				}
				else
				{
				cout<<"Esta nota no esxite";
			}
			}
				}
			}
			else
	        {
	        	cout<<"Este estudiante no existe\n";
	        	cod=10;
			}
		}
			}
			}
			else
	        {
	        	cout<<"Este profesor no existe\n";
			}
		}
		break;
		}
	case 3:
{

			do
			{
				cout<<"\nDigite la contraseña\n";
				cout<<"10.Regresar al menu principal\n";
				cin>>con;
				if (con==123)
                {
                    do
                    {
                    cout<<"\t \nMenu Administrador\n";
                    cout<<"1.Eliminar estudiante\n";
                    cout<<"2.Restaurar estudiante\n";
                    cout<<"10.Regresar al menu principal\n";
                    cin>>el;
                    switch (el)
                    {
                        case 1:
                            {
                                while(cod!=1111 and cod!=2111 and cod!=3111 and cod!=4111 and cod!=5111)
                                {
                                cout<<"\nDigite el codigo del estudiante que desea eliminar\n";
                                cin>>cod1;
                                if(cod=a)
                                {
                                    a=0;
                                    el=10;
                                }
                                else if(cod=b)
                                {
                                    b=0;
                                    el=10;
                                }
                                else if(cod=c)
                                {
                                    c=0;
                                    el=10;
                                }
                                else if(cod=d)
                                {
                                    d=0;
                                    el=10;
                                }
                                else if(cod=e)
                                {
                                    e=0;
                                    el=10;
                                }
                                else
                                {
                                    cout<<"Este estudiante no existe";
                                }
                            }
                        break;
                    }
                        case 2:
                            {
                                 while(cod!=1111 and cod!=2111 and cod!=3111 and cod!=4111 and cod!=5111)
                                {
                                cout<<"\nDigite el codigo del estudiante eliminado que desea restaurar\n";
                                cin>>cod1;
                                if(cod=1111)
                                {
                                    a=1111;
                                    el=10;
                                }
                                else if(cod=2111)
                                {
                                    b=2111;
                                    el=10;
                                }
                                else if(cod=3111)
                                {
                                    c=3111;
                                    el=10;
                                }
                                else if(cod=4111)
                                {
                                    d=4111;
                                    el=10;
                                }
                                else if(cod=5111)
                                {
                                    e=5111;
                                    el=10;
                                }
                                else
                                {
                                    cout<<"Este estudiante no existe";
                                }
                            }
                            break;
                            }
                    }
                    }
                    while(el>2 and el!=10);
                }
                else
                {
                    cout<<"\nContraseña incorreta. Intentelo nuevamente";
                }
            }
			while (con!=123 and con!=10);
			break;
     		case 0:
			{
			    cout<<"\t _________________\n";
			    cout<<"\t|                 |\n";
			    cout<<"\t|                 |\n";
			    cout<<"\t|    Gracias!!!   |\n";
			    cout<<"\t|                 |\n";
			    cout<<"\t|-----------------|\n";
				exit(0);
			}
	}
}
	}
while (menu>3 or cod==10 or menue==10 or cc==10 or con==10 or el==10);
}


