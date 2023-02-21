#pragma once
#include "Engine/GameObject.h"


enum {
	OBJ_FLOOR,
	OBJ_WALL,
	OBJ_MAX,
};

class StageObject : public GameObject
{
	int hModel_[OBJ_MAX];	
	int obj_;				
public:
	//�R���X�g���N�^
	//�����Fparent  �e�I�u�W�F�N�g�iSceneManager�j
	StageObject(GameObject* parent);

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

	//�C�ӂ̃Q�[���I�u�W�F�N�g�Ɂu�����[�g����łԂ��邩�v�����߂�֐�
	int GetModelHandle(int _obj);
};