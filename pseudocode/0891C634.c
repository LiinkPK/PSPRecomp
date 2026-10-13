/* Entry 0x0891C634 | file offset 0x0011960C | FUN_0891c634 | bytes 92 */

void FUN_0891c634(int param_1)

{
  int iVar1;
  
  *(char *)(param_1 + 0x2a1f) = *(char *)(param_1 + 0x2a1f) + '\x01';
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2a1f) < 4) {
    iVar1 = FUN_0891c1fc(param_1,(int)*(char *)(param_1 + 0x2a1f));
  }
  if (iVar1 == 0) {
    FUN_0891c330(param_1);
  }
  return;
}

