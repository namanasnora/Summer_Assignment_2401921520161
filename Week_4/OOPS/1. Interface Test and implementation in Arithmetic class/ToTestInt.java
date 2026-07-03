
interface Test {

    int square(int n);
}

class Arithmetic implements Test {

    @Override
    public int square(int n) {
        return n * n;
    }
}

public class ToTestInt {

    public static void main(String[] args) {
        Arithmetic a = new Arithmetic();

        int num = 10;
        System.out.println("Square of " + num + " = " + a.square(num));
    }
}
