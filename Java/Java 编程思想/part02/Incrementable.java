class Incrementable{
    static void increment()
    {
        StaticTest.i++;
    }

    public static void main(String[] args) {
        System.out.println(StaticTest.i);
        Incrementable.increment();
        System.out.println(StaticTest.i);
    }
}
class StaticTest{
    static int i = 0;
}