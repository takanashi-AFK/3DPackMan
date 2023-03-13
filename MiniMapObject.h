
#include <vector>
using std::vector;

#include "Engine/GameObject.h"
#include "Engine/CsvReader.h"

enum {
	Mini_FLOOR,
	Mini_WALL,
	Mini_Player,
	Mini_MAX,
};

class MiniMapObject : public GameObject
{
	int hModel_[Mini_MAX];
	int obj_;

	vector<vector<int>> table_;//�X�e�[�W�����i�[����񎟌��z��
public:
	//�R���X�g���N�^
	//�����Fparent  �e�I�u�W�F�N�g�iSceneManager�j
	MiniMapObject(GameObject* parent);

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
};
