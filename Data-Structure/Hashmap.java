import java.util.*;
import java.util.Hashmap;

public static Main {
    public static void (String[] args){
        Scanner sc = new Scanner(System.in);
        Map<Integer, String[]> Patient = new Hashmap<>();

        System.out.print("Enter number of patient: ");
        int np = sc.nextInt();
        sc.nextLine();

        for(int i = 1; i <= np; i++){
            System.out.print("Enter name of Patient " + i + ": ");
            String name = sc.nextLine();
            System.out.print("Enter birthyear of Patient " + i + ": ");
            int by = sc.nextInt();
            sc.nextLine();

            int age = 2023 - by;

            String[] patient = {name, Integer.toString(age)};
            Patient.put(i, patient);
        }

        for(int i = 1; i <= np; i++){
            System.out.print("Patient " + i + ": " + Arrays.toString(Patient.get(i)))
        }
    }
}