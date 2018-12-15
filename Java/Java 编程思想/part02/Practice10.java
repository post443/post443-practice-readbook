class Practice10{
    public static void main(String[] args) {
        Practice10.check(args[0]);
        Practice10.check(args[1]);
        Practice10.check(args[2]);
    }

    private static  void check(String arg)
    {
        switch(arg){
            case "k":
            System.out.println("type k");
            break;
            case "j":
            System.out.println("type j");
            break;
            case "h":
            System.out.println("type h");
            break;
            default:
            System.out.println(arg);

        }
    }
}