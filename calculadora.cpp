// Calculadora en C++ que realiza hasta 10 operaciones con dos números ingresados 

#include <iostream>
#include <cmath> // Incluir biblioteca para usar funciones matemáticas como logaritmo
using namespace std;

int main() {
  int num1, num2, opcion, resultado;
  cout << "Ingrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;

  cout << "Elija una operacion: \n";
  cout << "1. Suma\n";
  cout << "2. Resta\n";
  cout << "3. Multiplicacion\n";
  cout << "4. Division\n";
  cout << "5. Potencia\n";
  cout << "6. Raiz cuadrada\n";
  cout << "7. Valor absoluto\n";
  cout << "8. Seno\n";
  cout << "9. Coseno\n";
  cout << "10. Logaritmo en base N\n"; 
  cout << "Ingrese su opcion: ";
  cin >> opcion;

  switch (opcion) {
    case 1:
      resultado = num1 + num2;
      cout << "El resultado de la suma es: " << resultado << endl;
      break;
    case 2:
      resultado = num1 - num2;
      cout << "El resultado de la resta es: " << resultado << endl;
      break;
    case 3:
      resultado = num1 * num2;
      cout << "El resultado de la multiplicación es: " << resultado << endl;
      break;
    case 4:
      if (num2 == 0) {
        cout << "No se puede dividir entre cero." << endl;
      } else {
        resultado = num1 / num2;
        cout << "El resultado de la división es: " << resultado << endl;
      }
      break;
    case 5:
      resultado = pow(num1, num2);
      cout << "El resultado de la potencia es: " << resultado << endl;
      break;
    case 6:
      resultado = sqrt(num1);
      cout << "La raíz cuadrada es: " << resultado << endl;
      break;
    case 7:
      resultado = abs(num1);
      cout << "El valor absoluto es: " << resultado << endl;
      break;
    case 8:
      resultado = sin(num1);
      cout << "El seno es: " << resultado << endl;
      break;
    case 9:
      resultado = cos(num1);
      cout << "El coseno es: " << resultado << endl;
      break;
    case 10:
      resultado = log(num1) / log(num2);
      cout << "El resultado del logaritmo es: " << resultado << endl;
      break;
    default:
      cout << "Opción no válida." << endl;
      break;
  }

  return 0;
}

