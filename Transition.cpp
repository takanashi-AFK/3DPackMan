#include "Transition.h"

//�R���X�g���N�^
Transition::Transition(GameObject* parent)
	: GameObject(parent, "Transition"),hPict_(0),Opacity_(0),Move_(0),Active_(false)
{
}

//������
void Transition::Initialize()
{
	//�摜�̃��[�h
	hPict_ = Image::Load("P_Transition.png");
	assert(hPict_ >= 0);

	//���@Opacity(�s�����x)�͂O����Q�T�T�̐��l�ŊǗ�����Ă���B
	Opacity_ = 255;
}

//�X�V
void Transition::Update()
{
	/*switch (Move_)
	{
	case FADE_IN:	FadeIN();	 break;
	case FADE_OUT:	FadeOUT();	 break;
	}*/
}

//�`��
void Transition::Draw()
{
	Image::SetTransform(hPict_,transform_);
	Image::Draw(hPict_);
	Image::SetAlpha(hPict_,Opacity_);
}

//�J��
void Transition::Release()
{
}

//�t�F�[�h�C������֐�
void Transition::FadeIN()
{
}

//�t�F�[�h�A�E�g����֐�
void Transition::FadeOUT()
{
}

//��ʑJ�ڂ��J�n����֐�
void Transition::TransStart(int _move)
{
}