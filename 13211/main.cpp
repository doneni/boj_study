lude <iostream>
#include <set>
using namespace std;

int main()
{
	    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	        int N; cin >> N;
		    set<string> s;
		        string str; 
			    while(N--)
				        {
						        cin >> str;
							        s.insert(str);
								    }
			        int M; cin >> M;
				    int ans = 0;
				        while(M--)
						    {
							            cin >> str;
								            if(s.find(str) != s.end())
										                ans++;
									        }
					    cout << ans << '\n';
					        return 0;
}
