
#include <iostream> // Biblioteca que inclue as funcionalidades b�sicas de entrada e sa�da no console
#include <string> // Biblioteca que adiciona classes e fun��es para utilizar strings (caracteres de texto)
#include <fstream> // Biblioteca que escreve e l� dados em arquivos
#include <sstream> // � uma biblioteca para strings por�m � mais voltada a manipula��o e opera��es com strings
#include <algorithm> // � uma biblioteca que inclui varias funcionalidades com os conte�dos dos vetores como organizar em ordem alfab�tica por exemplo 
#include <vector> // Uma biblioteca para a adi��o e manipula��o de vetores
using namespace std; // Comando para evitar o uso de std:: durante o c�digo

int main(){ // Inicia a fun��o main
	
    string nome;
		string sobrenome;
		string estado;
		string municipio;
		// Vari�veis para armazenar nome, sobrenome, estado e muni�pio do usu�rio
		
		vector <string> nomes;
		vector <string> sobrenomes;
		vector <string> estados;
		vector <string> municipios;
		// Vetores para ordena��o do conte�do que forem salvos nas respectivas vari�veis acima
		
		string menu;
		string entrada;
		string ordenacao;
		string ordem;
		// Vari�veis para a manipula��o do menu principal, entrada, ordena��o e de sa�da

		do { // Adiciona o primeiro la�o de repeti��o do-while para executar o c�digo enquanto as op��es do menu n�o forem a op��o de FIM
		
		system ("cls"); // Comando para limpar a tela
    cout << "=========================================" << endl;
    cout << "===         BEM-VINDO AO MENU         ===" << endl;
    cout << "=========================================" << endl;
    cout << "= Digite o numero da opcao que deseja:  =" << endl;
		cout << "=                                       =" << endl;
    cout << "= 1 > Entrada                           =" << endl;
    cout << "=                                       =" << endl;
    cout << "= 2 > Ordenacao                         =" << endl;
    cout << "=                                       =" << endl;
    cout << "= 3 > Fim                               =" << endl;
    cout << "=                                       =" << endl;
    cout << "=========================================" << endl;
    cout << "\n>> ";
    getline(cin, menu);
    // Apresenta ao usu�rio o menu principal com as op��es "Entrada", "Ordena��o" e "Fim", tamb�m armazena a escolha do usu�rio na vari�vel "menu"

    while (menu != "1" && menu != "2" && menu != "3"){

        if (menu == "3"){

            break;

        }

        cout << "\nOpcao incorreta, por favor escolha uma das opcoes do menu: " << endl;
        menu = "";
        getline(cin, menu);

    } // Adiciona um la�o de repeti��o while para evitar que o usu�rio quebre o c�digo caso erre as op��es do menu
    	// Dentro do la�o � adicionado a condi��o de que se a alternativa 3 for escolhida o la�o � desfeito e o c�digo encerrado

		do { // Adiciona o segundo la�� de repeti��o do-while para executar a a��o escolhida no menu principal enquanto a escolha n�o for teclar enter para retornar ao menu principal

    if (menu == "1"){

				system ("cls");
				cout << "=========================================" << endl;
        cout << "===          MENU DE ENTRADA          ===" << endl;
        cout << "=========================================" << endl;
        cout << "= Preencha os campos abaixo             =" << endl;
        cout << "= Ou tecle 'enter' para retornar        =" << endl;
        cout << "=                                       =" << endl;
        cout << "= Primeiro nome >> ";
				getline(cin, nome);
        
        if (nome == ""){
        	
        	break;
				}
				
        cout << "=                                       =" << endl;
				cout << "= Sobrenome >> ";
        getline(cin, sobrenome);
        
        if (sobrenome == ""){
        	
        	break;
				}
				
        cout << "=                                       =" << endl;
				cout << "= Estado onde mora >> ";
        getline(cin, estado);
        
        if (estado == ""){
        	
        	break;
				}
				
        cout << "=                                       =" << endl;
				cout << "= Municipio >> ";
				getline(cin, municipio);
        
        if (municipio == ""){
        	
        	break;
				}
				// O comando "getline" a partir deste ponto ser� bastante utilizado para armazenar todo e qualquer dado digitado pelo usu�rio nas vari�ves que forem propostas
				// Nesta parte o c�digo armazena os dados do usu�rio e caso ele n�o digite algum o la�o � encerrado retornando ao menu principal
				
				ofstream arquivo_csv; // Cria uma classe de fluxo de arquivos com o "ofstream" para ler e escrever dados em arquivos
				arquivo_csv.open("Cidad�o.csv", ios::app); // Cria o arquivo chamado Cidad�o em formato .csv e o comando ios::app abre o arquivo em modo de escrita apenas adicionando as informa��es ao final do arquivo, sem alterar o conte�do j� existente
				
				if (arquivo_csv.is_open()) {
					
        arquivo_csv << nome << "," << sobrenome << "," << estado << "," << municipio << "\n";
        arquivo_csv.close();
        // Nesta parte ele cria uma condi��o para caso consiga abrir o arquivo salvar os dados armazenados nas vari�veis nome, sobremome, estado e municipio que foram digitadas pelo usu�rio separados por v�rgulas

        cout << "=                                       =" << endl;
				cout << "= Dados salvos no arquivo: Cidadao.csv  =" << endl;
				cout << "=========================================" << endl;
    		
				} else {
        
				cout << "=                                       =" << endl;
				cout << "= Erro ao abrir o arquivo: Cidadao.csv  =" << endl;
				cout << "=========================================" << endl;
    		
				} // Aqui finaliza a condi��o if com um uma mensagem no else caso o arquivo por algum motivo n�o consiga ser aberto
				
        cout << "\n Tecle 'enter' para retornar" << endl;
        cout << "\n>> ";
				getline(cin, entrada);
				
				while (entrada != ""){
				
				if (entrada == ""){
					
					break;
					
				}
				
        cout << "\nOpcao incorreta, para retornar ao menu principal tecle 'enter'" << endl;
  			getline(cin, entrada);
  			
			} // Nesta parte foi adicionado um la�o de repeti��o while para caso o usu�rio erre ao teclar enter
		
		} else if (menu == "2"){
			
			system ("cls");	
			cout << "=========================================" << endl;
      cout << "===         MENU DE ORDENACAO         ===" << endl;
      cout << "=========================================" << endl;
			cout << "= Escolha a lista que deseja exibir:    =" << endl;
			cout << "=                                       =" << endl;
			cout << "= 1 > Nomes                             =" << endl;
			cout << "=                                       =" << endl;
			cout << "= 2 > Sobrenomes                        =" << endl;
			cout << "=                                       =" << endl;
			cout << "= 3 > Estados                           =" << endl;
			cout << "=                                       =" << endl;
			cout << "= 4 > Municipios                        =" << endl;
			cout << "=                                       =" << endl;
			cout << "=========================================" << endl;
			cout << "\n Ou tecle 'enter' para retornar" << endl;
			cout << "\n>> ";
			getline(cin, ordenacao);
			
			// Esta parte do c�digo introduz o usu�rio ao menu de ordena��o onde ele deve escolher uma das listas de dados armazenados no arquivo para ser exibida ou teclar enter para retornar ao menu principal
			
			while (ordenacao != "1" && ordenacao != "2" && ordenacao != "3" && ordenacao != "4" && ordenacao != ""){
			
			if (ordenacao == ""){
				
				break;
			} // Caso a ordena��o seja nula significa que o usu�rio teclou enter e quebra o segundo la�o de repeti��o do-while retornando ao menu prinicpal
										
				cout << "\nOpcao incoreta, selecione uma opcao valida do menu ordenacao" << endl;
				ordenacao.clear ();
				getline(cin, ordenacao);
					
			} // Adiciona um la�o de repeti��o while para caso o usu�rio digite algo diferente do proposto no menu de ordena��o
			
			if (ordenacao == "1"){
					
					system ("cls");
					cout << "=========================================" << endl;
      		cout << "===          LISTA DE NOMES           ===" << endl;
      		cout << "=========================================" << endl;
      		cout << "=                                       =" << endl;
					
					ifstream arquivo_csv("Cidad�o.csv", ios::in); // Acessa o arquivo Cidad�o.csv utilizando o comando ios::in para abrir-lo em modo de leitura

        	if (arquivo_csv.is_open()) { // Checa se o arquivo foi aberto com sucesso e caso sim executa o resto
          
						vector <string> nomes; // Declara o vetor nomes para armazenar as informa��es da variavel nome
						string linha; // Adiciona uma vari�vel no formato de string

          	while (getline(arquivo_csv, linha)) {
          
							string nome, sobrenome, estado, municipio;
							istringstream linha_stream(linha);
          		
							getline(linha_stream, nome, ',');
							getline(linha_stream, sobrenome, ',');
    					getline(linha_stream, estado, ',');
    					getline(linha_stream, municipio, ',');  
              
							nomes.push_back(nome); // Armazena no vetor nomes todas o conte�do armazenado nas vari�veis nome 
            
						} // Nesta parte o c�digo recebe todas as vari�veis armazenadas no arquivo separadas por linhas

            sort(nomes.begin(), nomes.end()); // Utiliza a fun��o sort para organizar em ordem alfab�tica
            
            for (const auto& nome : nomes) {// Cria um la�o de repeti��o for e declara a variavel para receber cada elemento do vetor nomes durante cada itera��o com o loop
            	
								cout << "= >> " << nome << endl;
								cout << "=                                       =" << endl;
            
						} // Imprime na tela todos os nomes em ordem alfab�tica
						
						arquivo_csv.close(); // Fecha o aqrquivo
        	
					} else {
          	
						cout << "=                                       =" << endl;
						cout << "= Erro ao abrir o arquivo: Cidadao.csv  =" << endl;
						cout << "=========================================" << endl;
        	
					} // Imprime uma mensagem na tela caso o arquivo n�o abra
					
					cout << "= Lista encerrada.                      =" << endl;
					cout << "=========================================" << endl;
					cout << "\n Tecle 'enter' para retornar:" << endl;
					cout << "\n>> ";
					getline(cin, ordem);
					
					while (ordem != ""){
						
						if (ordem == ""){
							
							break;
						}
						
						cout << "\nOpcao incorreta, para retornar ao menu principal tecle 'enter'" << endl;
						ordem.clear();
						getline(cin, ordem);
					} // La�o de repeti��o caso o usu�rio erre em teclar enter para retornar
					
			} else if (ordenacao == "2"){ // Nesta segunda condi��o o c�digo utiliza os mesmo comandos para executar as mesmas a��es da primeira condi��o caso a variavel ordena��o fosse 1
					
					system ("cls");
					cout << "=========================================" << endl;
      		cout << "===        LISTA DE SOBRENOMES        ===" << endl;
      		cout << "=========================================" << endl;
      		cout << "=                                       =" << endl;
					
					ifstream arquivo_csv("Cidad�o.csv", ios::in);

        	if (arquivo_csv.is_open()) {
          
						vector <string> sobrenomes; // Declara o vetor sobrnomes para armazenar as informa��es da variavel sobrenome
						string linha;

          	while (getline(arquivo_csv, linha)) {
          
							string nome, sobrenome, estado, municipio;
							istringstream linha_stream(linha);
          		
							getline(linha_stream, nome, ',');
							getline(linha_stream, sobrenome, ',');
    					getline(linha_stream, estado, ',');
    					getline(linha_stream, municipio, ',');  
              
							sobrenomes.push_back(sobrenome);// Armazena no vetor sobrenomes todas o conte�do armazenado nas vari�veis sobrenome
            
						} // Mas desta vez o c�digo utiliza a vari�vel sobrenome para adquirir todas as informa��es de sobrenomes presentes no arquivo

            sort(sobrenomes.begin(), sobrenomes.end());// Utiliza a fun��o sort para organizar em ordem alfab�tica
            
            for (const auto& sobrenome : sobrenomes) {
            	
								cout << "= >> " << sobrenome << endl;
								cout << "=                                       =" << endl;
            
						}//Cria o la�o para receber todas as informa��es do vetor a cada intera��o e a cada intera��o imprime na tela todos os sobrenomes em ordem alfab�tica
						
						arquivo_csv.close(); // Fecha o arquivo
        	
					} else {
          	
						cout << "=                                       =" << endl;
						cout << "= Erro ao abrir o arquivo: Cidadao.csv  =" << endl;
						cout << "=========================================" << endl;
        	
					} // Exibe uma mensagem de erro caso n�o consiga abrir o arquivo
					
					cout << "= Lista encerrada.                      =" << endl;
					cout << "=========================================" << endl;
					cout << "\n Tecle 'enter' para retornar:" << endl;
					cout << "\n>> ";
					getline(cin, ordem);
					
					while (ordem != ""){
						
						if (ordem == ""){
							
							break;
						}
						
						cout << "\nOpcao incorreta, para retornar ao menu principal tecle 'enter'" << endl;
						ordem.clear();
						getline(cin, ordem);
					} // Mais um la�o de repeti��o caso o usu�rio erre ao teclar enter
					
			} else if (ordenacao == "3"){ // Mesma coisa das condi��es passadas mas para o a variavel "estado"
					
					system ("cls");
					cout << "=========================================" << endl;
      		cout << "===         LISTA DE ESTADOS          ===" << endl;
      		cout << "=========================================" << endl;
      		cout << "=                                       =" << endl;
					
					ifstream arquivo_csv("Cidad�o.csv", ios::in);

        	if (arquivo_csv.is_open()) {
          
						vector <string> estados;// Declara o vetor estados para armazenar as informa��es da variavel estados
						string linha;

          	while (getline(arquivo_csv, linha)) {
          
							string nome, sobrenome, estado, municipio;
							istringstream linha_stream(linha);
          		
							getline(linha_stream, nome, ',');
							getline(linha_stream, sobrenome, ',');
    					getline(linha_stream, estado, ',');
    					getline(linha_stream, municipio, ',');  
              
							estados.push_back(estado);// Armazena no vetor estados todas o conte�do armazenado nas vari�veis estado
            
						} // L� e imprime todas as vari�veis de estado presentes

            sort(estados.begin(), estados.end());// Utiliza a fun��o sort para organizar em ordem alfab�tica
						
						for (const auto& estado : estados) {
            	
								cout << "= >> " << estado << endl;
								cout << "=                                       =" << endl;
            
						}//Cria o la�o para receber todas as informa��es do vetor a cada intera��o e a cada intera��o imprime na tela todos os estadoss em ordem alfab�tica
						
						arquivo_csv.close(); // Fecha o arquivo
        	
					} else {
          	
						cout << "=                                       =" << endl;
						cout << "= Erro ao abrir o arquivo: Cidadao.csv  =" << endl;
						cout << "=========================================" << endl;
        	
					} // Mensagem de erro caso n�o consiga abrir o arquivo
					
					cout << "= Lista encerrada.                      =" << endl;
					cout << "=========================================" << endl;
					cout << "\n Tecle 'enter' para retornar:" << endl;
					cout << "\n>> ";
					getline(cin, ordem);
					
					while (ordem != ""){
						
						if (ordem == ""){
							
							break;
						}
						
						cout << "\nOpcao incorreta, para retornar ao menu principal tecle 'enter'" << endl;
						ordem.clear();
						getline(cin, ordem);
					} // La�o de repeti��o caso o usu�rio erre ao teclar enter para retornar
					
			} else if (ordenacao == "4"){ // Mesma coisa das outras mas para a variavel "municipios"
					
					system ("cls");
					cout << "=========================================" << endl;
      		cout << "===        LISTA DE MUNICIPIOS        ===" << endl;
      		cout << "=========================================" << endl;
      		cout << "=                                       =" << endl;
					
					ifstream arquivo_csv("Cidad�o.csv", ios::in);

        	if (arquivo_csv.is_open()) {
          
						vector <string> municipios;// Declara o vetor municipios para armazenar as informa��es da variavel municipios
						string linha;

          	while (getline(arquivo_csv, linha)) {
          
							string nome, sobrenome, estado, municipio;
							istringstream linha_stream(linha);
          		
							getline(linha_stream, nome, ',');
							getline(linha_stream, sobrenome, ',');
    					getline(linha_stream, estado, ',');
							getline(linha_stream, municipio, ',');
	
							municipios.push_back(municipio);// Armazena no vetor municipios todas o conte�do armazenado nas vari�veis municipio
            
						} // L� e imprime todos os municipios na tela enquanto houverem listados no arquivo

            sort(municipios.begin(), municipios.end());// Utiliza a fun��o sort para organizar em ordem alfab�tica
						
						for (const auto& municipio : municipios) {
            	
								cout << "= >> " << municipio << endl;
								cout << "=                                       =" << endl;
            
						}//Cria o la�o para receber todas as informa��es do vetor a cada intera��o e a cada intera��o imprime na tela todos os municipios em ordem alfab�tica
						
						arquivo_csv.close(); // Fecha o arquivo
        	
					} else {
          	
						cout << "=                                       =" << endl;
						cout << "= Erro ao abrir o arquivo: Cidadao.csv  =" << endl;
						cout << "=========================================" << endl;
        	
					} // Mensagem de erro ao abrir o arquivo
					
					cout << "= Lista encerrada.                      =" << endl;
					cout << "=========================================" << endl;
					cout << "\n Tecle 'enter' para retornar:" << endl;
					cout << "\n>> ";
					getline(cin, ordem);
					
					while (ordem != ""){
						
						if (ordem == ""){
							
							break;
						}
						
						cout << "\nOpcao incorreta, para retornar ao menu principal tecle 'enter'" << endl;
						ordem.clear();
						getline(cin, ordem);
					}	// La�o de repeti��o caso o usu�rio erre ao teclar enter	
			}
				
		} else if (menu == "3"){ // Condi��o final do c�digo caso a vari�vel 3 seja escolhida
			
				system ("cls");
        cout << "\n" << "\n" << "     Programa Finalizado!" << endl;
        return 0;
	
			} // Caso a op��o Fim seja escolhida pelo usu�rio o c�digo imprime na tela que o programa foi finalizado
			
		} while (entrada != ""); // Fim do segundo la�o de repeti��o
		
	}while (menu != "3"); // Fim do primeiro la�o de repeti��o
	
	return 0; // Retorna a fun��o main a 0 mostrando que o c�digo foi executado com sucesso
}
