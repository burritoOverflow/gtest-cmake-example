#include "thing.h"

void Thing::SetThingName(const std::string thing_name) { this->thing_name_ = thing_name; }

const std::string_view Thing::GetThingName() { return this->thing_name_; }
