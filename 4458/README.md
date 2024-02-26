# `cin.ignore()`
cin과 getline을 같이 사용할 때 필요하다

cin은 '\n'을 처리하지 않고 입력버퍼에 그대로 둔다.

이어서 getline을 사용하면 '\n'을 getline이 처리해서 예기치 못한 동작이 발생한다.

<quote> 따라서 cin 이후 입력 버퍼를 비우기 위해 ignore가 필요하다!