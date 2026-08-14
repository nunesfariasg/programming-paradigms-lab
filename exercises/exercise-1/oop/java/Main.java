public class Main {
    public void main() {
        int[] numbers = {10, 20, 30, 40, 50};

        NumberList numberList = new NumberList(numbers);

        int sum = numberList.sum();

        System.out.printf("Sum = %d\n",sum);
    }
}