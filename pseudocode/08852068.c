/* Entry 0x08852068 | file offset 0x0004F040 | FUN_08852068 | bytes 672 */

void FUN_08852068(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 local_20;
  
  iVar1 = *(int *)(param_1 + 0x3d4);
  if (iVar1 < 0x14) {
    *(int *)(param_1 + 0x3d4) = iVar1 + 1;
    param_1 = param_1 + ((*(int *)(param_1 + 0x3d0) + iVar1) % 0x14) * 0x30;
    iVar1 = param_1 + 0x10;
    puVar2 = (uint *)(param_1 + 0x28);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3d0);
    *(int *)(param_1 + 0x3d0) = iVar1 + 1;
    iVar3 = param_1 + iVar1 * 0x30;
    iVar1 = iVar3 + 0x10;
    puVar2 = (uint *)(iVar3 + 0x28);
    if (0x13 < *(int *)(param_1 + 0x3d0)) {
      *(undefined4 *)(param_1 + 0x3d0) = 0;
    }
  }
  FUN_089a3868(iVar1);
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x14) = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.05 + 0.05;
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x10) = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 10.0 + 24.0;
  local_20 = (uint)CONCAT12((char)((param_3 & 0xffffff) >> 0x10),
                            CONCAT11((char)((param_3 & 0xffffff) >> 8),(char)param_3));
  *puVar2 = local_20;
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x1c) = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 6.2831855;
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x24) = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 6.2831855;
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x20) =
       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.099999994 + 0.15;
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x28) =
       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.099999994 + 0.15;
  return;
}

