import java.util.*;
import java.io.*;

public class Main
{
    public HashMap<String,Integer> wordsFreq;
    public List<String> words;
    
    public Main() {
        wordsFreq = new HashMap<>();
        words = new ArrayList<>();
    }
    
    public void solution() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        
        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        while(N-- > 0) {
            String word = br.readLine();
            if(word.length() < M)
                continue;
            if(wordsFreq.containsKey(word))
                wordsFreq.put(word, wordsFreq.get(word) + 1);
            else {
                wordsFreq.put(word, 1);
                words.add(word);
            }
        }
        Collections.sort(words, new Comparator<String>() {
            @Override
            public int compare(String s1, String s2) {
                if(!wordsFreq.get(s1).equals(wordsFreq.get(s2)))
                    return wordsFreq.get(s2) - wordsFreq.get(s1);
                else if(s1.length() != s2.length())
                    return s2.length() - s1.length();
                else
                    return s1.compareTo(s2);
            }
        });
        for(String word: words)
            bw.write(word+"\n");
        bw.flush();
        bw.close();
        br.close();
    }
    
	public static void main(String[] args) throws IOException{
		new Main().solution();
	}
}
