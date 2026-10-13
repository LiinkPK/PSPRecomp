/* Entry 0x088CDCB0 | file offset 0x000CAC88 | FUN_088cdcb0 | bytes 144 */

undefined4 FUN_088cdcb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088cdc60();
  if ((param_2 == 0) || (param_3 < 1)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0887ac70(param_1 + 0x2c,param_2,param_3,*(undefined4 *)(DAT_089d6998 + 0xc));
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(undefined1 *)(param_1 + 0x28) = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

