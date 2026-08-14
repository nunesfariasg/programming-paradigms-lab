public class NumberList {

    private int[] numbers;

    public NumberList(int[] numbers) {
        this.numbers = numbers;
    }

    public int sum() {
        int sum = 0;

        for(int number : numbers){
            sum += number;
        }

        return sum;
    }

}