import java.lang.Math;
import java.util.Arrays;
public class Grid {
    //16x16 Grid, with a randomly placed 40 mines

char[][] createGrid(){
    char[][] grid = new char[16][16];

    //fill array with good cells
    for (int i = 0; i < 16; i++) {
        Arrays.fill(grid[i],'-');
    }
    return grid;
}

//generate and add mines to the grid
char[][] addMines(char[][] grid) {
    int[] mines = new int[40];
    mines = generateMines(mines);
    for (int mine: mines) {
        grid[Math.floorDiv(mine,16)][mine%16] = 'X';
    }
    return grid;
}

void viewGrid(char[][] grid){
    //first row
    System.out.print("-- ");
    for (int i = 0; i < 16; i++) {
    System.out.printf("%02d", i);
    System.out.print(" ");
    }

    //2nd row forward
    for (int i = 0; i < 16; i++) {
        System.out.println(" ");
        System.out.printf("%02d ", i);
        for (int j = 0; j < 16; j++) {
            if (grid[i][j] == '-'){
                System.out.print("--");
            }
            System.out.print(" ");
        }
    }
}

int[] generateMines(int[] mineArray){
    int tempMine;
    boolean isAlreadyUsed = false;
    for (int i = 0; i < 40; i++) {
        tempMine = (int) (Math.random() * 16 * 16);
        for (int j = 0; j < 40; j++) {
            if(mineArray[j] == tempMine){
                isAlreadyUsed = true;
                i--;
                break;
            }
        }
        if (!isAlreadyUsed){
            mineArray[i] = tempMine;
        }
        isAlreadyUsed = false;
    }
    return mineArray;
}

boolean isMine(char[][] grid, int row, int column){
    return grid[row][column] == 'X';
}

boolean checkValidity(int[] input){
    if(input[0] <= 16 && input[1] <= 16){
        if (true){
            // not already played
            return true;
        }
        else return false;
    }
    else return false;
}

}
