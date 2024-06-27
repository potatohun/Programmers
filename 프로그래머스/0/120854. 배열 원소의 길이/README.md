# [level 0] 배열 원소의 길이 - 120854 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120854) 

### 성능 요약

메모리: 4.13 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 06월 27일 13:47:36

### 문제 설명

<p style="user-select: auto !important;">문자열 배열 <code style="user-select: auto !important;">strlist</code>가 매개변수로 주어집니다. <code style="user-select: auto !important;">strlist</code> 각 원소의 길이를 담은 배열을 retrun하도록 solution 함수를 완성해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">제한사항</h5>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">1 ≤ <code style="user-select: auto !important;">strlist</code> 원소의 길이 ≤ 100</li>
<li style="user-select: auto !important;"><code style="user-select: auto !important;">strlist</code>는 알파벳 소문자, 대문자, 특수문자로 구성되어 있습니다.</li>
</ul>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예</h5>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">strlist</th>
<th style="user-select: auto !important;">result</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">["We", "are", "the", "world!"]</td>
<td style="user-select: auto !important;">[2, 3, 3, 6]</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">["I", "Love", "Programmers."]</td>
<td style="user-select: auto !important;">[1, 4, 12]</td>
</tr>
</tbody>
      </table>
<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">입출력 예 설명</h5>

<p style="user-select: auto !important;">입출력 예 #1</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">["We", "are", "the", "world!"]의 각 원소의 길이인 [2, 3, 3, 6]을 return합니다.</li>
</ul>

<p style="user-select: auto !important;">입출력 예 #2</p>

<ul style="user-select: auto !important;">
<li style="user-select: auto !important;">["I", "Love", "Programmers."]의 각 원소의 길이인 [1, 4, 12]을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges