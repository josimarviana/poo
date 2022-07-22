import java.util.Scanner;

public class CalculadoraImpostos {

  public static void main(String[] args) {
    Scanner entrada = new Scanner(System.in);
    char tipoNotaFiscal = 'P';
    double totalFaturado = 1200.30;

    System.out.print("Digite o tipo da Nota Fiscal (S) para serviços ou (P) para produtos: ");
    tipoNotaFiscal = entrada.next().charAt(0);
    /*
    double valorImpostos;

    if (tipoNotaFiscal == 'S') {
      valorImpostos = totalFaturado * 0.16;
    } else {
      valorImpostos = totalFaturado * 0.35;
    }
    */

    // double valorImpostos = tipoNotaFiscal == 'S' ? totalFaturado * 0.16 : totalFaturado * 0.35;

    double taxaImpostos = tipoNotaFiscal == 'S' ? 0.16 : 0.35;
    double valorImpostos = totalFaturado * taxaImpostos;

    System.out.printf("Total faturado: R$%.2f%n", totalFaturado);
    System.out.printf("Valor dos impostos: R$%.2f%n", valorImpostos);
  }

}
