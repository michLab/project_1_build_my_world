/*
* author:	Michal Labowski
* version:	1.0
* brief:	a plugin for Gazebo for displaying a welcome message
*/
#include <gazebo/gazebo.hh>

namespace gazebo
{
 	class WorldPluginMyRobot : public WorldPlugin
 	{
		public: WorldPluginMyRobot() : WorldPlugin()
		{
			printf("Welcome in Michal's World!\n");
		}

		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
        	// empty member function definition
		}
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}