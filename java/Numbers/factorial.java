/**
 * calculate the factorial of a positive integer
 *
 */
class factorial
{
    public static long factorial(int number)
    {
        if (number == 0)
            return 1;
        else if (number == 1)
            return 1;
        else
            return factorial(number - 1) * number;
    }

    public static void main(String[] args)
    {
        if (args.length != 1)
        {
            System.out.println("Usage: java factorial int");
            System.exit(1);
        }

        int number = Integer.valueOf(args[0]);
        System.out.println(factorial(number));
    }
}
