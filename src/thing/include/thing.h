#include <string>

class Thing {
   private:
    std::string thing_name_;

   public:
    Thing(const std::string thing_name) : thing_name_(thing_name){};
    Thing() : thing_name_("thing name"){};
    void SetThingName(const std::string thing_name);
    const std::string_view GetThingName();

    ~Thing() = default;
};
