#pragma once

enum Scene {
	TITLE,STAGE,CLEAR
};

class IScene {
public:
	//継承先で実装される関数
	//抽象クラスなので純枠仮想関数とする
	virtual void Init() = 0;
	virtual void Update(char* keys, char* preKeys);
	virtual void Draw() = 0;

	//仮想デストラクタを用意しないと警告される
	IScene();
	virtual ~IScene();

	//シーン番号のゲッター
	int GetScene() { return sceneNo; }

private:
	//シーン番号を管理する変数
	static int sceneNo;
};
