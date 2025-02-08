import java.io.*;
import java.util.*;

public class Main {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());
    int N = Integer.parseInt(st.nextToken());
    int L = Integer.parseInt(st.nextToken());
    
    st = new StringTokenizer(br.readLine());
    Queue<Integer> pq = new PriorityQueue<Integer>();
    while(N-- > 0) {
        pq.add(Integer.parseInt(st.nextToken())); 
    }
    while(!pq.isEmpty()) {
        int top = pq.poll();
        if(top <= L) {
            L++;
        } else {
            break;
        }
    }
    System.out.println(L);
  }
}