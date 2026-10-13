/* Entry 0x08904038 | file offset 0x00101010 | FUN_08904038 | bytes 108 */

undefined4 FUN_08904038(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocMatchingSendData(*param_1,param_2,param_4,param_3);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

