#pragma once
#include <memory>//std::unique_ptrを使うために必須
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"
#include <Novice.h>

class GameManager
{
public:

	GameManager();//コンストラクタ

	~GameManager();//デストラクタ

	int Run(char* keys, char* preKeys);//この関数でゲームループを呼び出す

private:

	//シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_;//現在のシーン
	int prevSceneNo_;//前のシーン


};

