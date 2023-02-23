#pragma once
#include "Engine/GameObject.h"
#include "Stage.h"

class Player : 
	public GameObject
{
private:
	int hModel_;	//モデル番号
	int CamType_;	//カメラ番号

	Transform	PlayerTrans_;	//playerのtransformを格納する

	XMFLOAT3	CamPosition_;	//カメラの位置を格納する
	XMFLOAT3	CamTarget_;		//カメラの焦点を格納する

	XMVECTOR	vPosition_;		//playerのpositionをvector型として格納する
	XMVECTOR	vMoveZ_;		//空方向（Ｚ軸）
	XMVECTOR	vMoveX_;		//空方向（Ｘ軸）
public:
	//コンストラクタ
	//引数：parent  親オブジェクト（SceneManager）
	Player(GameObject* parent);

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};
