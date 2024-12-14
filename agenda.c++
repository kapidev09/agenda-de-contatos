#include <iostream>
#include <vector>
#include <string>
 using namespace std;
  
      




  int main (){
       int resp,numeros;
       string nomes;

    
          vector<string>nome;
          vector<int>numero;
 
 
 do{
 
          
          cout<<"----agenda----"<<endl;
         cout<<"1-adicionar contato"<<endl;
         cout<<"2-procurar contato"<<endl;
         cout<<"3-excluir contato"<<endl;
         cout<<"4- mostrar todos os contatos"<<endl;
         cout<<"5- sair";
          cin>>resp;


         




        switch(resp){
             case 1:
                cout<<"digite o nome que quer adcionar: ";
                cin>>nomes;
                 cout<<"agora coloque o numero do contato "<<endl;
                 cin>>numeros;
                    
                    nome.push_back(nomes);
                     numero.push_back(numeros);

                 

             break;

             case 2:
               cout<<"digite o nome que quer procurar: ";
                cin>>nomes;
                 cout<<"agora coloque o numero do contato "<<endl;
                 cin>>numeros;
                      
                     
                      for (int x = 0; x< numero.size(); x++){
                            if (numero[x] == numeros ){
                                if(nome[x] == nomes){
                                 cout<<"achamos o numero é: "<< numero[x]<<endl;
                                
                                 cout<<"o nome do contato é: "<<nome[x]<<endl;
                                
                                    
                                }
                            }else{
                                cout<<"não achamos o numero, vc n add o numero que procura ou vc colocou um informação errado"<<endl;
                            };

                      };


               

             break;

             case 3:

               cout<<"digite o nome que quer excluir: ";
                cin>>nomes;
                 cout<<"agora coloque o numero do contato "<<endl;
                 cin>>numeros;
                 
                 bool removido = false;
                 
                
                for (size_t x; x <numero.size();x++){
                    if(nome[x] == nomes){
                        nome.erase(nome.begin() + x);
                        numero.erase(numero.begin() + x);
                           cout<<"contato removido com sucesso"<<endl;
                         removido = true;
                         break;
                        
                    };
                };
                
                if (!removido){
                    cout<<"contato não econtrado pra ser excluido "<<endl;
                };
                

        


             break;
         
         case 4:
             cout<<"este são todos os seus contatos salvos"<<endl;

              for(int x = 0; x< numeros.size(); x++){
               cout<<"nome: "<<nome[x]<<endl;
               cout<<"numero: "<<numero[x]<<endl;
              };
         break;
       
       case 5:
                // Sair do programa
                cout << "Saindo do menu, obrigado!" << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (resp != 5);
    return 0;
  }
