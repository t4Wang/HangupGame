
/*
 * 场景类：记录当前场景信息
 */
class Scene {
public:
	// 场景初始化
	void init();
	// 生成事件 使用当前地形信息，生成对应的事件
	void generateEvent();
private:
	// 打印场景信息
	void printBrief();
	
	string scene_id;
	int level;
	string brief;
	string name;
	// set<Monster> monsters;
	// set<NPC> npcs;
}