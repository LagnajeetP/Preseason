public class Puppy extends Animal {

    String puppyBreed;

    public Puppy (int age, String name, String breed){
        super (name, age);
        
        this.puppyBreed=breed; 
        
        System.out.println("Puppy breed is :"+puppyBreed);
    }

    public String toString(){
        
        return "Puppy name is" + " " + AnimalName + " " + "It's age is" + " "+ AnimalAge + " " + "It's breed is" + " " + puppyBreed;
       

    } 

    public static void main(String[] args) {

        Puppy Puppy1 = new Puppy(5, "doggo", "husky");
        Puppy Puppy2 = new Puppy(3, "joe", "golden retriever");
    }

}
