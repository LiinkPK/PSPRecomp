/* Entry 0x088CD2F8 | file offset 0x000CA2D0 | FUN_088cd2f8 | bytes 220 */

undefined4 FUN_088cd2f8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088cd280();
  if ((((param_2 == 0) || (param_3 < 1)) || (param_4 == 0)) || (param_5 < 1)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0887ac70(param_1 + 0x14,param_2,param_3,*(undefined4 *)(DAT_089d6998 + 0xc));
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      iVar1 = FUN_0887ac70(param_1 + 0x24,param_4,param_5,*(undefined4 *)(DAT_089d6998 + 0xc));
      if (iVar1 == 0) {
        uVar2 = 0xfffffffd;
      }
      else {
        *(undefined1 *)(param_1 + 0x10) = 1;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

