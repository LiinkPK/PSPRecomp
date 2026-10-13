/* Entry 0x0887D7B8 | file offset 0x0007A790 | FUN_0887d7b8 | bytes 112 */

int FUN_0887d7b8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 4;
  }
  iVar1 = FUN_0885c6cc(*(undefined4 *)(DAT_089d6998 + 0x14),param_2 + 0x10,0,0,1,0);
  FUN_08935524(iVar1,DAT_089d6998 + 0x14,4);
  return iVar1 + 0x10;
}

