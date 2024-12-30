#include <iostream>
#include <vector>

int main(){
    
    int vctr_vzs = 0;
    int vctr_vzs2 = 0;
    
    std::cout << "Me fale quantos vetores quer ter: " << std::endl;
    std::cin >> vctr_vzs2;
    
    while (vctr_vzs2 <= 0) {
        std::cout << "Fale um maior que 0: " << std::endl;
        std::cin >> vctr_vzs2;
    }
   
    std::vector<int> vctr_prcpl(vctr_vzs2, 0);
    for (int i = 0; i < vctr_vzs2; i++) {
        std::cout << "Fale qual numero quer colocar na casa: " << i << std::endl;
        std::cin >> vctr_prcpl[i];
    }

    std::cout << "valores no vetor e: " << std::endl;
    for (int val : vctr_prcpl) {
        std::cout << val << " " << std::endl;
    }

    std::cout << "Tamanho: " << vctr_prcpl.size() << std::endl;

    int sorn = 0;

    std::cout << "Deseja realizar mais uma operaçao?" << std::endl << "0.sim\n1.nao\n";
    std::cin >> sorn;

    if (sorn == 0) {

        std::cout << "|OPÇOES|" << std::endl << "|>1.Imprimir 2 valores do vetor\n" << "|>2.Somar 2 valores do vetor\n" << "|>3.Subtraçao de 2 valores do vetor" << std::endl;
        std::cin >> sorn;

        if (sorn == 1) {

            int opc_vtr1 = 0;
            int opc_vtr2 = 0; 

            std::cout << "Fale qual posiçao do vetor voce quer: ";
            std::cin >> opc_vtr1 >> opc_vtr2;

            if (opc_vtr1 < 0 || opc_vtr1 > vctr_prcpl.size() || opc_vtr2 < 0 || opc_vtr2 > vctr_prcpl.size()) {
                std::cout << "Numero invalido de vetores !" << std::endl;
            }

            std::cout << vctr_prcpl[opc_vtr1] << " , " << vctr_prcpl[opc_vtr2] << std::endl;

        }else if (sorn == 2) {

            float opc1 = 0;
            float opc2 = 0;
            

            std::cout << "Me fale quais as posiçoes que deseja fazer a soma: " << std::endl;
            std::cin >> opc1 >> opc2;

            if (opc1 < 0 || opc1 > vctr_prcpl.size() || opc2 < 0 || opc2 > vctr_prcpl.size()) {
                std::cout << "Posiçoes invalidas !" << std::endl;
            }
            float resul = vctr_prcpl[opc1] + vctr_prcpl[opc2];

            std::cout << "resultado: " << resul << std::endl;

        }else if (sorn == 3) {
            float opc1 = 0;
            float opc2 = 0;

            std::cout << "Me fale quais posiçoes do vetores voce quer subtrair: " << std::endl;
            std::cin >> opc1 >> opc2;

            if (opc1 < 0 || opc1 > vctr_prcpl.size() || opc2 < 0 || opc2 > vctr_prcpl.size()) {
                std::cout << "Posiçoes invalidas !" << std::endl;
            }
            
            float resul = vctr_prcpl[opc1] + vctr_prcpl[opc2];

            std::cout << "resultado: " << resul << std::endl;
        }
    }else if (sorn == 1) {
        std::cout << "Obrigado por usar" << std::endl;
    }

    std::cout << "Programa finalizado" << std::endl;
    return 0;
}