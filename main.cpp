#include <iostream>
#include <string>

using namespace std;

bool rodarCodigo = true;
int teste = 0;

int main() {

 string palavra;
 
  while(rodarCodigo==true){
    cout << "Digite a palavra desejada \n\n";
    cin >> palavra; 
    int tamanhoPalavra = size(palavra);

      if (tamanhoPalavra<=50){         
    
          for (int i=0; i < tamanhoPalavra; i++){
            if(palavra[i]=='a'){
              cout << "#2=1 \n";
            }else if(palavra[i]=='b'){
              cout << "#2=2 \n";
            }else if(palavra[i]=='c'){
             cout << "#2=3 \n";
            }else if(palavra[i]=='d'){
              cout << "#3=1 \n";
            }else if(palavra[i]=='e'){
              cout << "#3=2 \n";
            }else if(palavra[i]=='f'){
              cout << "#3=3 \n";
           }else if(palavra[i]=='g'){
              cout << "#4=1 \n";
            }else if(palavra[i]=='h'){
              cout << "#4=2 \n";
            }else if(palavra[i]=='i'){
              cout << "#4=3 \n";
            }else if(palavra[i]=='j'){
              cout << "#5=1 \n";
            }else if(palavra[i]=='k'){
              cout << "#5=2 \n";
            }else if(palavra[i]=='l'){
              cout << "#5=3 \n";
            }else if(palavra[i]=='m'){
              cout << "#6=1 \n";
            }else if(palavra[i]=='n'){
              cout << "#6=2 \n";
            }else if(palavra[i]=='o'){
              cout << "#6=3 \n";
            }else if(palavra[i]=='p'){
              cout << "#7=1 \n";
            }else if(palavra[i]=='q'){
             cout << "#7=2 \n";
            }else if(palavra[i]=='r'){
              cout << "#7=3 \n";
            }else if(palavra[i]=='s'){
              cout << "#7=4 \n";
           }else if(palavra[i]=='t'){
             cout << "#8=1\n";
            }else if(palavra[i]=='u'){
              cout << "#8=2 \n";
            }else if(palavra[i]=='v'){
             cout << "#8=3 \n";
           }else if(palavra[i]=='w'){
              cout << "#9=1 \n";
           }else if(palavra[i]=='x'){
              cout << "#9=2 \n";
            }else if(palavra[i]=='y'){
             cout << "#9=3 \n";
            }else if(palavra[i]=='z'){
             cout << "#9=4 \n";
            }
      }
      cout << "\nDeseja inserir outra palavra? \n\n Digite '1' para sim ou '2' para encerrar o programa \n\n";
      cin >> teste;
      if(teste == 2){
        cout << "Até a próxima! ヽ(^o^)丿\n";
        rodarCodigo=false;
      }
     }else{      
       cout << "A palavra inserida é muito grande. Por favor insira uma outra palavra com menos de 50 caracteres \n\n";
     }
  }
}