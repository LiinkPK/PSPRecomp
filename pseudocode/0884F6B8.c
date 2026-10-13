/* Entry 0x0884F6B8 | file offset 0x0004C690 | FUN_0884f6b8 | bytes 60 */

undefined4 FUN_0884f6b8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1 = param_1 + param_2 * 0x20;
  if ((*(short *)(param_1 + 0x12) == 0) || (*(char *)(param_1 + 0x1b) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}

