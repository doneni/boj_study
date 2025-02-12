import java.io.*;
import java.util.*;

public class Main {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;
    int max = 201;
    
    int T = Integer.parseInt(br.readLine());
    while(T-- > 0) {
        int N = Integer.parseInt(br.readLine());
        int[] ranks = new int[N];
        int[] countMembers = new int[max];
        
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) {
            int team = Integer.parseInt(st.nextToken());
            countMembers[team]++;
            ranks[i] = team;
        }
        
        int[] members = new int[max]; // 현재 추가된 멤버 수
        int[] scores = new int[max]; // 현재 팀 점수
        int[] fifthScores = new int[max]; // 팀 5등의 점수
        
        int minScore = Integer.MAX_VALUE;
        int minTeam = -1;
        
        for(int i = 0, rank = 0; i < N; i++) {
            int team = ranks[i]; // 현재 플레이어의 소속 팀
            if(countMembers[team] < 6) {    // 소속된 멤버가 6인 미만
                continue;
            }
            rank++;
            members[team]++;    // 점수 합산 멤버에 포함
            if(members[team] <= 4) {    // 팀 점수에 멤버 등수를 합함
                scores[team] += rank;
            } else if(members[team] == 5) {
                fifthScores[team] = rank;
                if(scores[team] < minScore || (scores[team] == minScore && fifthScores[team] < fifthScores[minTeam])) {
                    minScore = scores[team];
                    minTeam = team;
                }
            }
        }
        System.out.println(minTeam);
    }
  }
}
