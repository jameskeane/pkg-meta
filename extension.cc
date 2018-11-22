#include <node.h>
#include <v8.h>
#include <v8-debug.h>

namespace pkg_meta
{

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void findScript(const v8::FunctionCallbackInfo<v8::Value> &args)
{
  if (args[0]->IsFunction()) {
    v8::Local<v8::Function> target = args[0].As<v8::Function>();
    v8::ScriptOrigin origin = target->GetScriptOrigin();
    args.GetReturnValue().Set(origin.ResourceName());
  }
}

void init(Local<Object> exports)
{
  NODE_SET_METHOD(exports, "findScript", findScript);
}

NODE_MODULE(pkg_meta, init)

}