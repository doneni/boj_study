import java.io.*;
import java.util.StringTokenizer;
import java.util.ArrayList;

public class Main
{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
	    int totalCnt = 9;
	    int dwarfCnt = 7;
	    int totalHeightSum = 0;
	    int dwarfHeightSum = 100;
	    
	    ArrayList<Integer> heights = new ArrayList<>();
	    for(int i = 0; i < totalCnt; i++) {
	        heights.add(Integer.parseInt(br.readLine()));
	        totalHeightSum += heights.get(i);
	    }
	    
	    boolean found = false;
	    for(int i = 0; i < totalCnt-1; i++) {
	        for(int j = i+1; j < totalCnt; j++) {
	            if(totalHeightSum - (heights.get(i) + heights.get(j)) == dwarfHeightSum) {
	                found = true;
                    heights.remove(j);
                    heights.remove(i);
	                break;
	            }
	        }
	        if(found) {
                break;
	        }
	    }
	    
	    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	    for(int height : heights) {
	        bw.write(height + "\n");
	    }
	    bw.flush();
	    bw.close();
	    br.close();
	}
}

