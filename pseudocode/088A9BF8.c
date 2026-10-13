/* Entry 0x088A9BF8 | file offset 0x000A6BD0 | FUN_088a9bf8 | bytes 32 */

bool FUN_088a9bf8(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    bVar1 = *(int *)(param_1 + 0x1c) == 0;
  }
  return bVar1;
}

