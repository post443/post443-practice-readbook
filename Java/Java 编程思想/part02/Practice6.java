class Practice6{
    public static void main(String[] args) {
        Practice6 p = new Practice6();
        System.out.print(p.storage("Hello world !"));
    }

    int storage(String s){
        return s.length() * 2;
    }
}