/* Entry 0x088D6F24 | file offset 0x000D3EFC | FUN_088d6f24 | bytes 260 */

undefined4
FUN_088d6f24(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 uStackX_0,
            undefined4 uStackX_4,undefined4 uStackX_8)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088d6dbc();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088cf188(DAT_089d7830,param_6,param_7,param_8,uStackX_0,uStackX_4,uStackX_8);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      iVar1 = FUN_088d7720(param_1,param_2,param_3,param_4,param_5,0,0);
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

