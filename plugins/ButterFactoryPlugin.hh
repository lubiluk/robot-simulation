#ifndef PLUGINS_BUTTERFACTORYPLUGIN_HH
#define PLUGINS_BUTTERFACTORYPLUGIN_HH

#include <gazebo/gazebo.hh>
#include <string>

namespace gazebo {
    class ButterFactoryPlugin : public WorldPlugin {
        public: void Load(physics::WorldPtr parent, sdf::ElementPtr sdf) override;
        private: std::string GetBreakableJointString(std::string linkName1, std::string linkName2, std::string force);
    };
}

#endif // PLUGINS_BUTTERFACTORYPLUGIN_HH
