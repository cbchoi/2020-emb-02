# 문제 1번 디렉토리 구조체 활용하기
다음 코드는 search_files 함수에서 주어진 경로(path) 내에 존재하는 모든 파일(Sub folder가지 포함)에 character가 몇 번 나타나는 지 그 수를 세는 프로그램이다. 프로그램이 정상적으로 동작하도록 구현하시오. 

## 참고사항
 - 코드는 자유롭게 추가/삭제할 수 있음
 - Compile Error: 0점
 - Compile은 성공하였으나 Runtime Error 발생: 5점
 - Compile은 성공하였고 Runtime Error가 발생하지 않으나 원하는 결과를 도출하지 않는 경우: 15점
 - Compile 성공, 원하는 결과 도출: 25점

```C
int count_text(char* path)
{
	/* 




	Put your code here 




	Hint 1) apply count_text recursively
	Hint 2) exclude directory ".", "..".
	        Use this code. 
	        if (strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, ".."))
			{
					
			}

	*/
	
	printf("%s: Total %d characters are found.\n", path, count);
	return count;
}

int main()
{
	count_text("./data");
	return 0;
}
```