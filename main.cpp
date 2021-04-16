#include <iostream>
#include <string>

using namespace std;

//quando ==true, o código continua sendo executado
//quando ==false, o programa encerra.
bool rodarCodigo = true; 

// variável para armazenar a opção 1- inserir outra palavra e a opção 2-encerrar programa
int teste = 0; 

int main() {

  string palavra;
 
  while(rodarCodigo==true){

    cout << "Digite a palavra desejada \n\n";
    cin >> palavra; 

    //a variável tamanhoPalavra serve para dimensionar o vetor palavra de acordo com
    //a quantidade de caracteres,que é identificada pela função size()

    int tamanhoPalavra = size(palavra); 

    //se a palavra tiver menos de 50 caracteres executa a lógica
    if (tamanhoPalavra<=50){  

      //na hora, a melhor forma que pensei foi atribuindo cada letra
      //à resposta que já precisa ser impressa na tela.
      //o laço for scanea letra por letra do vetor palavra
      //e escreve na tela a tecla e a quantidade de vezes que a mesma precisa ser apertada       
  
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

      //ao final da palavra, o programa pergunta ao usuário se deseja inserir outra palavra
      //ou se deseja encerrar o programa
      cout << "\nDeseja inserir outra palavra? \n\n Digite '1' para sim ou '2' para encerrar o programa \n\n";
      cin >> teste;

      if(teste == 2){

        cout << "Até a próxima! ヽ(^o^)丿\n"; //um bonequinho simpático dando tchau ao usuário
        rodarCodigo=false;
      }

    }else{  

       //o código executa essa sequencia caso a palavra inserida
       //tenha mais de 50 caracteres e retorna ao inicio do código
       //solicitando que o usuário insira novamente uma palavra
       cout << "A palavra inserida é muito grande. Por favor insira uma outra palavra com menos de 50 caracteres \n\n";

    }

  }
  
}