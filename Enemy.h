#pragma once
#include "Engine/GameObject.h"
#include "Stage.h"

//テストシーンを管理するクラス
class Enemy : public GameObject
{
private:
	int hModel_;
	float Speed_;	//Enemyの速度を管理
	Stage* pStage_;         //ステージクラスの情報を入れる変数
	XMFLOAT3 prevPosition_; //直前の位置情報を格納する変数


public:
	//コンストラクタ
	//引数：parent  親オブジェクト（SceneManager）
	Enemy(GameObject* parent);

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};

