
             #include <iostream>
             #include <stack>

             using namespace std;

             int main()  {



             stack <string> livros;

             livros.push("Livro de Programacao");
             livros.push("Licro de C");
             livros.push("Livro de PHP");
             livros.push("Livro de HTML");

             cout << "Tamanho da Pilha:  " << livros.size() << "\n";


            cout << "Livro do topo:  " << livros.top() << "\n"; 

            livros.pop();


            cout << "livro do topo:  "<< livros.top() << "\n"; 

            return 0;


            }
