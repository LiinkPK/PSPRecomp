/* Entry 0x08854B14 | file offset 0x00051AEC | FUN_08854b14 | bytes 1176 */

void FUN_08854b14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  float local_50;
  float local_4c;
  float local_48;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  
  if ((*param_1 != 0) && (iVar1 = FUN_0883739c(param_2), iVar1 != 0)) {
    FUN_089a3efc(auStack_90,param_2 + 0x330);
    iVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x394) + 0x84) + 8),param_3);
    if ((iVar1 != 0) && (iVar1 = FUN_089b1224(iVar1), iVar1 != 0)) {
      if (**(int **)(param_2 + 0x394) == 0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = *(float *)(**(int **)(param_2 + 0x394) + param_3 * 4);
      }
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      FUN_089a383c((float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * fVar4,0,0,0,auStack_40);
      local_34 = 0x3f800000;
      FUN_089a3fb8(auStack_d0,auStack_90,iVar1);
      FUN_089a3f40(&local_50,auStack_d0,auStack_40);
      iVar1 = DAT_09afb89c * 0x343fd + 0x269ec3;
      iVar2 = iVar1 * 0x343fd + 0x269ec3;
      DAT_09afb89c = iVar2 * 0x343fd + 0x269ec3;
      local_50 = (float)(iVar1 >> 0x10 & 0x7fff) * 3.051851e-05 * 0.4 + -0.2 + local_50;
      iVar1 = param_1[4];
      local_4c = (float)(iVar2 >> 0x10 & 0x7fff) * 3.051851e-05 * 0.4 + -0.2 + local_4c;
      local_48 = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.4 + -0.2 + local_48;
      if (iVar1 < 0x28) {
        param_1[4] = iVar1 + 1;
        iVar2 = param_1[2] + ((param_1[3] + iVar1) % 0x28) * 0x60;
        iVar1 = iVar2 + 0x10;
      }
      else {
        iVar1 = param_1[3];
        param_1[3] = iVar1 + 1;
        iVar2 = param_1[2] + iVar1 * 0x60;
        iVar1 = iVar2 + 0x10;
        if (0x27 < param_1[3]) {
          param_1[3] = 0;
        }
      }
      *(undefined4 *)(iVar2 + 0x30) = 0;
      FUN_089a3868(iVar1,&local_50);
      *(undefined4 *)(iVar2 + 0x34) = DAT_089d4db8;
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      *(float *)(iVar2 + 0x38) =
           (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 6.2831855 + -3.1415927;
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      *(float *)(iVar2 + 0x40) =
           (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 6.2831855 + -3.1415927;
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      *(float *)(iVar2 + 0x44) =
           (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 180.0 + 180.0;
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      uVar3 = DAT_09afb89c >> 0x10;
      *(undefined4 *)(iVar2 + 0x48) = 0x3f800000;
      *(float *)(iVar2 + 0x3c) = (float)(uVar3 & 0x7fff) * 3.051851e-05 * 6.2831855 + -3.1415927;
      iVar1 = *(int *)(*(int *)(param_2 + 0x390) + 0xc);
      if ((*(byte *)(param_2 + 0x5b2) & 4) == 0) {
        *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar2 + 0x50) =
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x390) + 0xc) + 0xc);
        iVar1 = *(int *)(param_2 + 0x5a4);
      }
      else {
        *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar2 + 0x50) =
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x390) + 0xc) + 0x14);
        iVar1 = *(int *)(param_2 + 0x5a4);
      }
      if (iVar1 != 0) {
        *(float *)(iVar2 + 0x48) = (float)*(byte *)(iVar1 + 0x71) / 10.0;
      }
    }
  }
  return;
}

