import java.math.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {

        try {
            Scanner in = new Scanner(System.in);

            while (in.hasNext()) {
                BigInteger a = new BigInteger(in.next());
                String op = in.next();
                BigInteger b = new BigInteger(in.next());
                BigInteger res = new BigInteger("0");

                if (op.equals("/")) res = a.divide(b);
                if (op.equals("%")) res = a.mod(b);
                System.out.println(res);
            }
        }
        catch (Exception e) {
            System.exit(0);
        }


    }
}