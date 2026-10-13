/* Entry 0x08873B64 | file offset 0x00070B3C | FUN_08873b64 | bytes 188 */

undefined4
FUN_08873b64(float param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x220) < 0x10) {
    if (param_1 <= *(float *)(param_2 + 0x22c)) {
      uVar1 = 0;
    }
    else {
      FUN_089a3868(param_2 + *(int *)(param_2 + 0x220) * 0x20 + 0x20,param_3);
      iVar2 = *(int *)(param_2 + 0x220);
      uVar1 = 1;
      iVar3 = param_2 + iVar2 * 0x20;
      *(float *)(iVar3 + 0x30) = param_1;
      *(undefined4 *)(iVar3 + 0x34) = param_4;
      *(undefined4 *)(iVar3 + 0x38) = param_5;
      *(int *)(param_2 + 0x220) = iVar2 + 1;
      *(float *)(param_2 + 0x22c) = param_1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

