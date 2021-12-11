class fizzbuzz {
    public static void main(String[] args) {
        String word;
        for (int t = 1; t < 101; ++t) {
            word = "";
            if (t % 3 == 0) 
                word += "Fizz";
            if (t % 5 == 0)
                word += "Buzz";
            if (word == "")
                System.out.println(t);
            else
                System.out.println(word);
        }
    }
}
