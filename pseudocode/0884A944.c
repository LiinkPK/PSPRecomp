/* Entry 0x0884A944 | file offset 0x0004791C | FUN_0884a944 | bytes 108 */

void FUN_0884a944(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_089d4d78 + 8) = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_088820d8(param_2);
  *(undefined4 *)(DAT_089d4d78 + 4) = uVar1;
  FUN_08935524(*(undefined4 *)(DAT_089d4d78 + 4),param_1 + 8,param_2 + -8);
  return;
}

