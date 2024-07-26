#pragma once
#include <memory>//std::unique_ptr���g�����߂ɕK�{
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include <Novice.h>

class GameManager
{
public:

	GameManager();//�R���X�g���N�^

	~GameManager();//�f�X�g���N�^

	int Run(char* keys, char* preKeys);//���̊֐��ŃQ�[�����[�v���Ăяo��

private:

	//�V�[����ێ����郁���o�ϐ�
	std::unique_ptr<IScene> sceneArr_[3];

	//�ǂ̃X�e�[�W���Ăяo�������Ǘ�����ϐ�
	int currentSceneNo_;//���݂̃V�[��
	int prevSceneNo_;//�O�̃V�[��


};

