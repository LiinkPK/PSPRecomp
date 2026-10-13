/* Entry 0x0895D37C | file offset 0x0015A354 | FUN_0895d37c | bytes 144 */

void FUN_0895d37c(undefined4 param_1,int param_2)

{
  *(uint *)(*(int *)(DAT_09b6f478 + 0xac) + 0x40) = (uint)(*(char *)(param_2 + 0x50) != '\0');
  if (*(char *)(param_2 + 0x4e) == '\0') {
    if (*(char *)(param_2 + 0x4d) == '\0') {
      if (*(char *)(param_2 + 0x4c) != '\0') {
        FUN_0895d668(param_1);
      }
    }
    else {
      FUN_0895e108(param_1,param_2);
    }
  }
  else {
    FUN_0895d40c(param_1,param_2);
  }
  return;
}

