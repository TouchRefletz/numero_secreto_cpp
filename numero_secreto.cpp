#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <limits>

int chutar() {
    int chute;
    while (true) {
        std::cout << "Digite seu chute: ";
        std::cin >> chute;
        if (std::cin.fail()) {
            std::cout << "Isso não é um número! Tente novamente." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;   
        }
        if (chute < 0) {
            std::cout << "O chute é menor que 0! Tente novamente." << std::endl;
            continue;
        }
        if (chute > 100) {
            std::cout << "O chute é maior que 100! Tente novamente." << std::endl;
            continue;
        }
        break;
    }
    return chute;
}

bool dizer_tentativas(int tentativas, int numero_secreto, int chute) {
    if (tentativas > 10) {
        std::cout << "Você atingiu o limite de tentativas! O número secreto era: " << numero_secreto << std::endl;
        return true;
    } else {
        std::cout << "Você tem " << 10 - tentativas << " tentativas restantes." << std::endl;
        return false;
    }
}

bool verificar_vitoria(int chute, int numero_secreto, int tentativas, bool &acabou) {
    if (chute > numero_secreto) {
        std::cout << "Tentativa: " << tentativas << ". Você chutou o número: " << chute << "." << " Muito alto! Tente novamente." << std::endl;
    } else if (chute < numero_secreto) {
        std::cout << "Tentativa: " << tentativas << ". Você chutou o número: " << chute << "." << " Muito baixo! Tente novamente." << std::endl;
    } else {
        std::cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas!" << std::endl;
        acabou = true;
        return true;
    }
    return dizer_tentativas(tentativas, numero_secreto, chute);
}

void comecar_jogo() {
    std::cout << "Bem-vindo ao jogo do Número Mágico!" << std::endl;
    std::cout << "Eu pensei em um número entre 1 e 100. Tente adivinhar!" << std::endl;
}

bool escolher_jogar_novamente() {
    int escolha;
    while (true) {
        std::cout << "Deseja jogar novamente? Digite 1 para sim e 0 para não." << std::endl;
        std::cin >> escolha;
        if (std::cin.fail()) {
            std::cout << "Isso não é um número! Tente novamente." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (escolha < 0 || escolha > 1) {
            std::cout << "Digite 1 para sim e 0 para não. Tente novamente." << std::endl;
            continue;
        }
        break;
    }
    return escolha == 1;
}

void resetar_jogo(int &tentativas, int &numero_secreto, bool &acabou) {
    tentativas = 0;
    numero_secreto = rand() % 100 + 1;
    acabou = false;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int tentativas = 0;
    int numero_secreto = rand() % 100 + 1;
    bool acabou = false;
    comecar_jogo();
    while (!acabou) {
        int chute = chutar();
        tentativas++;
        if (verificar_vitoria(chute, numero_secreto, tentativas, acabou)) {
            bool jogar_novamente = escolher_jogar_novamente();
            if (jogar_novamente) resetar_jogo(tentativas, numero_secreto, acabou);
            else {
                std::cout << "Obrigado por jogar!" << std::endl;
                break;
            }
        }
    }
    return 0;
}