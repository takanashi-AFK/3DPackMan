#pragma once
#include <vector>
using std::vector;

#include "Engine/GameObject.h"
#include "Engine/Image.h"
#include"StageMap.h"
#include "Player.h"

enum {
	Mini_FLOOR,
	Mini_WALL,
	Mini_PLAYER,
	Mini_MAX,
};

class MiniMap : public GameObject
{
	CsvReader MiniMapCSV; //���̃N���X��CSV���󂯎�邽�߂̕ϐ�
	int hPict_[Mini_MAX]; // Map�摜�f�� 0=floor,1=wall,2=player
	int obj_;//�ق��̉摜�f�ނ�\������֐��ɂ����ϐ�
	int type_;//Map�摜�̎��

	XMFLOAT3 Ppos;//Player�̈ʒu

	float Width_Max, Height_Max;//CSV�f�[�^�̍s��̗v�f��
	float Width_, Height_; //for���[�v�p�̃C�e���[�^(?)

	Transform MapTrans;//Map�̈ʒu�Ȃǂ𑀍삷��Transform�^

	Transform PlaTrans;//Player�̈ʒu�Ȃǂ𑀍삷��Transform�^

	vector<vector<int>> ptable_;//�X�e�[�W�����i�[����񎟌��z��

	float DrawX_, DrawY_;
	float Size_;
	int Opasity_;

public:
	//�R���X�g���N�^
	//�����Fparent  �e�I�u�W�F�N�g�iSceneManager�j
	MiniMap(GameObject* parent);

	//������
	void Initialize() override;

	//�X�V
	void Update() override;

	//�`��
	void Draw() override;

	//�J��
	void Release() override;

	//�z�u����object��ύX����֐�
	void ObjectSet(int _obj) { obj_ = _obj; }

	//��ʏ�ł̕\���ꏊ�����߂�֐�
	void DrawPosition(int _posX,int _posY);

	//��ʏ�ł̕\���T�C�Y�����߂�֐�
	void DrawSize(float _size);

	//�s�����x��ύX����֐�
	void ChengeOpacity(int _Opa);
};
