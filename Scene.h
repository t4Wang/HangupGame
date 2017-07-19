
/*
 * 场景类：记录当前场景信息
 */
class Scene {
public:
	// 打印场景信息
	void printBrief();
	// 生成事件 使用当前地形信息，生成对应的事件
	void generateEvent();
private:
	int level;
	string brief;
	string name;
	string scene_id;
	set<Monster> monsters;
	// set<NPC> npcs;
}