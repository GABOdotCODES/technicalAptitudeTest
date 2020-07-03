#include <node.h>
using namespace v8;

void add(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();

  double value = args[0].As<Number>()->Value() + args[1].As<Number>()->Value();
  
  Local<Number> num = Number::New(isolate, value);

  args.GetReturnValue().Set(value);
}

void subtract(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  
  double value = args[0].As<Number>()->Value() - args[1].As<Number>()->Value();
  
  Local<Number> num = Number::New(isolate, value);

  args.GetReturnValue().Set(value);
}

void Init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "add", add);
  NODE_SET_METHOD(exports, "subtract", subtract);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Init)
