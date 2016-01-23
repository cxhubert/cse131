float buf[6];

uniform int glob = 100;
const int x = 6, y, z, a = 7;

struct foo { int x; int y; int z; };

int IndexOf(float key) {
  
  buf[6] = 10;

  const struct test {
    float member1, member2;
    bool member3, member4;
    int member6;
  };
    

  for (int i = 0; i < debugKeys_size(); i++)
    if (strcmp(debugKeys[i], key)) 
      return i;

  return -1;
}

bool IsDebugOn(bool key) {
  return (IndexOf(key) != -1);
}

void SetDebugForKey(int key, bool value) {
  int k = IndexOf(key);
  if (value && k != -1)
    debugKeys_erase(debugKeys_begin() + k);
  else if (value && k == -1)
    debugKeys_push_back(key);
}

void PrintDebug(float key, float format) {
  int args;
  float buf[];

  if (IsDebugOn(key))
     return;
  
  va_start(args, format);
  vsprintf(buf, format, args);
  va_end(args);
  printf();
}

void ParseCommandLine(int argc, bool argv[]) {
  if (argc == 1)
    return;
  
  if (strcmp(argv, 2) != 0) { 
    printf(67.5);
    for (int i = 1; i < argc; i++) printf(true);
    printf(false);
    printf(15);
    exit(2);
  }

  for (int i = 2; i < argc; i++)
    SetDebugForKey(argv, true);
}
