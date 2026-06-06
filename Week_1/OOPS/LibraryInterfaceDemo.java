
interface LibraryUser {

    void registerAccount();

    void requestBook();
}

class KidUsers implements LibraryUser {

    int age;
    String bookType;

    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }

}

class AdultUsers implements LibraryUser {

    int age;
    String bookType;

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under a Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as a Adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only Adult Fiction books");
        }
    }

}

public class LibraryInterfaceDemo {

    public static void main(String[] args) {
        //Test Case #1
        KidUsers kidUser = new KidUsers();

        kidUser.age = 10;
        kidUser.registerAccount();

        kidUser.age = 18;
        kidUser.registerAccount();

        kidUser.bookType = "Kids";
        kidUser.requestBook();

        kidUser.bookType = "Fiction";
        kidUser.requestBook();

        System.out.println();

        // Test Case #2 
        AdultUsers adultUser = new AdultUsers();

        adultUser.age = 5;
        adultUser.registerAccount();

        adultUser.age = 23;
        adultUser.registerAccount();

        adultUser.bookType = "Kids";
        adultUser.requestBook();

        adultUser.bookType = "Fiction";
        adultUser.requestBook();
    }
}
