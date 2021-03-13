
#include "../../reaimgui-cpp-components/src/api_helper.hpp"
#include "../../reaimgui-cpp-components/src/context.hpp"

DEFINE_API(void, THIS_IS_A_TEST, (ImGui_Context*, ctx)(const char*, text), "A test function", {
    FRAME_GUARD;
    ImGui::Text(text);
});