public class Kitten extends Animal {
    String kittenColor;

    public Kitten(int age, String name, String color) {
        super(name, age);

        this.kittenColor = color;

        System.out.println("Kitten Age is :" + kittenColor);
    }

    public String toString(){
        
        return "Kitten name is" + " " + AnimalName + " " + "It's age is" + " "+ AnimalAge + " " + "It's color is" + " " + kittenColor;
    } 
    public static void main(String[] args) {

        Kitten cat1 = new Kitten(3, "whiskers", "black");
        Kitten cat2 = new Kitten(5, "fluff", "white");
    }

}
