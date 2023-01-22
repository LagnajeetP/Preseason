
import java.util.ArrayList;

public class PetNursery {
    String name;
    int age;
    String breed;
    String color;

    public static void main(String[] args) {

        ArrayList<Animal> petnursery = new ArrayList<Animal>();
        petnursery.add(new Puppy(5, "doggo", "husky"));
        petnursery.add(new Puppy(3, "joe", "golden retreiver"));
        petnursery.add(new Kitten(3, "whiskers", "black"));
        petnursery.add(new Kitten(5, "fluff", "white"));
        System.out.println(petnursery);

    }

  
}
