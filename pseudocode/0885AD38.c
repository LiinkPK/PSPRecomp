/* Entry 0x0885AD38 | file offset 0x00057D10 | FUN_0885ad38 | bytes 520 */

void FUN_0885ad38(float param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
                 ,int param_6,undefined4 param_7,char param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_4 + 4);
  if (((iVar3 != 0) && (param_6 != 0)) && (0.95 <= *(float *)(param_6 + 4))) {
    iVar2 = *(int *)(param_4 + 0xc);
    if (iVar2 < 0x28) {
      *(int *)(param_4 + 0xc) = iVar2 + 1;
      iVar3 = iVar3 + ((*(int *)(param_4 + 8) + iVar2) % 0x28) * 0x30;
    }
    else {
      iVar2 = *(int *)(param_4 + 8);
      *(int *)(param_4 + 8) = iVar2 + 1;
      iVar3 = iVar3 + iVar2 * 0x30;
      if (0x27 < *(int *)(param_4 + 8)) {
        *(undefined4 *)(param_4 + 8) = 0;
      }
    }
    FUN_089a3868(iVar3);
    *(undefined4 *)(iVar3 + 0x14) = param_3;
    *(undefined4 *)(iVar3 + 0x10) = param_3;
    *(float *)(iVar3 + 0x18) = param_1;
    *(undefined4 *)(iVar3 + 0x1c) = param_2;
    *(float *)(iVar3 + 4) = *(float *)(iVar3 + 4) + 0.015;
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    *(float *)(iVar3 + 0x20) =
         (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 6.2831855 + -3.1415927;
    if (param_8 != '\0') {
      fVar1 = 0.3;
      if (0.3 <= param_1 * 0.8) {
        fVar1 = param_1 * 0.8;
      }
      if (2.0 < fVar1) {
        fVar1 = 2.0;
      }
      FUN_0884ad14(param_1,fVar1,iVar3,param_7,&DAT_09af84e0);
    }
  }
  return;
}

