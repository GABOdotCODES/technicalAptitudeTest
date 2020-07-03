#include <node.h>

void Operation(const v8::FunctionCallbackInfo<v8::Value>& args) {
  v8::Isolate* isolate = args.GetIsolate();

  double a = 324.4234, b = 434235.235235;
  for (int i = 0; i < 100000; i++) {
    a += b;
  }

  auto total = v8::Number::New(isolate, a);
  
  args.GetReturnValue().Set(total);
}

void Initialize(v8::Local<v8::Object> exports) {
  NODE_SET_METHOD(exports, "operations", Operation);
}

NODE_MODULE(addon, Initialize)