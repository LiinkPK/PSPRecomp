/* Entry 0x088CE430 | file offset 0x000CB408 | FUN_088ce430 | bytes 208 */

undefined4
FUN_088ce430(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088ce3d8();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088d0700(DAT_089d7830,param_5,param_6,param_7);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      iVar1 = FUN_088ce8c0(param_1,param_2,param_3,param_4);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
  }
  return uVar2;
}

