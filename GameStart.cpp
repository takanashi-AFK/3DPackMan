#include "GameStart.h"
//コンストラクタ
GameStart::GameStart(GameObject* parent)
	: GameObject(parent, "GameStart"), hPict_(-1), transition_(nullptr), camChange_(0), isFadeNow(false)
{
}

//初期化
void GameStart::Initialize()
{
	hPict_ = Image::Load("P_GameStart.png");
	assert(hPict_ >= 0);

	//Transition setting
	transition_ = Instantiate<Transition>(this);


}

//更新
void GameStart::Update()
{
	//フェードアウトしているかを判断
	if (isFadeNow) {
		transition_->Start(FADE_OUT);

		if (transition_->isOpacity(255)) {
			SceneManager* pSm = (SceneManager*)FindObject("SceneManager");
			pSm->ChangeScene(SCENE_ID_PLAY);
		}
	}
	else {
		if (Input::IsKeyDown(DIK_SPACE)) {
			isFadeNow = true;
		}
	}

	
		
	
}

//描画
void GameStart::Draw()
{
	//transform_.scale_ = { 0.67f,0.67f ,0.67f };
	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
	Image::SetAlpha(hPict_, 255);
}

//開放
void GameStart::Release()
{
}