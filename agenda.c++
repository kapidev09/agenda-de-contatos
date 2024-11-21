#include <iostream>
#include <vector>
 using namespace std;
  
      
        void procconta (int number){
           
          
           for (int x = 0; x < numero.size(); x++){
                 if(numero[x] == number){
                     cout<<"o numero foi encontrado "<<number<<" com os dados"<<endl;
                     
                 }else{
                      cout<<"não encontramos"<<endl;
                 }
                 
           }


        };




        void excluconta (int number){

        };
  
  
  int main (){
       int resp,nome,numero;

           vector<int>nome;
           vector<int>numero;



do{
         cout<<"----agenda----"<<endl;
         cout<<"1-adicionar contato"<<endl;
         cout<<"2-procurar contato"<<endl;
         cout<<"3-excluir contato"<<endl;
          cin>>resp;

} while (true);


        switch(resp){
             case 1:
                cout<<"digite o nome que quer adcionar: ";
                cin>>nomes;
                 cout<<"agora coloque o numero do contato "<<nedl;
                 cin>>numeros;
                    
                    nome.push_back(nomes);
                     numero.push_back(numeros);

                   

             break;

             case 2:
               cout<<"digite o nome que quer procurar: ";
                cin>>nome;
                 cout<<"agora coloque o numero do contato "<<nedl;
                 cin>>numero;
                      

                     procconta(number);

             break;

             case 3:

               cout<<"digite o nome que quer adcionar: ";
                cin>>nome;
                 cout<<"agora coloque o numero do contato "<<nedl;
                 cin>>numero;

                     excluconta(number);




             break;

        }
    return 0;
  }
