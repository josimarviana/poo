import java.util.Scanner;

public class Ola {
    public static void main (String [] args){
        Scanner in = new Scanner(System.in);
        System.out.print("Digite seu nome: ");
        String mensagem = in.nextLine();
        
        System.out.println("Seu nome eh: "+mensagem); 
    }
}