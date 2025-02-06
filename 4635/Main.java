import java.io.*;
import java.util.*;

public class Main {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;
    StringBuilder sb = new StringBuilder();
    
    while(true) {
        int n = Integer.parseInt(br.readLine());
        if(n == -1) {
            break;
        }
        int totalMiles = 0;
        int time = 0;
        int timeNow = 0;
        int milesNow = 0;
        for(int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            milesNow = Integer.parseInt(st.nextToken());
            timeNow = Integer.parseInt(st.nextToken());
            totalMiles += milesNow * (timeNow - time);
            time = timeNow;
        }
        sb.append(totalMiles + " miles\n");
    }
    System.out.print(sb);
  }
}
