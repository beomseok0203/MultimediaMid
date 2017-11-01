Out of focus camera application

1.NDK & OPENCV설치
 -SDK tools에서 CMake,LLDB,NDK설치, 안드로이드 OPENCV 라이브러리 다운로드(https://github.com/opencv/opencv/releases )
2.File>Project Structure에서 Modules>>app>>dependency에서 opencv라이브러리 추가
3. (중요) External Build FIles에서  CmakeLists.txt 9,10번째 줄 설치된 opencv경로 및 프로젝트 경로 설정 (수정해야함)
set(pathOPENCV D:/Android/OpenCV-android-sdk)    <<opencv설치 경로
set(pathPROJECT D:/class/2017multimedia/FaceDetect)   <<프로젝트 경로
4.run

*프로젝트 명인 FaceDetect는 본 어플리케이션과 상관없음(처음 의도가 facedetection을 진행하다가 주제를 바꿨습니다.)