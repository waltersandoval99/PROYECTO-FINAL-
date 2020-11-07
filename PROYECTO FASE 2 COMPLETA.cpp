#include <iostream>
using namespace std;

void buscar_y_reemplazar(string& frase, string buscar, string rempl){
	int pos = frase.find(buscar);
	while (pos != -1){
		frase.replace(pos, buscar.size(), rempl);
		pos = frase.find(buscar, pos + rempl.size());
	}
}

int main(){
	string texto;
	cout<<"====================Ingrese el codigo a traducir==================="<<endl<<endl;
	string texto1;
	for(;;)
	{
		string texto;
		getline(cin, texto);
		buscar_y_reemplazar(texto, "cout", "llamar");
		buscar_y_reemplazar(texto, "int main", "entero especial");
		buscar_y_reemplazar(texto, "string", "caracteres");
		buscar_y_reemplazar(texto, "if", "si");
		buscar_y_reemplazar(texto, "endl", "finalizar");
		buscar_y_reemplazar(texto, "else", "entonces");
		buscar_y_reemplazar(texto, "exit", "salir");
		buscar_y_reemplazar(texto, "return", "retorno");
		buscar_y_reemplazar(texto, "break", "romper");
		buscar_y_reemplazar(texto, "void", "vacia");
		buscar_y_reemplazar(texto, ".open", "abrir");
		buscar_y_reemplazar(texto, "using", "usando");
		buscar_y_reemplazar(texto, "while", "mientras");
		buscar_y_reemplazar(texto, "volatile", "volatil");
		buscar_y_reemplazar(texto, "usinged", "no afirmado");
		buscar_y_reemplazar(texto, "typename", "tipo de nombre");
		buscar_y_reemplazar(texto, "typeid", "tipo id");
		buscar_y_reemplazar(texto, "typedef", "tipo definido");
		buscar_y_reemplazar(texto, "try", "tratar");
		buscar_y_reemplazar(texto, "true", "verdadero");
		buscar_y_reemplazar(texto, "struct", "estructura");
		buscar_y_reemplazar(texto, "static cast", "elenco estatico");
		buscar_y_reemplazar(texto, "static", "estatico");
		buscar_y_reemplazar(texto, "sizeof", "tamano de");
		buscar_y_reemplazar(texto, "signed", "firmado");
		buscar_y_reemplazar(texto, "short", "corto");
		buscar_y_reemplazar(texto, "reinterpret", "reinterpretador");
		buscar_y_reemplazar(texto, "register", "registro");
		buscar_y_reemplazar(texto, "public", "publico");
		buscar_y_reemplazar(texto, "protected", "protegido");
		buscar_y_reemplazar(texto, "privated", "privado");
		buscar_y_reemplazar(texto, "new", "nuevo");
		buscar_y_reemplazar(texto, "operator", "operador");
		buscar_y_reemplazar(texto, "namespace", "espacio de nombre");
		buscar_y_reemplazar(texto, "throw", "lanzar");
		buscar_y_reemplazar(texto, "this", "esto");
		buscar_y_reemplazar(texto, "template", "modelo");
		buscar_y_reemplazar(texto, "switch", "cambio");
		buscar_y_reemplazar(texto, "int", "intro");
		buscar_y_reemplazar(texto, "long", "largo");
		buscar_y_reemplazar(texto, "mutable", "mutar");
		buscar_y_reemplazar(texto, "inline", "en linea");
		buscar_y_reemplazar(texto, "goto", "instruccion");
		buscar_y_reemplazar(texto, "friend", "amigo");
		buscar_y_reemplazar(texto, "for", "para");
		buscar_y_reemplazar(texto, "float", "flotante");
		buscar_y_reemplazar(texto, "extern", "externo");
		buscar_y_reemplazar(texto, "explicit", "explicito");
		buscar_y_reemplazar(texto, "enum", "enumeracion");
		buscar_y_reemplazar(texto, "dynamic cast", "conversiones");
		buscar_y_reemplazar(texto, "double", "doble");
		buscar_y_reemplazar(texto, "delete", "eliminar");
		buscar_y_reemplazar(texto, "do", "hacer");
		buscar_y_reemplazar(texto, "default", "predeterminado");
		buscar_y_reemplazar(texto, "continue", "continuar");
		buscar_y_reemplazar(texto, "const", "constante");
		buscar_y_reemplazar(texto, "class", "clase");
		buscar_y_reemplazar(texto, "catch", "atrapar");
		buscar_y_reemplazar(texto, "case", "caso");
		buscar_y_reemplazar(texto, "system", "sistema");
		buscar_y_reemplazar(texto, "char", "cadena");
		buscar_y_reemplazar(texto, "float", "flotante");
		buscar_y_reemplazar(texto, "pause", "pausa");
		if(texto == "1230")
			break;
		texto1+=texto+'\n';	
	}
		cout<<"."<<endl<<endl;
		cout<<"================ Codigo traducido al espanol=================="<<endl<<endl;
		cout<<texto1;
	
	return 0;
}
