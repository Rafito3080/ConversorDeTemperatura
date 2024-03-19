#include <bits/stdc++.h>
using namespace std;

int main(){
    double temp;
    double resu1, resu2;
    int escolha;
    cout << "Escolha qual temperatura deseja calcular: \nSe desejar usar Kelvin, pressione 1. \nSe desejar usar Fahrenheit, pressione 2. \nCaso queira usar Celcius, pressione 3. \n";
    cin >> escolha;
    do{
        switch (escolha) {
            case 1:
                cout << "Quantos graus Kelvin (K)? \n";
                cin >> temp;
                resu1 = temp * 9/5 - 459.67;
                resu2 = temp - 273.15;
                cout << temp << " K é: \nEm Fahrenheit: " << resu1 << " F° \nEm Celsius: " << resu2 << " °C";
                break;
            case 2:
                cout << "Quantos graus Fahrenheit (°F)? \n";
                cin >> temp;
                resu1 = (temp - 32) / 1.8;
                resu2 = (temp + 459.67) * 5/9;
                cout << temp << " F° é: \nEm Celsius: " << resu1 << " C° \nEm Kelvin: " << resu2 << "K";
                break;
            case 3:
                cout << "Quantos graus Celcius (°C)? \n";
                cin >> temp;
                resu1 = temp * 1.8 + 32;
                resu2 = temp + 273.15;
                cout << temp << " C° é: \nEm Fahrenheit: "<< resu1  << " F° \nEm Kelvin: " << resu2 <<" K";
                break;
            default:
                cout << "Erro ocorreu, por favor tente novamente: \nEscolha qual temperatura deseja calcular. \nSe desejar usar Kelvin, pressione 1. \nSe desejar usar Fahrenheit, pressione 2. \nCaso queira usar Celcius, pressione 3. \n";
                cin >> escolha;
                switch (escolha) {
                            case 1:
                                cout << "Quantos graus Kelvin (K)? \n";
                                cin >> temp;
                                resu1 = temp * 9/5 - 459.67;
                                resu2 = temp - 273.15;
                                cout << temp << "K é: \nEm Fahrenheit: " << resu1 << " °F \nEm Celsius: " << resu2 << " °C";
                                break;
                            case 2:
                                cout << "Quantos graus Fahrenheit (F°)? \n";
                                cin >> temp;
                                resu1 = (temp - 32) / 1.8;
                                resu2 = (temp + 459.67) * 5/9;
                                cout << temp << "°F é: \nEm Celsius: " << resu1 << " C° \nEm Kelvin: " << resu2 << "K";
                                break;
                            case 3:
                                cout << "Quantos graus Celcius(°C)? \n";
                                cin >> temp;
                                resu1 = temp * 1.8 + 32;
                                resu2 = temp - 273.15;
                                cout << temp << " °C é: \nEm Fahrenheit: "<< resu1  << " °F \nEm Kelvin: " << resu2 <<" K";
                                break;
                            default:
                                cout << "Erro ocorreu, por favor tente novamente: \nEscolha qual temperatura deseja calcular. \nSe desejar usar Kelvin, pressione 1. \nSe desejar usar Fahrenheit, pressione 2. \nCaso queira usar Celcius, pressione 3. \n";
                                cin >> escolha;
                }
                break;
        }
    }
    while (escolha > 3);
    return 0;
}
