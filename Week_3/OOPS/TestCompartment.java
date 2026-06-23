
import java.util.Random;

abstract class Compartment {

    public abstract String notice();
}

class FirstClass extends Compartment {

    @Override
    public String notice() {
        return "First Class Compartment";
    }
}

class Ladies extends Compartment {

    @Override
    public String notice() {
        return "Ladies Compartment";
    }
}

class General extends Compartment {

    @Override
    public String notice() {
        return "General Compartment";
    }
}

class Luggage extends Compartment {

    @Override
    public String notice() {
        return "Luggage Compartment";
    }
}

public class TestCompartment {

    public static void main(String[] args) {

        Compartment[] compartments = new Compartment[10];
        Random random = new Random();

        for (int i = 0; i < compartments.length; i++) {
            int choice = random.nextInt(4) + 1;

            switch (choice) {
                case 1 ->
                    compartments[i] = new FirstClass();
                case 2 ->
                    compartments[i] = new Ladies();
                case 3 ->
                    compartments[i] = new General();
                case 4 ->
                    compartments[i] = new Luggage();
            }
        }

        System.out.println("Notices of Compartments:");

        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}
