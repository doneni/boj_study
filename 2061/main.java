import java.io.*;
import java.util.StringTokenizer;
import java.math.BigInteger;

public class Main
{
	public static void main(String[] args) throws IOException {
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    String s = br.readLine();
	    StringTokenizer st = new StringTokenizer(s);
	    BigInteger K = new BigInteger(st.nextToken());
	    BigInteger L = new BigInteger(st.nextToken());
	    
	    int N = 0;
	    
	    for(int i = 2; i < L.intValue(); i++) {
	        if((K.remainder(BigInteger.valueOf(i))).compareTo(BigInteger.ZERO) == 0) {
	            N = i;
	            break;
	        }
	    }
	    
	    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	    bw.write(N == 0 ? "GOOD" : "BAD " + N);
	    bw.flush();
	    bw.close();
	}
}

