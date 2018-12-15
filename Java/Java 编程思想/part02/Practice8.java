class Practice8{
    public static void main(String[] args) {
        Test t1 = new Test();
        t1.test();
        Test t2 = new Test();
        t2.test();
        Test t3 = new Test();
        t3.test();
    }
}
class Test{
    static int i = 0;
    int k = 0;
    public void test(){
        i++;
        k++;
        System.out.println("i="+i+",k="+k);
    }
}