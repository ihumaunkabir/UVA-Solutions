import java.math.BigInteger;
import java.util.Scanner;
 
/**
 *
 * @author Shahab
 */
public class Main {
 
      public static void main(String[] args) {
            // TODO code application logic here
            BigInteger fibo [] = new BigInteger [1000 + 5];
            fibo [0] = BigInteger.ONE;
            fibo [1] = BigInteger.valueOf(2);
 
            for ( int i = 2; i < 1002; i++ ) {
                  fibo [i] = fibo [i - 1].add(fibo [i - 2]);
            }
 
            Scanner input = new Scanner (System.in);
 
            while ( input.hasNextInt() ) {
                  int number = input.nextInt();
                  System.out.println (fibo [number]);
            }
      }
}
