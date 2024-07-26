#pragma once

enum Scene {
	TITLE,STAGE,CLEAR
};

class IScene {
public:
	//�p����Ŏ��������֐�
	//���ۃN���X�Ȃ̂ŏ��g���z�֐��Ƃ���
	virtual void Init() = 0;
	virtual void Update(char* keys, char* preKeys);
	virtual void Draw() = 0;

	//���z�f�X�g���N�^��p�ӂ��Ȃ��ƌx�������
	IScene();
	virtual ~IScene();

	//�V�[���ԍ��̃Q�b�^�[
	int GetScene() { return sceneNo; }

private:
	//�V�[���ԍ����Ǘ�����ϐ�
	static int sceneNo;
};
