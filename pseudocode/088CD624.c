/* Entry 0x088CD624 | file offset 0x000CA5FC | FUN_088cd624 | bytes 224 */

undefined4
FUN_088cd624(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088cd4c8();
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
      iVar1 = FUN_088cdd84(param_1,param_2,param_3,param_4,param_8);
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

