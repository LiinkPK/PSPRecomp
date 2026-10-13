/* Entry 0x08903BB8 | file offset 0x00100B90 | FUN_08903bb8 | bytes 160 */

undefined4 FUN_08903bb8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  FUN_08905848((int)param_1 + 0x11d);
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocMatchingStart(*param_1,0x10,0x1400,0x10,0,param_3,param_2);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

