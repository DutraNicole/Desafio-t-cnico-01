#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main()
{
   string nome = "Mestre Yoda";
   char usuario_stargram = 'Y' ;
   string bio_stargram = "Nascido 896 anos antes da Batalha de Yavin, Sendo o Grande Mestre de Ordem Jedi";
   int idade = 900; 
   float seguidores_stargram = 1.977f;
   double n_curtidas = 7957;
   int escolha = 1, escolha02 = 2;
  
   cout<<"Nome: "<< nome << ", Idade: " << idade << endl;
   cout<< "Deseja ver mais informações sobre Yoda?"<< endl;
   cout<< "Deseja ver os dados do STARGRAM de yoda?"<< endl;
  
   cout<< "Se sim, digite 1 ou digite 2"<< endl;
   cin >> escolha;

   
   if (escolha == 1)
   {
    cout<< "AQUI ESTÁ UM POUCO SOBRE A HISTÓRIA DE YODA: "<< endl; 
    cout<< "Yoda era muito habilidoso com o sabre de luz. Entre seus colegas do Conselho Jedi, ele era conhecido por fazer algumas travessuras e piadas. Para todos eles, ele era o humilde Yoda, que oferecia liderança instruída e sintetizava os ideais da Ordem Jedi; um mestre majestoso, ele era um sábio instrutor."<< endl;
   }
   else if (escolha02 == 2)
   {
   cout<<"Nome de usuário do STARGRAM: "<< usuario_stargram << endl;
   cout<<"Seguidores do STARGRAM: "<<seguidores_stargram<< endl;
   cout<< fixed << setprecision(4) <<"Curtidas do STARGRAM: "<< n_curtidas<< endl;
   cout<<"Bio do STARGRAM: "<< bio_stargram << endl; 
   
   }
   else 
   {
    cout<< "Por favor, digite o número 1 ou 2!"<< endl;    
   }
   
    return 0;
}