//#LinkerDriver:clang
//#LinkArgs:-Wl,-rpath,/wild-rpath-test/a -Wl,-rpath,/wild-rpath-test/b -Wl,-rpath,/wild-rpath-test/a
//#Contains:/wild-rpath-test/a
//#Contains:/wild-rpath-test/b

int main() { return 42; }
