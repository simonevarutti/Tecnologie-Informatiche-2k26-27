//Creazione di un banale sistema di login:
//Chiedere all’utente di inserire nome utente, password ed e-mail per registrarsi.
//Richiedere poi nome utente e password per il login.
//Se coincidono con quelle inserite durante la registrazione, stampare “Login effettuato”, altrimenti stampare “Il nome utente o la password sono errati”.

#include <iostream>
#include <string>

int main()
{
	std::string nome, password, email;
	std::string nomeLogin, passwordLogin;

	std::cout << "Inserire nome utente: ";
	std::cin >> nome;
	std::cout << std::endl;

	std::cout << "Inserire password: ";
	std::cin >> password;
	std::cout << std::endl;

	std::cout << "Inserire indirizzo email: ";
	std::cin >> email;
	std::cout << std::endl;

	std::cout << "Reinserire nome utente: ";
	std::cin >> nomeLogin;
	std::cout << std::endl;

	std::cout << "Reinserire password: ";
	std::cin >> passwordLogin;
	std::cout << std::endl;

	if(nome == nomeLogin && password == passwordLogin) {
		std::cout << "Login effettuato";
		std::cout << std::endl;
	}

	else 
	{
		std::cout << "Il nome utente o la password sono errati";
	}
	std::cout << std::endl;

	return 0;
}