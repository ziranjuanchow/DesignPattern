

// 单例模式-Singleton Design Pattern

/*
介绍：
	 
*/


/*
历史背景：
  
*/


/*
思路来源：
	
*/

/*


*/


// __________________________0  __________________________


// __________________________9 代码实现 __________________________
/// .h ===================================================
class EISceneManager
{
public:

    static EISceneManager* sharedSceneManager();            // 单例模式

private:
    EISceneManager();
    static EISceneManager* m_pSceneManager;
      
};


/// .cpp ===================================================
EISceneManager* EISceneManager::m_pSceneManager = NULL;

EISceneManager::EISceneManager()
{

}

EISceneManager* EISceneManager::sharedSceneManager()
{
    if(m_pSceneManager == NULL)
    {
        m_pSceneManager = new EISceneManager();
    }
    return m_pSceneManager;
}