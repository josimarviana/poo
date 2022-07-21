import java.util.Scanner;

public class HorarioFuncionamento {

  public static void main(String[] args) {
    Scanner entrada = new Scanner(System.in);

    System.out.print("Digite um dia da semana (ex: 1 para dom, 2 para seg, 3, para ter, etc): ");
    int diaSemana = entrada.nextInt();
    String horarioFuncionamento;

    switch (diaSemana) {
      case 1:
        horarioFuncionamento = "Fechado";
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        horarioFuncionamento = "08:00 às 18:00";
        break;
      case 7: 
        horarioFuncionamento = "08:00 às 12:00";
        break;
      default:
        horarioFuncionamento = "Dia inválido";
    }

    System.out.printf("Horário de funcionamento: %s%n", horarioFuncionamento);
  }

}
