# LCS(Longest Common Subsequence) 알고리즘
- 원소를 하나씩 체크한다.
- 2차원 배열에 지금까지의 최장 길이를 노트한다.

        if(str1[i] == str2[j])
            t[i][j] = t[i - 1][j - 1] + 1;
        else
            t[i][j] = max(t[i - 1][j], t[i][j - 1]);

- `t[i][j]`의 값은,
    - 두 원소가 같다면, `t[i - 1][j - 1]`(좌대각선 위의 값)에서 1을 더한 값이다.
    - 두 원소가 다르다면, `t[i - 1][j]`(왼쪽의 값) 와 `t[i][j - 1]`(위쪽의 값) 중 큰 값이다.

## Reference
https://velog.io/@emplam27/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EA%B7%B8%EB%A6%BC%EC%9C%BC%EB%A1%9C-%EC%95%8C%EC%95%84%EB%B3%B4%EB%8A%94-LCS-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Longest-Common-Substring%EC%99%80-Longest-Common-Subsequence
