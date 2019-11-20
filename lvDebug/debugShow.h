#define LV_DEGDUMP(...) \
{ \
  printf("file: %s\nfunc: [%s]\nline: %d\n", __FILE__, __func__, __LINE__); \
  printf(__VA_ARGS__); \
}
