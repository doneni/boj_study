import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();    
                
        int totalQuiz = 8;
        int highQuiz = 5;
        int points = 0;
        int[][] totalQuizzes = new int[totalQuiz][2];
        int[] highQuizzes = new int[highQuiz];
        
        for(int i = 0; i < totalQuiz; i++) {
            totalQuizzes[i][0] = Integer.parseInt(br.readLine());
            totalQuizzes[i][1] = i+1;
        }
        
        Arrays.sort(totalQuizzes, (int[] a, int[] b) -> {
            return b[0] - a[0];
        });
        
        for(int i = 0; i < highQuiz; i++) {
            points += totalQuizzes[i][0];
            highQuizzes[i] = totalQuizzes[i][1];
        }
        
        Arrays.sort(highQuizzes);
        System.out.println(points);
        for(int idx : highQuizzes) {
            sb.append(idx + " ");
        }
        System.out.println(sb);
    }
}
