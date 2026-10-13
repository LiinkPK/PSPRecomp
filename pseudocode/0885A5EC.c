/* Entry 0x0885A5EC | file offset 0x000575C4 | FUN_0885a5ec | bytes 712 */

void FUN_0885a5ec(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  int local_4c;
  
  fVar1 = DAT_089d5eac;
  local_4c = *(int *)(param_1 + 0xc);
  if ((local_4c != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar3 = *(int *)(param_1 + 8);
    local_e0 = 0x3ba3d70a;
    local_dc = 0;
    iVar4 = 0;
    local_d8 = 0x3ca3d70a;
    local_d4 = 0x3f800000;
    if (0 < local_4c) {
      local_50 = local_9c;
      do {
        iVar2 = *(int *)(param_1 + 4) + iVar3 * 0x30;
        if (0.0 < *(float *)(iVar2 + 0x10)) {
          fVar5 = 1.0 - *(float *)(iVar2 + 0x10) / *(float *)(iVar2 + 0x14);
          FUN_089a3a44(fVar5 * fVar5,&local_90,&local_e0);
          local_a0 = local_90;
          local_50 = local_8c;
          local_bc = local_8c;
          local_c0 = local_90;
          local_b8 = local_88;
          local_b4 = local_84;
          FUN_089a3a44(fVar1,&local_70,&local_c0);
          local_b0 = local_70;
          local_cc = local_6c;
          local_d0 = local_70;
          local_c8 = local_68;
          local_c4 = local_64;
          FUN_089a38a8(iVar2,iVar2,&local_d0);
          *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) - fVar1;
          *(float *)(iVar2 + 0x18) =
               *(float *)(iVar2 + 0x18) + *(float *)(iVar2 + 0x1c) * 0.01 * fVar1;
        }
        else if (iVar3 == *(int *)(param_1 + 8)) {
          iVar2 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar2;
          if (0x27 < iVar2) {
            *(undefined4 *)(param_1 + 8) = 0;
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        }
        iVar3 = iVar3 + 1;
        if (0x27 < iVar3) {
          iVar3 = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_4c);
    }
  }
  return;
}

