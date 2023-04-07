#pragma once
#include "Engine/GameObject.h"
#include "Engine/Input.h"
#include "Engine/Model.h"

#include "StageMap.h"
#include "StageObject.h"
#include "Player.h"

const int FPS = 60;

//テストシーンを管理するクラス
class Enemy : public GameObject
{
private:
	int hModel_;
	Transform EnemyTrans_; //直前の位置情報を格納する変数
	//Transform EnemyDestination;	//敵徘徊時の目的地
	XMFLOAT3 F_TargetPosition_;
	XMFLOAT3 W_TargetPosition_;
	StageMap* pStageMap_;


	bool flag_Find;
	int CoolTime_;
	
	//仮置き
	float FixedTime;

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

	//Enemyの動作：追従
	void FollowingMove();

	//Enemyの動作：徘徊
	void WanderingMove();

	//壁とのあたり判定処理
	void boundaryCheck();

	bool isCollidingWithWall();

	//n秒事にtureを返す関数
	bool Every_nMinitues(int n) {
		return( ((int)FixedTime / FPS) % n  == 0);
	}

};

