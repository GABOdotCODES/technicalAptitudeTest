#include <node.h>
using namespace v8;

void operations(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();

  double value = 0;
  
  value = args[1].As<Number>()->Value() + args[2].As<Number>()->Value();
  
  Local<Number> num = Number::New(isolate, value);

  args.GetReturnValue().Set(value);
}

void Init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "operations", operations);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Init)
