import java.io.File;
import java.util.Scanner;

public class SysCalls {

    public static void main(String[] args) throws java.io.FileNotFoundException {
        Scanner scanner = new Scanner(new File("test.txt"));

        while (scanner.hasNext()) {
            System.out.println(scanner.next());
        }

        scanner.close();
    }
}
