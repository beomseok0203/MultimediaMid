Out of focus camera application

1.NDK & OPENCV��ġ
 -SDK tools���� CMake,LLDB,NDK��ġ, �ȵ���̵� OPENCV ���̺귯�� �ٿ�ε�(https://github.com/opencv/opencv/releases )
2.File>Project Structure���� Modules>>app>>dependency���� opencv���̺귯�� �߰�
3. (�߿�) External Build FIles����  CmakeLists.txt 9,10��° �� ��ġ�� opencv��� �� ������Ʈ ��� ���� (�����ؾ���)
set(pathOPENCV D:/Android/OpenCV-android-sdk)    <<opencv��ġ ���
set(pathPROJECT D:/class/2017multimedia/FaceDetect)   <<������Ʈ ���
4.run

*������Ʈ ���� FaceDetect�� �� ���ø����̼ǰ� �������(ó�� �ǵ��� facedetection�� �����ϴٰ� ������ �ٲ���ϴ�.)