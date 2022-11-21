import java.util.InputMismatchException;
import java.util.Scanner;
public class Main{

    public static void main(String[] args) {
        char[][] grid;
        Grid g1 = new Grid();
        grid = g1.createGrid();
        g1.viewGrid(grid);
        int[] test = promptMove();
        //make access modifiers
    }

    //method to check neighboring cells


    static int[] promptMove(){
        int[] rowCol = new int[2];
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the Row you would like to choose:");
        try {
            rowCol[0] = s.nextInt();
        }
        catch (InputMismatchException e){
            System.out.println("Wrong Input! Make sure you only input whole numbers.");
            return promptMove();
        }
        System.out.println("Enter the Column you would like to choose:");
        try {
            rowCol[1] = s.nextInt();
        }
        catch (InputMismatchException e){
            System.out.println("Wrong Input! Make sure you only input whole numbers.");
            return promptMove();
        }
            Grid gTest = new Grid();
            if (!gTest.checkValidity(rowCol)){
                System.out.println("Incorrect Input! Please Enter a Correct Input!");
                return promptMove();
            }
            else return rowCol;
    }

}
