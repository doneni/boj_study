import java.io.*;
import java.util.*;

public class Main {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    HashMap<Long,Integer> m = new HashMap<>();
    while(n-- > 0) {
        long x = Long.parseLong(br.readLine());
        if(m.containsKey(x)) {
            m.replace(x, m.get(x) + 1);
        } else {
            m.put(x, 1);
        }
    }

    long maxKey = -1;
    int maxValue = -1;
    
    for(Map.Entry<Long,Integer> entry : m.entrySet()) {
        if(entry.getValue() > maxValue || (entry.getValue() == maxValue && entry.getKey() < maxKey)) {
            maxKey = entry.getKey();
            maxValue = entry.getValue();
        } 
        
    }
    System.out.println(maxKey);
  }
}