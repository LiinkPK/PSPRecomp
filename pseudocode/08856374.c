/* Entry 0x08856374 | file offset 0x0005334C | FUN_08856374 | bytes 500 */

void FUN_08856374(float param_1,float param_2,float param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,char param_8)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if ((param_7 != 0) && (0.95 <= *(float *)(param_7 + 4))) {
    iVar1 = *(int *)(param_5 + 0xc);
    if (iVar1 < 0x28) {
      *(int *)(param_5 + 0xc) = iVar1 + 1;
      iVar1 = *(int *)(param_5 + 4) + ((*(int *)(param_5 + 8) + iVar1) % 0x28) * 0x30;
    }
    else {
      iVar1 = *(int *)(param_5 + 8);
      *(int *)(param_5 + 8) = iVar1 + 1;
      iVar1 = *(int *)(param_5 + 4) + iVar1 * 0x30;
      if (0x27 < *(int *)(param_5 + 8)) {
        *(undefined4 *)(param_5 + 8) = 0;
      }
    }
    fVar4 = 12.0;
    fVar3 = 24.0;
    if (param_8 == '\x01') {
      param_1 = param_1 * 0.7 + 0.5;
    }
    if (0.0 <= param_2) {
      fVar4 = param_2;
    }
    if (0.0 <= param_3) {
      fVar3 = param_3;
    }
    FUN_089a3868(iVar1);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(float *)(iVar1 + 0x14) = param_1;
    *(float *)(iVar1 + 4) = *(float *)(iVar1 + 4) + 0.015;
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    uVar2 = DAT_09afb89c >> 0x10;
    *(float *)(iVar1 + 0x1c) = fVar4;
    *(float *)(iVar1 + 0x20) = fVar3;
    *(undefined4 *)(iVar1 + 0x24) = param_4;
    *(float *)(iVar1 + 0x18) = (float)(uVar2 & 0x7fff) * 3.051851e-05 * 6.2831855 + -3.1415927;
  }
  return;
}

